#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 이진수 더하기
*/

string solution(string bin1, string bin2)
{
    string answer = "";
    
    int carry = 0;
    int len = bin1.length() > bin2.length() ? bin1.length() : bin2.length();
    for (int i = 0; i < len; ++i)
    {
        int b = 0;
        if (i < bin1.length() && i < bin2.length())
            b = carry + (bin1[bin1.length() - 1 - i] - '0') + (bin2[bin2.length() - 1 - i] - '0');
        else if (i < bin1.length())
            b = carry + (bin1[bin1.length() - 1 - i] - '0');
        else
            b = carry + (bin2[bin2.length() - 1 - i] - '0');
        if (b > 1)
        {
            answer.insert(answer.begin(), (b - 2) + '0');
            carry = 1;
        }
        else
        {
            answer.insert(answer.begin(), b + '0');
            carry = 0;
        }
    }
    if (carry)
        answer.insert(answer.begin(), '1');
    return answer;
}

int main()
{
    cout << solution("10", "11") << endl;
    cout << solution("1001", "1111") << endl;
    cout << solution("1001", "11") << endl;
    return 0;
}
