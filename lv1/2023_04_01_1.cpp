#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 짝수와 홀수
*/

string solution_bit(int num)
{
    string answer = "";

    answer = num & 1 ? "Even" : "Odd";
    return answer;
}

string solution(int num)
{
    string answer = "";

    answer = num % 2 == 0 ? "Even" : "Odd";
    return answer;
}

int main()
{
    cout << solution(6) << endl;
    cout << solution(2147) << endl;
    return 0;
}