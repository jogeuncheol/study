#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
** 중앙값 구하기
*/

int solution(vector<int> array)
{
    int answer = 0;
    
    for (int i = 0; i < array.size() - 1; i++)
    {
        for (int j = i; j < array.size(); j++)
        {
            if (array.at(i) > array.at(j))
            {
                int tmp = array.at(i);
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
    answer = array.at(array.size() / 2);
    return answer;
}

int main()
{
    vector<int> v;
    v.push_back(-3);
    v.push_back(9);
    v.push_back(-1);
    v.push_back(0);
    v.push_back(11);
    cout << solution(v) << endl;
    return 0;
}