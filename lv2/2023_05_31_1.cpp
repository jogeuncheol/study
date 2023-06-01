#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

/**
 * lv2
 * 구명보트
*/

int solution(vector<int> people, int limit)
{
    int answer = 0;
    
    sort(people.begin(), people.end());
	int last_idx = people.size() - 1;
	for (int i = 0; i <= people.size() && people[i] != -1;)
	{
		if (people[i] + people[last_idx] <= limit)
			i++;
		answer++;
		people[last_idx] = -1;
		last_idx--;
	}
    return answer;
}

int main()
{
    cout << solution({70, 50, 80, 50}, 100) << endl;
    cout << solution({50, 50, 50, 50}, 100) << endl;
    cout << solution({50, 50, 50, 50, 50, 50}, 100) << endl;
    return 0;
}