#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 예산
*/

int solution(vector<int> d, int budget){
    int answer = 0;

    for (int i = 0; i < d.size() - 1; ++i)
    {
        int min = i;
        for (int j = i + 1; j < d.size(); ++j)
        {
            if (d[min] > d[j])
                min = j;
        }
        if (min != i)
        {
            int tmp = d[i];
            d[i] = d[min];
            d[min] = tmp;
        }
    }
    for (int i : d)
    {
        budget -= i;
        if (budget < 0)
            break;
        answer++;
    }
    return answer;
}

int main()
{
    cout << solution({1, 3, 2, 5, 4}, 9) << endl;
    cout << solution({2, 2, 3, 3}, 10) << endl;
    return 0;
}