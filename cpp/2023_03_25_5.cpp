#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 숫자 찾기
*/

int solution(int num, int k) 
{
    int answer = 0;
    
    answer = -1;
    string n = to_string(num);
    for (int i = 0; i < n.length(); i++)
    {
        if (n.at(i) == k + '0')
        {
            answer = i + 1;
            break;
        }
    }
    return answer;
}

int main()
{
    cout << solution(29183, 1) << endl;
    cout << solution(232443, 4) << endl;
    return 0;
}