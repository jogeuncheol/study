#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
** 짝수는 싫어요
*/

vector<int> solution(int n)
{
    vector<int> answer;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            answer.push_back(i);
    }
    return answer;
}

int main()
{
    vector<int> v = solution(10);
    for (auto i : v)
        cout << i << " ";
    cout << endl;
    return 0;
}