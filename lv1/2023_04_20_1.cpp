#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 숫자 짝꿍
*/

string solution(string X, string Y) {
    string answer = "";
    
    vector<int> x(10, 0);
    vector<int> y(10, 0);
    for (char c : X)
        x[c - '0']++;
    for (char c : Y)
        y[c - '0']++;
    for (int i = 9; i >= 0;)
    {
        if (x[i]-- && y[i]--)
            answer += to_string(i);
        else
            i--;
    }
    if (answer.empty())
        answer += "-1";
    else if (answer[0] == '0')
        answer = "0";
    return answer;
}

int main()
{
    cout << solution("100", "2345") << endl;
    cout << solution("100", "203045") << endl;
    cout << solution("100", "123450") << endl;
    return 0;
}