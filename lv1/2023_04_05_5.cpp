#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 크기가 작은 부분문자열
*/

int solution(string t, string p)
{
    int answer = 0;

    for (size_t i = 0; i <= t.length() - p.length(); ++i)
    {
        if (t[i] <= p[0])
        {
            if (stoll(t.substr(i, p.length())) <= stoi(p))
                answer++;
        }
        else
            continue;
    }
    return answer;
}

int main()
{
    cout << solution("3141592", "271") << endl;
    cout << solution("500220839878", "7") << endl;
    cout << solution("10203", "15") << endl;
    cout << solution("10203", "10202") << endl;
    cout << solution("10203", "1050") << endl;
    cout << solution("1221351118575141528544", "12511") << endl;
    return 0;
}