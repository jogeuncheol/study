#include <string>
#include <vector>
#include <iostream>

using namespace std;

/**
 * 신고 결과 받기
 * 2022 KAKAO BLIND RECRUITMENT
*/

int get_key(string id)
{
	int key = 0;
	for (char c : id)
		key += (c - 'a');
	return key;
}

vector<int> solution(vector<string> id_list, vector<string> report, int k)
{
	vector<int> answer;

	// key : sum(id_list[i].char)
	// value : id_list.index
	vector<vector<int>> id_index(256, vector<int>());
	// key : sum(id_list[i].char)
	// value : id_list.name
	vector<vector<string>> id_name(256, vector<string>());
	for (int i = 0; i < id_list.size(); ++i)
	{
		id_index[get_key(id_list[i])].emplace_back(i);
		id_name[get_key(id_list[i])].emplace_back(id_list[i]);
	}
	// split reported list
	// vector reported list
	vector<vector<int>> reported_list(id_list.size(), vector<int>());
	vector<int> id_reported_count(id_list.size(), 0);
	for (string r : report)
	{
		int sp_idx = 0;
		for (; sp_idx < r.length(); ++sp_idx)
		{
			if (r[sp_idx] == ' ')
				break;
		}
		string id = r.substr(0, sp_idx);
		string r_id = r.substr(sp_idx + 1, r.length() - sp_idx);
		cout << id << "," << r_id << endl;
		int key = get_key(id);
		int n_idx = 0;
		if (id_index[key].size() > 1)
		{
			for (; n_idx < id_name[key].size(); ++n_idx)
			{
				if (id == id_name[key][n_idx])
					break;
			}
		}
		int idl_idx = id_index[key][n_idx];
		cout << "idl_idx : " << id_list[idl_idx] << endl;
		key = get_key(r_id);
		n_idx = 0;
		if (id_index[key].size() > 1)
		{
			for (; n_idx < id_name[key].size(); ++n_idx)
			{
				if (r_id == id_name[key][n_idx])
					break;
			}
		}
		int r_idl_idx = id_index[key][n_idx];
		cout << "r_idl_idx : " << id_list[r_idl_idx] << endl;
		// report list
		int list_len = reported_list[idl_idx].size();
		for (int i : reported_list[idl_idx])
		{
			if (i == r_idl_idx)
				break;
			list_len--;
		}
		if (list_len == 0)
		{
			reported_list[idl_idx].emplace_back(r_idl_idx);
			id_reported_count[r_idl_idx]++;
		}
		cout << "----------------------------" << endl;
		for (int i = 0; i < reported_list.size(); i++)
		{
			cout << id_list[i] << " >> ";
			for (int j = 0; j < reported_list[i].size(); j++)
				cout << reported_list[i][j] << " : " << id_list[reported_list[i][j]] << ", ";
			cout << endl;
		}
		cout << "----------------------------" << endl;
	}
	for (int i : id_reported_count)
		cout << i << endl;
	// answer
	for (int i = 0; i < reported_list.size(); ++i)
	{
		answer.emplace_back(0);
		for (int rl : reported_list[i])
		{
			if (id_reported_count[rl] >= k)
				answer[i]++;
		}
	}
	return answer;
}

int main()
{
	for (auto s : solution({"muzi", "frodo", "apeach", "neo"}, {"muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi"}, 2))
		cout << s << " ";
	cout << endl;

	for (auto s : solution({"con", "ryan"}, {"ryan con", "ryan con", "ryan con", "ryan con"}, 3))
		cout << s << " ";
	cout << endl;
	return 0;
}