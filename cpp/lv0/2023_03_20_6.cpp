#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string letter)
{
    string answer = "";
    
    vector<string> morse = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.",
        "....", "..", ".---", "-.-", ".-..", "--", "-.", 
        "---", ".--.", "--.-", ".-.", "...", "-","..-", 
        "...-", ".--", "-..-", "-.--", "--.."
    };
    int start = 0;
    int end = 0;
    
    letter.append(" ");
    for (auto l : letter)
    {
        if (l != ' ')
            end++;
        else
        {
            for (int i = 0; i < morse.size(); i++)
            {
                if (morse.at(i) == letter.substr(start, end - start))
                    answer.push_back('a' + i);
            }
            start = ++end;
        }
    }
    return answer;
}

int main()
{
    string letter = ".... . .-.. .-.. ---";
    cout << solution(letter) << endl;
    cout << solution(".--.") << endl;
    cout << solution(".- -... -.-. -.. . ..-. --. .... .. .--- -.- .-.. -- -. --- .--. --.- .-. ... - ..- ...- .-- -..- -.-- --..") << endl;
    return 0;
}