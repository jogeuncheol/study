#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * lv2
 * 다음 큰 숫자
*/

int binary_count(int n)
{
	int count = 0;

	while (n)
	{
		if (n % 2 == 1)
			count++;
		n /= 2;
	}
	return count;
}

int solution(int n)
{
	int answer = 0;

	int n_count = binary_count(n);
	answer = n + 1;
	while (n_count != binary_count(answer))
		answer++;
	return answer;
}

int main()
{
	cout << solution(78) << endl;
	cout << solution(15) << endl;
	return 0;
}