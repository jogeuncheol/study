#include <iostream>

using namespace std;

/**
 * lv2
 * 점프와 순간 이동
*/

int solution(int n)
{
	int ans = 0;
	
	while (!n % 2)
		n /= 2;
	while (n)
	{
		if (n % 2)
			ans++;
		n /= 2;
	}
	return ans;
}

int main()
{
	cout << solution(5) << endl;
	cout << solution(6) << endl;
	cout << solution(5000) << endl;
	return 0;
}