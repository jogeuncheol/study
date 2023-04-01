#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string A, string B)
{
	int answer = 0;

	int len = A.length();
	for (int i = 0; i < len; ++i)
	{
		string str = "";
		for (int j = 0; j < len; ++j)
			str += B[(i + j) % len];
		if (str.compare(A) == 0)
			break;
		answer++;
	}
	if (answer == len)
		answer = -1;
	return answer;
}

int main()
{
	cout << solution("hello", "ohell") << endl;
	cout << solution("apple", "elppa") << endl;
	cout << solution("atat", "tata") << endl;
	cout << solution("abc", "abc") << endl;
	return 0;
}
