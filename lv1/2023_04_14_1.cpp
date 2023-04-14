#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int N, vector<int> stages)
{
    vector<int> answer;

    vector<int> fail(N + 2, 0);
    vector<double> rate(N + 1, 0.0);
    for (int stage : stages)
        fail[stage]++;

    int pass = stages.size();
    for (int i = 1; i < N + 1; ++i)
    {
        if (!fail[i])
            rate[i] = 0;
        else
            rate[i] = (double)fail[i] / pass;
        pass -= fail[i];
    }

    for (double r : rate)
        cout << r << ", ";
    cout << endl;
    
    int max = 1;
    for (int i = 1; i < N + 1; ++i)
    {
        for (int j = 1; j < N + 1; ++j)
        {
            if (rate[max] < rate[j])
                max = j;
        }
        answer.emplace_back(max);
        rate[max] = -1.0;
    }
    return answer;
}

int main()
{
    for (int s : solution(5, {2, 1, 2, 6, 2, 4, 3, 3}))
        cout << s << " ";
    cout << endl;

    for (int s : solution(4, {4, 4, 4, 4, 4}))
        cout << s << " ";
    cout << endl;

    for (int s : solution(5, {1, 1, 2, 2, 3, 3, 3, 4}))
        cout << s << " ";
    cout << endl;
    return 0;
}