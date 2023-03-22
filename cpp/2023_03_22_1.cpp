#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 주사위의 개수
*/

int solution(vector<int> box, int n)
{
    int answer = 0;

    answer = 1;
    for (auto b : box)
        answer *= b / n;
    return answer;
}

int main()
{
    cout << solution({100, 100, 51}, 50) << endl;
    return 0;
}