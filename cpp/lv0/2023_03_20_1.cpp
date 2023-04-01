#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 배열 자르기
*/

vector<int> solution(vector<int> numbers, int num1, int num2)
{
    vector<int> answer;

    for (int i = num1; i <= num2; i++)
        answer.push_back(numbers.at(i));
    return answer;
}

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto n : solution(numbers, 1, 2))
        cout << n << " ";
    cout << endl;
    return 0;
}