#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

/**
 * lv2
 * 타겟 넘버
*/

int bfs(vector<int> numbers, int target)
{
	int count = 0;
	queue<pair<int, int>> q;

	// (index, 누적 합)
	q.push(pair<int, int>(0, numbers[0]));
	q.push(pair<int, int>(0, -numbers[0]));
	while (!q.empty())
	{
		int idx = q.front().first;
		int sum = q.front().second;
		cout << "idx : " << idx << " " << "sum : " << sum << endl;
		q.pop();
		if (sum == target && idx == numbers.size() - 1)
			count++;
		else if (idx < numbers.size() - 1)
		{
			q.push(pair<int, int>(idx + 1, sum + numbers[idx + 1]));
			q.push(pair<int, int>(idx + 1, sum - numbers[idx + 1]));
		}
	}
	return count;
}

int solution(vector<int> numbers, int target)
{
	int answer = 0;

	answer = bfs(numbers, target);
	return answer;
}

int main()
{
	cout << solution({1, 1, 1, 1, 1}, 3) << endl;
	return 0;
}