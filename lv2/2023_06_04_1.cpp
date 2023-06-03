#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

/**
 * softeer
 * lv2
 * 장애물 인식 프로그램
*/

int main(int argc, char** argv)
{
	queue<pair<int, int>> q;
	int direction[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
	int N = 0;

	cin >> N;
	int map[N][N];
	int visited[N][N];
	for (int i = 0; i < N; i++)
	{
		int m = 0;
		cin >> m;
		for (int j = 0; j < N; j++)
		{
			map[i][N - 1 - j] = m % 10;
			m /= 10;
			visited[i][j] = 0;
		}
	}

	vector<int> group_count;
	int group = 1;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (visited[i][j] || map[i][j] == 0)
				continue;
			q.push(pair<int, int>(i, j));
			visited[i][j] = group;
			group_count.emplace_back(1);
			while (!q.empty())
			{
				int y = q.front().first;
				int x = q.front().second;
				q.pop();

				for (int k = 0; k < 4; k++)
				{
					int dy = direction[k][0] + y;
					int dx = direction[k][1] + x;

					if (dy >= 0 && dy < N && dx >= 0 && dx < N && visited[dy][dx] == 0 && map[dy][dx] == 1)
					{
						q.push(pair<int, int>(dy, dx));
						visited[dy][dx] = group;
						group_count[group - 1]++;
					}
				}
			}
			group++;
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << map[i][j] << " ";
		cout << endl;
	}
	cout << "-----" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << visited[i][j] << " ";
		cout << endl;
	}
	cout << "-----" << endl;

	// 출력
	cout << group - 1 << endl;
	sort(group_count.begin(), group_count.end());
	for (int i : group_count)
		cout << i << endl;
	return 0;
}