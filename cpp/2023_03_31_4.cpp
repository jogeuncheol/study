#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common)
{
	int answer = 0;

	answer = common[1] - common[0];
	if (answer == common[2] - common[1])
		answer += common[common.size() - 1];
	else
	{
		answer = common[1] / common[0];
		answer *= common[common.size() - 1];
	}
	return answer;
}

int main()
{
	vector<int> v = {1, 2, 3, 4};
	cout << solution({4, 3, 2, 1}) << endl;
	cout << solution({8, 4, 2}) << endl;
	cout << solution({1, 2, 3, 4}) << endl;
	cout << solution({1, 3, 5, 7}) << endl;
	cout << solution({-4, 4, -4, 4}) << endl;
	return 0;
}
