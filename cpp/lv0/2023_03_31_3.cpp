#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total)
{
	vector<int> answer;

	int x = (total - ((num * (num - 1)) / 2)) / num;
	for (int i = 0; i < num; ++i)
		answer.emplace_back(x + i);
	return answer;
}

int main()
{
	for (int i : solution(5, 5))
		cout << i << " ";
	cout << endl;
	return 0;
}
