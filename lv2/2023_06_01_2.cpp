#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * lv2
 * N개의 최소공배수
*/

int solution(vector<int> arr)
{
	int answer = 0;

	sort(arr.begin(), arr.end());
	int arr_max = arr[arr.size() - 1];
	while (true)
	{
		answer = 0;
		for (int i : arr)
		{
			if (arr_max % i == 0)
				answer++;
		}
		if (answer == arr.size())
		{
			answer = arr_max;
			break;
		}
		arr_max++;
	}
	return answer;
}

int main()
{
	cout << solution({2, 6, 8, 14}) << endl;
	cout << solution({1, 2, 3}) << endl;
	return 0;
}