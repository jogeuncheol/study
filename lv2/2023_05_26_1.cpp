#include <string>
#include <vector>
#include <iostream>

using namespace std;

/**
 * lv2
 * 최댓값과 최솟값
*/


string solution(string s)
{
	string answer = "";
	
	vector<int> v_nbr;
	string s_nbr = "";
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == ' ')
		{
			v_nbr.emplace_back(stoi(s_nbr));
			s_nbr.clear();
		}
		else
			s_nbr += s[i];
	}
	v_nbr.emplace_back(stoi(s_nbr));

	vector<int> mM(2, 0);
	mM[0] = v_nbr[0];
	mM[1] = v_nbr[0];
	for (int i : v_nbr)
	{
		if (mM[0] > i)
			mM[0] = i;
		else if (mM[1] < i)
			mM[1] = i;
	}
	answer += to_string(mM[0]) + " " + to_string(mM[1]);
	return answer;
}

int main()
{
	cout << solution("1 2 3 4") << endl;
	cout << solution("-1 -2 -3 -4") << endl;
	cout << solution("-1 -1") << endl;
	cout << solution("-2147483648 -1 2147483647") << endl;
	return 0;
}