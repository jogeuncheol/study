#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 배열 뒤집기
*/

vector<int> solution(vector<int> num_list)
{
    vector<int> answer;

    vector<int>::reverse_iterator r_iter;
    for (r_iter = num_list.rbegin(); r_iter != num_list.rend(); r_iter++)
        answer.push_back(*r_iter);
    return answer;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> q = solution(v);

    for (auto i : q)
        cout << i << " ";
    cout << endl;
    return 0;
}