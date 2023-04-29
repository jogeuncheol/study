#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 대충 만든 자판
*/

vector<int> solution(vector<string> keymap, vector<string> targets)
{
    vector<int> answer;

    for (string target : targets)
    {
        answer.emplace_back(0);
        for (int i = 0; i < target.size(); ++i)
        {
            int min = keymap[0].find(target[i]);
            for (int j = 1; j < keymap.size(); ++j)
            {
                int idx = keymap[j].find(target[i]);
                if (idx > -1)
                    min = (min > idx) ? idx : (min == -1) ? idx : min;
            }
            if (min == -1)
            {
                answer.back() = -1;
                break;
            }
            else
                answer.back() += min + 1;
        }
    }
    return answer;
}

int main()
{
    for (int s : solution({"ABACD", "BCEFD"}, {"ABCD","AABB"}))
        cout << s << " ";
    cout << endl;

    for (int s : solution({"AA"}, {"B"}))
        cout << s << " ";
    cout << endl;

    for (int s : solution({"AGZ", "BSSS"}, {"ASA", "BGZ"}))
        cout << s << " ";
    cout << endl;
    return 0;
}