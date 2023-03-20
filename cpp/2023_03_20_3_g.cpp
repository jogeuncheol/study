#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 진료 순서 정하기
 * 응급도가 높은 순서대로 진료 순서를 정한 배열
 * [3, 76, 24] << [3(순위), 1(순위), 2(순위)]
*/

vector<int> solution(vector<int> emergency)
{
    vector<int> answer;

    int count;
    for (auto e1 : emergency)
    {
        count = 1;
        for (auto e2 : emergency)
        {
            count = count + (e2 > e1);
        }
        answer.push_back(count);
    }
    return answer;
}

int main()
{
    vector<int> emergency = {1, 2, 3, 4, 5};
    for (auto e : solution(emergency))
        cout << e << " ";
    return 0;
}