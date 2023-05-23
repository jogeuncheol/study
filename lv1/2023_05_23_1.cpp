#include <string>
#include <vector>
#include <iostream>

using namespace std;

/**
 * 공원 산책
*/

vector<int> solution(vector<string> park, vector<string> routes)
{
	vector<int> answer;

	int h = park.size();
	int w = park[0].size();
	// start point
	vector<int> sp(2, 0);
	for (int i = 0; i < h; ++i)
	{
		bool set_sp = false;
		for (int j = 0; j < w; ++j)
		{
			if (park[i][j] == 'S')
			{
				sp[0] = i;
				sp[1] = j;
				set_sp = true;
				break;
			}
		}
		if (set_sp)
			break;
	}
	// valid routes
	for (string r : routes)
	{
		vector<int> gp = sp;
		int move = r[2] - '0';
		if (r[0] == 'E')
			gp[1] += move;
		else if (r[0] == 'W')
			gp[1] -= move;
		else if (r[0] == 'S')
			gp[0] += move;
		else if (r[0] == 'N')
			gp[0] -= move;
		// check park map
		if (gp[0] < 0 || gp[0] > h - 1)
			continue;
		else if (gp[1] < 0 || gp[1] > w - 1)
			continue;
		else
		{
			bool rt = false;
			if (gp[0] != sp[0])
			{
				for (int i = min(sp[0], gp[0]); i <= max(sp[0], gp[0]); i++)
				{
					if (park[i][sp[1]] == 'X')
					{
						rt = true;
						break;
					}
				}
			}
			else if (gp[1] != sp[1])
			{
				for (int i = min(sp[1], gp[1]); i <= max(sp[1], gp[1]); i++)
				{
					if (park[sp[0]][i] == 'X')
					{
						rt = true;
						break;
					}
				}
			}
			if (rt)
				continue;
			sp[0] = gp[0];
			sp[1] = gp[1];
		}
	}
	// answer
	answer.emplace_back(sp[0]);
	answer.emplace_back(sp[1]);
	return answer;
}

int main()
{
	for (auto s : solution({"SOO","OOO","OOO"}, {"E 2","S 2","W 1"}))
		cout << s << " ";
	cout << endl;
	
	for (auto s : solution({"SOO","OXX","OOO"}, {"E 2","S 2","W 1"}))
		cout << s << " ";
	cout << endl;

	for (auto s : solution({"OSO","OOO","OXO","OOO"}, {"E 2","S 3","W 1"}))
		cout << s << " ";
	cout << endl;

	for (auto s : solution({"OSO","OOO","OOO","OOO"}, {"W 2"}))
		cout << s << " ";
	cout << endl;

	for (auto s : solution({"OSO","OOO","OOO","OOO"}, {"E 5"}))
		cout << s << " ";
	cout << endl;

	for (auto s : solution({"XXX","XSX","XXX"}, {"E 1"}))
		cout << s << " ";
	cout << endl;

	for (auto s : solution({"XXX","XSX","XXX"}, {"S 1"}))
		cout << s << " ";
	cout << endl;

	for (auto s : solution({"SOXOO","OOOOO","OOOOO", "OOOOO", "OOOOO"}, {"E 3"}))
		cout << s << " ";
	cout << endl;
	
	for (auto s : solution({"SOOOX","OOOOO","OOOOO", "OOOOO", "OOOOO"}, {"E 3"}))
		cout << s << " ";
	cout << endl;

	for (auto s : solution({"XOOOS","OOOOO","OOOOO", "OOOOO", "OOOOO"}, {"W 3"}))
		cout << s << " ";
	cout << endl;

	for (auto s : solution({"OOXOS","OOOOO","OOOOO", "OOOOO", "OOOOO"}, {"W 3"}))
		cout << s << " ";
	cout << endl;
	return 0;
}