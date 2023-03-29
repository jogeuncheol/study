#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 로그인 성공?
*/

string solution(vector<string> id_pw, vector<vector<string>> db)
{
    string answer = "";

    for (vector<string> database : db)
    {
        if (!id_pw[0].compare(database[0]) && !id_pw[1].compare(database[1]))
            answer = "login";
        else if (!id_pw[0].compare(database[0]))
            answer = "wrong pw";
        if (answer.length())
            break;
    }
    if (!answer.length())
        answer = "fail";
    return answer;
}

int main()
{
    cout << solution({"meosseugi", "1234"}, {{"yyoom", "1234"}, {"meosseugi", "1234"}}) << endl;
    cout << solution({"programmer01", "15789"}, {{"programmer02", "111111"}, {"programmer00", "134"}, {"programmer01", "1145"}}) << endl;
    cout << solution({"rabbit04", "98761"}, {{"jaja11", "98761"}, {"krong0313", "29440"}, {"rabbit00", "111333"}}) << endl;
    return 0;
}