#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * lv2
 * 숫자의 표현
*/

int solution(int n)
{
	int answer = 0;
	
	for (int i = 1; i <= n; ++i)
	{
		int sum = 0;
		for (int j = i; j <= n; ++j)
		{
			sum += j;
			if (sum == n)
			{
				answer++;
				break;
			}
			else if (sum > n)
				break;
		}
	}
	return answer;
}

int main()
{
	cout << solution(15) << endl;
	return 0;
}