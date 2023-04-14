#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 추억 점수
*/

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo)
{
    vector<int> answer;

    for (int i = 0; i < photo.size(); ++i)
    {
        answer.emplace_back(0);
        for (int j = 0; j < photo[i].size(); ++j)
        {
            for (int k = 0; k < name.size(); ++k)
            {
                if (photo[i][j] == name[k])
                    answer[i] += yearning[k];
            }
        }
    }
    return answer;
}

int main()
{
    for (int s : solution({"may", "kein", "kain", "radi"}, {5, 10, 1, 3}, {{"may", "kein", "kain", "radi"}, {"may", "kein", "brin", "deny"}, {"kon", "kain", "may", "coni"}}))
        cout << s << " ";
    cout << endl;
    return 0;
}