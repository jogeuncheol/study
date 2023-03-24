#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 약수 구하기
*/

vector<int> solution(int n)
{
    vector<int> answer;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            answer.push_back(i);
    }
    return answer;
}

int main()
{
    for (int i : solution(10000))
        cout << i << " ";
    cout << endl;
    return 0;
}