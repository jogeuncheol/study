#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 문자열 내 마음대로 정렬하기
*/

vector<string> solution(vector<string> strings, int n)
{
    vector<string> answer;

    for (int i = 0; i < strings.size(); ++i)
    {
        int min = i;
        for (int j = i + 1; j < strings.size(); ++j)
        {
            string str = strings[min].substr(n, strings[min].length() - n + 1);
            if (strings[min][n] == strings[j][n])
            {
                if (strings[min] > strings[j])
                    min = j;
            }
            else if (str > strings[j].substr(n, strings[i].length() - n + 1))
                min = j;
        }
        if (min != i)
            swap(strings[min], strings[i]);
        answer.emplace_back(strings[i]);
    }
    return answer;
}

int main()
{
    for (auto s : solution({"sun", "bed", "car"}, 1))
        cout << s << " ";
    cout << endl;
    for (auto s : solution({"abce", "abcd", "cdx"}, 2))
        cout << s << " ";
    cout << endl;
    return 0;
}