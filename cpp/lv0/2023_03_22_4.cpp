#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0;

    int f = 1;
    for (int i = 1; i <= 10; i++)
    {
        f *= i;
        if (f > n)
        {
            answer = i - 1;
            break;
        }
        else if (f == n)
        {
            answer = i;
            break;
        }
    }
    return answer;
}

int main()
{
    cout << solution(3628800) << endl;
    cout << solution(7) << endl;
    return 0;
}