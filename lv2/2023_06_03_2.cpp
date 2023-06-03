#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

/**
 * lv2
 * 게임 맵 최단거리
*/

void init_visited(vector<vector<int>> &visited, int h, int w)
{
	for (int i = 0; i < h; i++)
	{
		vector<int> row;
		for (int j = 0; j < w; j++)
		{
			row.emplace_back(0);
		}
		visited.emplace_back(row);
	}
}

int bfs(vector<vector<int>> maps)
{
	int count = 1000;
	vector<vector<int>> visited; // 방문한 위치
	queue<pair<int, pair<int, int>>> q; // (이동횟수, (i, j))
	int direction[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; // 상, 하, 좌, 우
	
	init_visited(visited, maps.size(), maps[0].size());
	q.push(pair<int, pair<int, int>>(1, pair<int, int>(0, 0)));
	visited[0][0] = 1;
	while (!q.empty())
	{
		int y = q.front().second.first;
		int x = q.front().second.second;
		int step = q.front().first;
		q.pop();

		if (y == maps.size() - 1 && x == maps[0].size() - 1)
		{
			count = count > step ? step : count;
		}
		else
		{
			for (int i = 0; i < 4; i++)
			{
				int dy = y + direction[i][0];
				int dx = x + direction[i][1];
				cout << "dx: " << dx << " dy: " << dy << endl;
				if (dy >= 0 && dy < maps.size() && dx >= 0 && dx < maps[0].size() && maps[dy][dx] == 1 && visited[dy][dx] == 0)
				{
					q.push(pair<int, pair<int, int>>(step + 1, pair<int, int>(dy, dx)));
					visited[dy][dx] = 1;
				}
			}
		}
	}
	for (auto vv : visited)
	{
		for (auto v : vv)
			cout << v << " ";
		cout << endl;
	}
	return count;
}

int solution(vector<vector<int>> maps)
{
	int answer = 0;

	answer = bfs(maps);
	return answer;
}

int main()
{
	cout << solution({{1, 0, 1, 1, 1}, {1, 0, 1, 0, 1}, {1, 0, 1, 1, 1}, {1, 1, 1, 0, 1}, {0, 0, 0, 0, 1}}) << endl;
	return 0;
}