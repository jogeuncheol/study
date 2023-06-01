#include <iostream>

using namespace std;

/**
 * lv2
 * 예상 대진표
*/

int solution(int n, int a, int b)
{
    int answer = 1;

	while ((a / 2) + (a % 2) != (b / 2) + (b % 2))
	{
		answer++;
		a = (a / 2) + (a % 2);
		b = (b / 2) + (b % 2);
	}
    return answer;
}

int main()
{
    cout << solution(8, 4, 7) << endl;
    cout << solution(16, 5, 4) << endl;
    return 0;
}