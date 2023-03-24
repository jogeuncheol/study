#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 영어가 싫어요
*/

long long solution(string numbers)
{
    long long answer = 0;

    vector<string> array = {
        "zero", "one", "two", "three", "four", 
        "five", "six", "seven", "eight", "nine"
    };
    int start = 0;
    int len = 3;
    while (start < numbers.length())
    {
        string n = numbers.substr(start, len);
        if (n.length() >= 3)
        {
            for (int i = 0; i < array.size(); i++)
            {
                if (n.compare(array.at(i)) == 0)
                {
                    answer *= 10;
                    answer += i;
                    start += len;
                    len = 2;
                    break;
                }
            }
        }
        len++;
    }
    return answer;
}

int main()
{
    cout << solution("onetwothreefourfivesixseveneightnine") << endl;
    cout << solution("onefourzerosixseven") << endl;
    cout << solution("fivezerozerozeronine") << endl;
    return 0;
}