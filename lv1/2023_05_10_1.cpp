#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

/**
 * 달리기 경주
*/

vector<string> solution(vector<string> players, vector<string> callings)
{
    vector<string> answer;
    
    answer = players;
	// player, rank
	vector<vector<int>> player('z' * 10 + 1, vector<int>());
	vector<vector<string>> name('z' * 10 + 1, vector<string>());
	vector<int> rank(answer.size(), 0);
	for (int i = 0; i < answer.size(); ++i)
	{
		int key = 0;
		for (char c : answer[i])
			key += c;
		player[key].emplace_back(i);
		name[key].emplace_back(answer[i]);
		rank[i] = key;
	}
	// for (vector<int> p : player)
	// {
	// 	if (p.size() == 0) continue;
	// 	for (int i : p)
	// 	{
	// 		cout << i << " ";
	// 	}
	// 	cout << endl;
	// }
	// for (vector<string> n : name)
	// {
	// 	if (n.size() == 0) continue;
	// 	for (string s : n)
	// 	{
	// 		cout << s << " ";
	// 	}
	// 	cout << endl;
	// }
	for (int i = 0; i < callings.size(); ++i)
	{
		for (string a : answer)
		{
			cout << a << " ";
		}
		cout << "callings[i] : " << callings[i] << endl;
		int key = 0;
		for (char c : callings[i])
			key += c;
		int idx = 0;
		int p_idx = 0;
		if (player[key].size() > 1)
		{
			for (; p_idx < name[key].size(); ++p_idx)
			{
				if (!name[key][p_idx].compare(callings[i]))
					break;
			}
		}
		idx = player[key][p_idx];
		int prev_key = rank[idx - 1];
		int p_k_idx = 0;
		if (player[prev_key].size() > 1)
		{
			for (; p_k_idx < name[prev_key].size(); ++p_k_idx)
			{
				if (!name[prev_key][p_k_idx].compare(answer[idx - 1]))
					break;
			}
		}
		int prev_idx = player[prev_key][p_k_idx];
		swap(player[key][p_idx], player[prev_key][p_k_idx]);
		swap(answer[idx], answer[prev_idx]);
		swap(rank[idx], rank[prev_idx]);
		// if (key == prev_key) // player[key].size() > 1
		// {
		// 	swap(player[key][p_idx], player[key][p_idx - 1]);
		// 	// swap(name[key][p_idx], name[key][p_idx - 1]);
		// }
		// else
		// {
		// 	int i = 0;
		// 	if (player[prev_key].size() > 1)
		// 	{
		// 		for (; i < name[prev_key].size(); ++i)
		// 		{
		// 			if (!name[prev_key][i].compare(answer[idx - 1]))
		// 				i = player[prev_key][i];
		// 				break;
		// 		}
		// 	}
		// 	swap(player[key][p_idx], player[prev_key][i]);
		// }
		// swap(answer[idx], answer[idx - 1]);
		// swap(rank[idx], rank[idx - 1]);
	}
	return answer;
}

int main()
{
	cout << "mumu kai mine soe poe" << endl;
    for (auto s : solution({"mumu", "soe", "poe", "kai", "mine"}, {"kai", "kai", "mine", "mine"}))
        cout << s << " ";
    cout << endl;
	cout << "=====================" << endl;

	cout << "mumu kai mine soe zzzzzzzzzz poe" << endl;
	for (auto s : solution({"mumu", "soe", "poe", "kai", "mine", "zzzzzzzzzz"}, {"kai", "kai", "mine", "mine", "zzzzzzzzzz"}))
        cout << s << " ";
    cout << endl;
	cout << "=====================" << endl;

	cout << "kai mumu mine umum soe poe" << endl;
	for (auto s : solution({"mumu", "soe", "poe", "kai", "mine", "umum"}, {"kai", "kai", "kai", "mine", "mine", "umum", "umum"}))
        cout << s << " ";
    cout << endl;
	cout << "=====================" << endl;

	cout << "kai mumu mine umum soe poe ummu" << endl;
	for (auto s : solution({"mumu", "soe", "poe", "kai", "mine", "umum", "ummu"}, {"kai", "kai", "kai", "mine", "mine", "umum", "umum"}))
		cout << s << " ";
	cout << endl;
	cout << "=====================" << endl;

	cout << "kai kia iak ika aki aik" << endl;
	for (auto s : solution({"kai", "kia", "iak", "ika", "aik", "aki"}, {"aki", "aki", "ika"}))
		cout << s << " ";
	cout << endl;
    return 0;
}