#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * lv2
 * 피보나치 수
*/

int solution(int n)
{
	int answer = 0;

	int n_1 = 1;
	int n_2 = 1;
	for (int i = 3; i <= n; ++i)
	{
		answer = n_1 + n_2;
		n_1 = n_2 % 1234567;
		n_2 = answer % 1234567;
	}
	return answer % 1234567;
}

int main()
{
	cout << solution(100) << endl;
	cout << solution(10000) << endl;
	cout << solution(100000) << endl;
	return 0;
}