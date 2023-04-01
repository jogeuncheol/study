#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * A로 B 만들기
*/

int solution_(string before, string after)
{
    int answer = 1;

    vector<int> b_alpha(26, 0);
    vector<int> a_alpha(26, 0);
    for (int i = 0; i < before.length(); ++i)
    {
        b_alpha[before[i] - 'a']++;
        a_alpha[after[i] - 'a']++;
    }
    for (int i = 0; i < 26; ++i)
    {
        if (b_alpha[i] != a_alpha[i])
        {
            answer = 0;
            break;
        }
    }
    return answer;
}

int solution(string before, string after)
{
    int answer = 1;

    sort(before.begin(), before.end());
    sort(after.begin(), after.end());
    for (int i = 0; i < before.length(); ++i)
    {
        if (before[i] != after[i])
        {
            answer = 0;
            break;
        }
    }
    return answer;
}

int main()
{
    cout << solution_("olleh", "hello") << endl;
    cout << solution_("allpe", "apple") << endl;
    return 0;
}