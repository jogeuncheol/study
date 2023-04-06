#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 가장 가까운 같은 글자
*/

vector<int> solution(string s)
{
    vector<int> answer;

    vector<int> alpha(26, -1);
    for (int i = 0; i < s.length(); ++i)
    {
        if (alpha[s[i] - 'a'] == -1)
            answer.emplace_back(alpha[s[i] - 'a']);
        else
            answer.emplace_back(i - alpha[s[i] - 'a']);
        alpha[s[i] - 'a'] = i;
    }
    return answer;
}

int main()
{
    for (auto i : solution("banana"))
        cout << i << " ";
    cout << endl;
    for (auto i : solution("foobar"))
        cout << i << " ";
    cout << endl;
    return 0;
}