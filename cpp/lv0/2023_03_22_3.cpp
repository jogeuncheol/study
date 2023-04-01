#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 최댓값 만들기 (1)
*/

int solution_g(vector<int> numbers)
{
    int answer = 0;

    int first = 0;
    int second = 0;
    for (auto n : numbers)
    {
        if (first <= n)
        {
            second = first;
            first = n;
        }
        else if (second <= n)
            second = n;
    }
    answer = first * second;
    return answer;
}

int solution(vector<int> numbers)
{
    int answer = 1;

    for (int i = 0; i < 2; i++)
    {
        int max = i;
        for (int j = i + 1; j < numbers.size(); j++)
        {
            if (numbers.at(max) < numbers.at(j))
                max = j;
        }
        answer *= numbers.at(max);
        numbers.at(max) = 0;
    }
    return answer;
}

int main()
{
    cout << solution({1, 2, 3, 4, 5}) << endl;
    cout << solution_g({0, 31, 24, 10, 1, 9}) << endl;
    cout << solution({10000, 10000, 2, 3, 4, 5}) << endl;
    return 0;
}