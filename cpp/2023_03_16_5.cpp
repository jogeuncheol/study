#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
** 최빈값 구하기 
*/

int solution(vector<int> array)
{
    int answer = 0;

    vector<int> check(1000, 0);
    for (int i = 0; i < array.size(); i++)
    {
        check[array.at(i)]++;
    }
    for (int i = 0; i < check.size(); i++)
    {
        if (check.at(answer) < check.at(i))
            answer = i;
    }
    cout << answer << ", " << check.size() << endl;
    int flag = 0;
    for (int i = 0; i < check.size(); i++)
    {
        if (check.at(i) == check.at(answer))
        {
            flag++;
            if (flag > 1)
            {
                answer = -1;
                break;
            }
        }
    }
    for (int i = 0; i < check.size(); i++)
    {
        if (i % 10 == 0)
            cout << endl;
        cout << check.at(i) << " ";
    }
    return answer;
}

int main()
{
    vector<int> v;
    for (int i = 0; i < 100; i++)
    {
        v.push_back(i + 900);
    }
    v[1] = 902;
    v[5] = 903;
    cout << solution(v) << endl;
    return 0;
}