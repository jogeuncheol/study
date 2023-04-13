#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 명예의 전당 (1)
*/

vector<int> solution(int k, vector<int> score)
{
    vector<int> answer;

    vector<int> rank;
    for (int s : score)
    {
        rank.emplace_back(s);
        for (int i = 0; i < rank.size() - 1; ++i)
        {
            int max = i;
            for (int j = i + 1; j < rank.size(); ++j)
            {
                if (rank[max] < rank[j])
                    max = j;
            }
            if (max != i)
                swap(rank[max], rank[i]);
        }
        if (rank.size() > k)
            rank.pop_back();
        answer.emplace_back(rank.back());
    }
    return answer;
}

int main()
{
    for (int s : solution(3, {10, 100, 20, 150, 1, 100, 200}))
        cout << s << " ";
    cout << endl;

    for (int s : solution(4, {0, 300, 40, 300, 20, 70, 150, 50, 500, 1000}))
        cout << s << " ";
    cout << endl;
    return 0;
}