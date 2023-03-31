#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int M, int N)
{
	int answer = 0;

	answer = (M * N) - 1;
	return answer;
}

int main()
{
	cout << solution(3, 5) << endl;
	return 0;
}
