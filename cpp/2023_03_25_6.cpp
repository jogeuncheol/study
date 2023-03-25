#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * n의 배수 고르기
*/

vector<int> solution(int n, vector<int> numlist)
{
    vector<int> answer;

    for (int num : numlist)
    {
        if (num % n == 0)
            answer.push_back(num);
    }
    return answer;
}

int main()
{
    for (auto i : solution(12, {2, 100, 120, 600, 12, 12}))
        cout << i << " ";
    cout << endl;
    return 0;
}