#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 두 개 뽑아서 더하기
*/

vector<int> solution(vector<int> numbers)
{
    vector<int> answer;

    for (int i = 0; i < numbers.size() - 1; ++i)
    {
        int min = i;
        for (int j = i + 1; j < numbers.size(); ++j)
        {
            if (numbers[min] > numbers[j])
                min = j;
        }
        if (min != i)
            swap(numbers[min], numbers[i]);
    }
    vector<int> n(numbers[numbers.size() - 1] + numbers[numbers.size() - 2] + 1, 0);
    for (int i = 0; i < numbers.size() - 1; ++i)
    {
        for (int j = i + 1; j < numbers.size(); ++j)
            n[numbers[i] + numbers[j]]++;
    }
    for (int i = 0; i < n.size(); ++i)
    {
        if (n[i] > 0)
            answer.emplace_back(i);
    }
    return answer;
}

int main()
{
    for (int i : solution({2, 1, 3, 4, 1}))
        cout << i << " ";
    cout << endl;
    for (int i : solution({5,0,2,7}))
        cout << i << " ";
    cout << endl;
    return 0;
}