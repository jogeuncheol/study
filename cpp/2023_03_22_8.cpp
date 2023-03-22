#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 소인수분해
*/

vector<int> solution(int n)
{
    vector<int> answer;

    for (int i = 2; i <= n;)
    {
        if (n % i == 0)
            answer.push_back(i);
        while (n % i == 0)
            n /= i;
        i++;
    }
    return answer;
}

int main()
{
    for (auto s : solution(10000))
        cout << s << ", ";
    cout << endl;
    return 0;
}