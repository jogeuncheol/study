#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 배열의 유사도
*/

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;

    for (string ss1 : s1)
    {
        for (string ss2 : s2)
        {
            if (!ss1.compare(ss2))
                answer++;
        }
    }
    return answer;
}

int main()
{
    cout << solution({"a", "b", "c"}, {"com", "b", "a", "d"}) << endl;
    return 0;
}