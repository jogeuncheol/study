#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 개인정보 수집 유효기간
*/

vector<int> solution(string today, vector<string> terms, vector<string> privacies)
{
	vector<int> answer;

	// split string today "2023.05.21" -> vector<>(){"2023", "05", "21"}
	vector<int> v_today(3, 0);
	int i = 0;
	for (char c : today)
	{
		if (c != '.')
			v_today[i] = v_today[i] * 10 + c - '0';
		else
			i++;
	}
	for (int i : v_today)
		cout << i << " ";
	cout << endl;
	// terms to array list
	vector<int> alpha(26, 0);
	for (string s : terms)
		alpha[s[0] - 'A'] = stoi(s.substr(2, s.length() - 2));
	for (int i : alpha)
		cout << i << " ";
	cout << endl;
	// privacies
	for (int i = 0; i < privacies.size(); ++i)
	{
		// split privacies day
		vector<int> day(3, 0);
		int idx = 0;
		int j = 0;
		for (; j < privacies[i].length(); ++j)
		{
			if (privacies[i][j] == ' ')
				break;
			else if (privacies[i][j] != '.')
				day[idx] = day[idx] * 10 + privacies[i][j] - '0';
			else
				idx++;
		}
		// check privacies terms
		int t = alpha[privacies[i][j + 1] - 'A'];
		if (t / 12)
		{
			day[0] += t / 12;
		}
		day[1] += t % 12;
		if (day[1] > 12)
		{
			day[0] += day[1] / 12;
			day[1] -= 12;
		}
		cout << day[0] << "." << day[1] << "." << day[2] << endl;
		int yy = day[0] - v_today[0];
		int mm = day[1] - v_today[1];
		int dd = day[2] - v_today[2];
		cout << "yy : " << yy << " mm : " << mm << " dd : " << dd << endl;
		if (yy >= 0)
		{
			if (!yy)
			{
				if (!mm)
				{
					if (dd <= 0)
						answer.emplace_back(i + 1);
				}
				else if (mm < 0)
					answer.emplace_back(i + 1);
			}
		}
		else
			answer.emplace_back(i + 1);
	}
	return answer;
}

int main()
{
	cout << "1 3" << endl;
	for (auto s : solution("2022.05.19", {"A 6", "B 12", "C 3"}, {"2021.05.02 A", "2021.07.01 B", "2022.02.19 C", "2022.02.20 C"}))
	{
		cout << s << " ";
	}
	cout << endl;
	cout << "================" << endl;

	cout << "1 4 5" << endl;
	for (auto s : solution("2020.01.01", {"Z 3", "D 5"}, {"2019.01.01 D", "2019.11.15 Z", "2019.08.02 D", "2019.07.01 D", "2018.12.28 Z"}))
	{
		cout << s << " ";
	}
	cout << endl;
	cout << "================" << endl;

	cout << "1 2 3 4" << endl;
	for (auto s : solution("2020.01.15", {"Z 3", "D 5"}, {"2019.10.15 Z", "2019.08.02 D", "2019.07.01 D", "2018.12.28 Z", "2019.12.01 D"}))
	{
		cout << s << " ";
	}
	cout << endl;
	cout << "================" << endl;

	cout << "1" << endl;
	for (auto s : solution("2024.06.08", {"A 18"}, {"2022.06.08 A"}))
	{
		cout << s << " ";
	}
	cout << endl;
	cout << "================" << endl;

	cout << "1 2" << endl;
	for (auto s : solution("2019.01.01", {"B 12"}, {"2017.12.21 B", "2017.12.01 B", "2018.12.01 B"}))
	{
		cout << s << " ";
	}
	cout << endl;
	cout << "================" << endl;

	cout << "1 2" << endl;
	for (auto s : solution("2019.01.01", {"B 12", "A 120"}, {"2008.12.28 A", "2009.01.01 A", "2009.01.02 A"}))
	{
		cout << s << " ";
	}
	cout << endl;
	cout << "================" << endl;

	cout << "1 3" << endl;
	for (auto s : solution("2019.06.11", {"B 12", "A 120"}, {"2018.06.11 B", "2018.07.11 B", "2018.06.10 B", "2018.07.01 B"}))
	{
		cout << s << " ";
	}
	cout << endl;
	cout << "================" << endl;

	cout << "1 2" << endl;
	for (auto s : solution("2019.12.11", {"A 5"}, {"2019.07.10 A", "2019.07.11 A", "2019.07.12 A", "2019.08.10 A"}))
	{
		cout << s << " ";
	}
	cout << endl;
	return 0;
}