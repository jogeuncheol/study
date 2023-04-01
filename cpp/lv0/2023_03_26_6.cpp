#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 잘라서 배열로 저장하기
*/

vector<string> solution(string my_str, int n)
{
    vector<string> answer;

    for (int i = 0; i < my_str.length(); i += n)
        answer.push_back(my_str.substr(i, n));
    return answer;
}

int main()
{
    for (auto s : solution("abc1Addfggg4556b", 6))
        cout << s << " ";
    cout << endl;
    for (auto s : solution("abcdef123", 3))
        cout << s << " ";
    cout << endl;
    return 0;
}