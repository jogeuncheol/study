#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 아이스 아메리카노 5,500
*/

vector<int> solution(int money)
{
    vector<int> answer;

    answer.push_back(money / 5500);
    answer.push_back(money % 5500);
    return answer;
}

int main()
{
    vector<int> v = solution(3000);
    for (auto i : v)
        cout << i << " ";
    cout << endl;
    return 0;
}