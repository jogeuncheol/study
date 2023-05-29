#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

/**
 * lv2
 * 영어 끝말잇기
*/

vector<int> solution(int n, vector<string> words)
{
	vector<int> answer(2, 0);

	map<string, int> keyword;
	int loop = 0;
	for (int i = 0; i < words.size(); i++)
	{
		if (i % n == 0)
			loop++;
		if (keyword.find(words[i]) == keyword.end())
		{
			keyword.insert({words[i], (i % n) + 1});
			if (keyword.size() > 1)
			{
				if (words[i - 1].back() != words[i].front())
				{
					answer[0] = (i % n) + 1;
					answer[1] = loop;
					break;
				}
			}
		}
		else
		{
			answer[0] = (i % n) + 1;
			answer[1] = loop;
			break;
		}
	}
	return answer;
}

int main()
{
	for (auto s : solution(3, {"tank", "kick", "know", "wheel", "land", "dream", "mother", "robot", "tank"}))
		cout << s << " ";
	cout << endl;
	for (auto s : solution(5, {"hello", "observe", "effect", "take", "either", "recognize", "encourage", "ensure", "establish", "hang", "gather", "refer", "reference", "estimate", "executive"}))
		cout << s << " ";
	cout << endl;
	for (auto s : solution(2, {"hello", "one", "even", "never", "now", "world", "draw"}))
		cout << s << " ";
	cout << endl;
	return 0;
}