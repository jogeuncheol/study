#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
 * 배열의 평균값
*/

double solution(vector<int> numbers)
{
    double answer = 0;

    for (auto n : numbers)
        answer += n;
    answer /= numbers.size();
    return answer;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);

    cout << solution(v) << endl;
    return 0;
}