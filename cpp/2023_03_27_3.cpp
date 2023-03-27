#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 최댓값 만들기 (2)
*/

int solution(vector<int> numbers)
{
    int answer = 0;

    for (int i = 0; i < numbers.size() - 1; i++)
    {
        for (int j = i + 1; j < numbers.size(); j++)
        {
            if (numbers.at(i) > numbers.at(j))
            {
                int tmp = numbers.at(i);
                numbers.at(i) = numbers.at(j);
                numbers.at(j) = tmp;
            }
        }
    }
    answer = max(
        (*numbers.begin() * *(numbers.begin() + 1)), 
        (*numbers.rbegin() * *(numbers.rbegin() + 1))
    );
    return answer;
}

int main()
{
    cout << solution({1, 2, -3, 4, -5}) << endl;
    cout << solution({0, -31, 24, 10, 1, 9}) << endl;
    cout << solution({10, 20, 30, 5, 5, 20, 5}) << endl;
    return 0;
}