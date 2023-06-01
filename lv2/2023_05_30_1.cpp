#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * lv2
 * 카펫
*/

vector<int> solution(int brown, int yellow)
{
	vector<int> answer;

	// 약수
	int sum = brown + yellow;
	int w = 0;
	int h = 0;
	for (int i = 1; i <= sum / 2; ++i)
	{
		w = i;
		if (sum % i == 0)
		{
			h = sum / i;
			if (w >= h && ((w - 2) * (h - 2) == yellow || (w + h - 5) == yellow))
				break;
		}
	}
	answer.emplace_back(w);
	answer.emplace_back(h);
	return answer;
}

int main()
{
	for (auto s : solution(10, 2))
		cout << s << " ";
	cout << endl;
	for (auto s : solution(8, 1))
		cout << s << " ";
	cout << endl;
	for (auto s : solution(24, 24))
		cout << s << " ";
	cout << endl;
	for (auto s : solution(20, 5))
		cout << s << " ";
	cout << endl;
	for (auto s : solution(18, 6))
		cout << s << " ";
	cout << endl;
	return 0;
}