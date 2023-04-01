#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2)
{
    vector<int> answer;

    answer.push_back(numer1*denom2 + numer2*denom1);
    answer.push_back(denom1*denom2);
    for (int i = 2; i <= answer[1];)
    {
        if (answer[0] % i == 0 && answer[1] % i == 0)
        {
            answer[0] = answer[0] / i;
            answer[1] = answer[1] / i;
            continue;
        }
        else
            i++;
    }
    return answer;
}

int main()
{
    vector<int> v = solution(40, 30, 20, 10);
    cout << v[0] << " / " << v[1] << endl;
    return 0;
}