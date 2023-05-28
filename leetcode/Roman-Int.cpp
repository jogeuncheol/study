#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
	int romanToInt(string s)
	{
		int answer = 0;

		vector<int> split_rtoi;
		char roman[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
		int rtoi[7] = {1, 5, 10, 50, 100, 500, 1000};
		for (char c : s)
		{
			int i = 0;
			for (; i < 7; ++i)
			{
				if (c == roman[i])
					break;
			}
			split_rtoi.emplace_back(rtoi[i]);
		}
		for (int i = 0; i < split_rtoi.size() - 1; ++i)
		{
			// cout << answer << endl;
			if (split_rtoi[i] >= split_rtoi[i + 1])
				answer += split_rtoi[i];
			else
			{
				answer -= split_rtoi[i];
			}
		}
		answer += split_rtoi[split_rtoi.size() - 1];
		return answer;
	}
};

int main()
{
	Solution r;
	cout << r.romanToInt("IV") << endl;
	cout << r.romanToInt("III") << endl;
	cout << r.romanToInt("LVIII") << endl;
	cout << r.romanToInt("XCVI") << endl;
	cout << r.romanToInt("MCMXCIV") << endl;
	cout << r.romanToInt("MCMXCIX") << endl;
	return 0;
}