#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 3진법 뒤집기
*/

int solution(int n)
{
    int answer = 0;

    string num = "";
    while (n)
    {
        num += to_string(n % 3);
        n /= 3;
    }
    for (int i = 0; i < num.size(); ++i)
    {
        n = 1;
        if (num[i] == '0')
            continue;
        for (int j = 0; j < num.size() - 1 - i; ++j)
            n *= 3;
        answer += n * (num[i] - '0');
    }
    return answer;
}

int main()
{
    cout << solution(45) << endl;
    cout << solution(125) << endl;
    return 0;
}