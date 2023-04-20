#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 체육복
*/

void sort(vector<int> &v, size_t len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < len; j++)
        {
            if (v[min] > v[j])
                min = j;
        }
        if (min != i)
            swap(v[min], v[i]);
    }
}

int solution(int n, vector<int> lost, vector<int> reserve)
{
    int answer = 0;

    sort(lost, lost.size());
    sort(reserve, reserve.size());
    for (int &l : lost)
    {
        for (int &r : reserve)
        {
            if (l == r)
            {
                l = 0;
                r = 0;
                answer++;
            }
        }
    }
    answer = n - lost.size() + answer;
    for (int l : lost)
    {
        if (!l)
            continue;
        for (int i = 0; i < reserve.size(); i++)
        {
            if (!reserve[i])
                continue;
            else if (l + 1 == reserve[i] || l - 1 == reserve[i])
            {
                answer++;
                reserve[i] = 0;
                break;
            }
        }
    }
    return answer;
}

int main()
{
    cout << solution(5, {2, 4}, {1, 3, 5}) << endl;
    cout << solution(10, {1, 2, 3}, {2, 3, 4}) << endl;
    cout << solution(5, {2, 3, 4}, {1, 2, 3}) << endl;
    cout << solution(7, {2, 4}, {1, 3}) << endl;
    cout << solution(4, {3, 1}, {2, 4}) << endl;
    return 0;
}