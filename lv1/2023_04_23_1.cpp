#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 문자열 나누기
 * abcabc -> a(1)b(1) | c(1)a(1) | b(1)c(1), output : 3
 * aaabbaccccabba -> aaa(3)bb(2)a(4)cc(2) | cc(2)a(1)b(1) | b(1)a(1), output : 3
 * aabcddnaaaaccbb -> aa(2)b(1)c(1) | dd(2)n(1)a(1) | aaa(3)cc(2)b(1) | b(1), output : 4 (O)
 * aabcddnaaaaccbb -> aa(2)b(1)c(1) | dd(2)n(1)a(1) | aaa(3)cc(2)bb(2), output : 3 (X)
*/

int solution(string s)
{
    int answer = 0;

    char alpha = 0;
    int count[2] = {0};
    for (char c : s)
    {
        if (!alpha)
            alpha = c;
        if (alpha == c)
            count[0]++;
        else
            count[1]++;
        if (count[0] == count[1])
        {
            answer++;
            alpha = 0;
            count[0] = 0;
            count[1] = 0;
        }
    }
    if (alpha)
        answer++;
    return answer;
}

int ssolution(string s)
{
    int answer = 0;

    string alpha = "";
    vector<int> count;
    for (int i = 0; i < s.length(); ++i)
    {
        int idx = alpha.find(s[i]);
        if (idx == string::npos)
        {
            alpha += s[i];
            count.emplace_back(0);
        }
        if ((idx = alpha.find(s[i])) != string::npos)
        {
            count[idx]++;
            for (int j = 0; j < idx; j++)
            {
                if (count.at(j) == count[idx])
                {
                    answer++;
                    alpha.clear();
                    count.clear();
                }
            }
        }
    }
    if (!alpha.empty())
        answer++;
    return answer;
}

int main()
{
    cout << solution("abcd") << endl;
    cout << solution("banana") << endl;
    cout << solution("aaabbaccccabba") << endl;
    cout << solution("abracadabra") << endl;
    cout << solution("aabcddnaaaaccbb") << endl;
    cout << solution("aaaaaaaaaaabbbb") << endl;
    cout << solution("aabbccdd") << endl;
    cout << solution("aabbcddd") << endl;
    cout << solution("a") << endl;
    cout << solution("abbb") << endl;
    cout << solution("aaba") << endl;
    return 0;
}