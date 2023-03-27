#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 다항식 더하기
*/

string solution(string polynomial)
{
    string answer = "";

    int x = 0;
    int n = 0;
    vector<string> split_p;
    string str_p = "";
    for (char c : polynomial)
    {
        if (c != ' ')
            str_p += c;
        else
        {
            split_p.push_back(str_p);
            str_p = "";
        }
    }
    split_p.push_back(str_p);
    for (string p : split_p)
    {
        size_t x_idx = p.find('x');
        if (x_idx != string::npos && x_idx == 0)
            x++;
        else if (x_idx != string::npos)
            x += stoi(p.substr(0, x_idx));
        else if (p != "+")
            n += stoi(p);
    }
    if (x == 1 && n)
        answer += "x + " + to_string(n);
    else if (x && n)
        answer += to_string(x) + "x" + " + " + to_string(n);
    else if (x > 1)
        answer += to_string(x) + "x";
    else if (x == 1)
        answer += "x";
    else if (n)
        answer += to_string(n);
    else
        answer += "0";
    return answer;
}

int main()
{
    cout << solution("3x + 7 + x") << endl;
    cout << solution("x + x + x") << endl;
    cout << solution("x + 0 + 0") << endl;
    cout << solution("1 + 0 + 0") << endl;
    cout << solution("0 + 0 + 0") << endl;
    cout << solution("0 + 0 + 0 + 3x + 0 + 9 + 3x") << endl;
    cout << solution("0 + 0 + 0 + 3x + 0 + 9 + 3x + 0") << endl;
    cout << solution("0 + 0 + 0 + 3x + 0 + 9 + 3x + 1") << endl;
    cout << solution("0 + 0 + 0 + 3x + 0 + 0 + 3x + 9") << endl;
    cout << solution("1 + x + 0 + 2x + 3x + 4x") << endl;
    cout << solution("0 + x") << endl;
    cout << solution("5x + 7x + 10 + 3") << endl;
    cout << solution("15x + 7x + 10 + 3") << endl;
    cout << solution("x + 0 + 10 + 1 + 4 + 5") << endl;
    return 0;
}