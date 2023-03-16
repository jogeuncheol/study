#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
** 배열 두배 만들기
*/

vector<int> solution(vector<int> numbers)
{
    vector<int> answer;
    
    for (int i = 0; i < numbers.size(); i++)
    {
        answer.push_back(numbers.at(i) * 2);
    }
    return answer;
}

int main()
{
    vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    vector<int> double_nums = solution(numbers);
    for (int i = 0; i < double_nums.size(); i++)
    {
        cout << double_nums.at(i) << " ";
    }
    return 0;
}