#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 짝수 홀수 개수
*/

vector<int> solution(vector<int> num_list)
{
    vector<int> answer;

    int e = 0;
    int o = 0;
    for (auto n : num_list)
    {
        if (n % 2 == 0)
            e++;
        else
            o++;
    }
    answer.push_back(e);
    answer.push_back(o);
    return answer;
}

int main()
{
    vector<int> num_list = {1, 7, 3, 9, 9};
    for (auto s : solution(num_list))
        cout << s << endl;
    return 0;
}