#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 수박수박수?
*/

string solution(int n)
{
    string answer = "";

    for (int i = 0; i < n; ++i)
        answer += (i & 1) ? "박" : "수";
    return answer;
}

int main()
{
    cout << solution(3) << endl;
    cout << solution(4) << endl;
    return 0;
}