#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 성격 유형 검사하기
 *     <------------>
 * R-T
 * C-F
 * J-M
 * A-N
 * 선택 1 2 3 4 5 6 7
 * 점수 3 2 1 0 1 2 3
 * ex) TR, RT, TR | 7, 1, 3 -> R3점, R3점, T1점
 *     동점이면 R, C, J, A 우선
 *     => RCJA
*/

string solution(vector<string> survey, vector<int> choices)
{
    string answer = "";

    int s[7] = {3, 2, 1, 0, 1, 2, 3};
    string k = "RTCFJMAN";
    vector<int> RTCFJMAN(8, 0);
    for (int i = 0; i < survey.size(); ++i)
    {
        if (choices[i] < 4)
            RTCFJMAN[k.find(survey[i][0])] += s[choices[i] - 1];
        else if (choices[i] > 4)
            RTCFJMAN[k.find(survey[i][1])] += s[choices[i] - 1];
    }
    for (int i = 0; i < 8; i += 2)
    {
        if (RTCFJMAN[i] >= RTCFJMAN[i + 1])
            answer += k[i];
        else
            answer += k[i + 1];
    }
    return answer;
}

int main()
{
    cout << solution({"TR", "RT", "TR"}, {7, 1, 3}) << endl;
    cout << solution({"AN", "CF", "MJ", "RT", "NA"}, {5, 3, 2, 7, 5}) << endl;
    return 0;
}