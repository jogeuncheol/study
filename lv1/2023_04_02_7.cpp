#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 나누어 떨어지는 숫자 배열
*/

vector<int> solution(vector<int> arr, int divisor)
{
    vector<int> answer;
    
    for (int i = 0; i < arr.size() - 1; ++i)
    {
        int min = i;
        for (int j = i + 1; j < arr.size(); ++j)
        {
            if (arr.at(min) > arr.at(j))
                min = j;
        }
        if (min != i)
        {
            int tmp = arr.at(i);
            arr.at(i) = arr.at(min);
            arr.at(min) = tmp;
        }
    }
    for (int i : arr)
    {
        if (i % divisor == 0)
            answer.emplace_back(i);
    }
    if (answer.empty())
        answer.emplace_back(-1);
    return answer;
}

int main()
{
    for (int i : solution({5, 9, 7, 12, 15}, 5))
        cout << i << " ";
    cout << endl;
    return 0;
}