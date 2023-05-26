#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * lv2
 * JadenCase 문자열 만들기
*/

string solution(string s)
{
	string answer = "";

	bool sp = true;
	for (char c : s)
	{
		if (sp)
		{
			answer += toupper(c);
			if (c != ' ')
				sp = false;
		}
		else if (c == ' ')
		{
			answer += c;
			sp = true;
		}
		else
			answer += tolower(c);
	}
	return answer;
}

int main()
{
	cout << solution("0people 1unFollowed me") << endl;
	cout << solution("1people 2unFollowed me") << endl;
	cout << solution("2people 3unFollowed me") << endl;
	cout << solution("3people 4unFollowed me") << endl;
	cout << solution("4people 5unFollowed me") << endl;
	cout << solution("5people 6unFollowed me") << endl;
	cout << solution("6people 7unFollowed me") << endl;
	cout << solution("for the last week") << endl;
	cout << solution("for the  last week") << endl;
	return 0;
}