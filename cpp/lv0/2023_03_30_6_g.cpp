#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * A로 B 만들기
 * sort, compare
*/

int solution(string before, string after)
{
    int answer = 0;

    sort(before.begin(), before.end());
    sort(after.begin(), after.end());
    if (!before.compare(after))
        answer = 1;
    return answer;
}

int main()
{
    cout << solution("olleh", "hello") << endl;
    cout << solution("allpe", "apple") << endl;
    return 0;
}