#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 시저 암호
*/

string solution(string s, int n)
{
    string answer = "";

    for (char c : s)
    {
        if (c >= 'a' && c <= 'z')
            answer += 'a' + (c - 'a' + n) % 26;
        else if (c >= 'A' && c <= 'Z')
            answer += 'A' + (c - 'A' + n) % 26;
        else
            answer += c;
    }
    return answer;
}

int main()
{
    cout << solution("AB", 1) << endl;
    cout << solution("AB", 3) << endl;
    cout << solution("z", 1) << endl;
    cout << solution("z", 2) << endl;
    cout << solution("a B z", 4) << endl;
    cout << solution("a B z", 25) << endl;
    cout << solution("AB", 25) << endl;
    for (int i = 1; i < 26; ++i)
        cout << solution("AB ab", i) << endl;
    return 0;
}