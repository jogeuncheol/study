#include <iostream>
#include <string>

using namespace std;

/**
 * lv2
 * 올바른 괄호
*/

bool solution(string s)
{
	bool answer = true;
	
	int bracket = 0;
	for (char c : s)
	{
		if (c == '(')
			bracket++;
		else
			bracket--;
		if (bracket < 0)
			break;
	}
	if (bracket)
		answer = false;
	return answer;
}

int main()
{
	cout << solution("(())()") << endl;
	cout << solution("(()()") << endl;
	cout << solution(")()(") << endl;
	return 0;
}