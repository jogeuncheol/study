#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string A, string B)
{
	int answer = 0;

	// B += B -> ohellohell.find(hello) -> 1
	B += B;
	answer = B.find(A);
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
