#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * lv2
 * 짝지어 제거하기
*/

int solution(string s)
{
	int answer = 0;

	vector<char> string_stack;
	for (char c : s)
	{
		if (string_stack.empty())
			string_stack.emplace_back(c);
		else
		{
			if (string_stack.back() == c)
				string_stack.pop_back();
			else
				string_stack.emplace_back(c);
		}
	}
	if (string_stack.empty())
		answer = 1;
	return answer;
}

int main()
{
	cout << solution("baabaa") << endl;
	cout << solution("cdcd") << endl;
	cout << solution("aabbcabbac") << endl;
	return 0;
}