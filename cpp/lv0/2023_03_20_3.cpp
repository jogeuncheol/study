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

    vector<int> array = emergency;
    for (int i = 0; i < array.size() - 1; i++)
    {
        for (int j = i + 1; j < array.size(); j++)
        {
            if (array.at(i) < array.at(j))
            {
                int tmp = array.at(i);
                array[i] = array.at(j);
                array[j] = tmp;
            }
        }
    }
    for (auto e : emergency)
    {
        for (int i = 0; i < emergency.size(); i++)
        {
            if (e == array.at(i))
            {
                answer.push_back(i + 1);
                break;
            }
        }
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