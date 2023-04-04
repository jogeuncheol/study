#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 최대공약수와 최소공배수
*/

vector<int> solution(int n, int m)
{
    vector<int> answer;

    int Max = max(n, m);
    int min = Max == n ? m : n;
    int gcd = 0;
    int lcm = 0;
    while (Max % min)
    {
        int tmp = Max;
        Max = min;
        min = tmp % min;
    }
    gcd = min;
    lcm = (n * m) / gcd;
    answer.emplace_back(gcd);
    answer.emplace_back(lcm);
    return answer;
}

int main()
{
    for (int i : solution(2, 5))
        cout << i << " ";
    cout << endl;
    return 0;
}