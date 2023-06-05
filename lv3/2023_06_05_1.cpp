#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

/**
 * lv3
 * 네트워크
*/

int solution(int n, vector<vector<int>> computers)
{
	int answer = 0;
	string visited;
	queue<pair<int, int>> q; // com, call

	for (int i = 0; i < n; i++)
	{
		if (visited.find(to_string(i)) != string::npos)
			continue;
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				visited.append(to_string(i));
			else if (computers[i][j])
			{
				q.push(pair<int, int>(i, j));
				visited.append(to_string(i));
			}
		}
		while (!q.empty())
		{
			int com = q.front().first;
			int call = q.front().second;
			q.pop();

			if (visited.find(to_string(call)) == string::npos)
			{
				for (int j = 0; j < n; j++)
				{
					if (call == j)
						visited.append(to_string(call));
					else if (computers[call][j])
					{
						q.push(pair<int, int>(call, j));
						visited.append(to_string(call));
					}
				}
			}
		}
		answer++;
	}
	return answer;
}

int main()
{
	cout << solution(3, {{1, 1, 0}, {1, 1, 0}, {0, 0, 1}}) << " == 2" << endl; // 2
	cout << solution(3, {{1, 1, 0}, {1, 1, 1}, {0, 1, 1}}) << " == 1" << endl; // 1
	cout << solution(3, {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}}) << " == 3" << endl; // 3
	cout << solution(3, {{1, 0, 1}, {0, 1, 0}, {1, 0, 1}}) << " == 2" << endl; // 2
	cout << solution(5, {{1, 1, 0, 1, 1},
						 {1, 1, 0, 0, 0},
						 {0, 0, 1, 1, 0},
						 {1, 0, 1, 1, 0},
						 {1, 0, 0, 0, 1}}) << " == 1" << endl; // 1
	cout << solution(4, {{1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}}) << " == 4" << endl; // 4
	cout << solution(4, {{1, 1, 0, 0}, {1, 1, 0, 1}, {0, 0, 1, 0}, {0, 1, 0, 1}}) << " == 2" << endl; // 2
	cout << solution(4, {{1, 1, 1, 0}, {1, 1, 0, 1}, {1, 0, 1, 0}, {0, 1, 0, 1}}) << " == 1" << endl; // 1
	cout << solution(4, {{1, 1, 0, 0}, {1, 1, 0, 0}, {0, 0, 1, 1}, {0, 0, 1, 1}}) << " == 2" << endl; // 2
	cout << solution(4, {{1, 1, 0, 1}, {1, 1, 0, 0}, {0, 0, 1, 1}, {1, 0, 1, 1}}) << " == 1" << endl; // 1
	cout << solution(7, {{1,0,0,0,0,0,1},
						 {0,1,1,0,1,0,0},
						 {0,1,1,1,0,0,0},
						 {0,0,1,1,0,0,0},
						 {0,1,0,0,1,1,0},
						 {0,0,0,0,1,1,1},
						 {1,0,0,0,0,1,1}}) << " == 1" << endl; // 1
	cout << solution(5, {{1, 1, 0, 0, 0}, 
						 {0, 1, 1, 0, 0}, 
						 {0, 0, 1, 1, 0}, 
						 {0, 0, 0, 1, 0}, 
						 {0, 0, 0, 1, 1}}) << " == 1?" << endl;
	cout << solution(4, {{1, 0, 0, 1}, {0, 1, 1, 0}, {0, 1, 1, 0}, {1, 1, 0, 1}}) << " == 1" << endl;
	return 0;
}