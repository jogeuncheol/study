#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * lv2
 * 이진 변환 반복하기
*/

vector<int> solution(string s) {
    vector<int> answer(2, 0);
    
    while (s != "1")
    {
        answer[0]++;
        // erase 0
        string e_s = "";
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '0')
                answer[1]++;
            else
                e_s += '1';
        }
        // binary
        s.clear();
        int len = e_s.length();
        while (len != 0)
        {
            s.insert(s.begin(), (len % 2) + '0');
            len /= 2;
        }
    }
    return answer;
}

int main()
{
    for (auto s : solution("110010101001"))
    cout << s << endl;
    return 0;
}