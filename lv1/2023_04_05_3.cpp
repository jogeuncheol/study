#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * [1차] 비밀지도
*/

vector<string> solution(int n, vector<int> arr1, vector<int> arr2)
{
    vector<string> answer;

    for (int i = 0; i < arr1.size(); ++i)
    {
        int b = arr1[i] | arr2[i];
        string l = "";
        for (int j = n - 1; j >= 0; --j)
        {
            int bit = b;
            l += (bit >> j) & 1 ? "#" : " ";
        }
        answer.emplace_back(l);
    }
    return answer;
}

int main()
{
    for (auto s : solution(5, {9, 20, 28, 18, 11}, {30, 1, 21, 17, 28}))
        cout << s << endl;
    for (auto s : solution(6, {46, 33, 33 ,22, 31, 50}, {27 ,56, 19, 14, 14, 10}))
        cout << s << endl;
    return 0;
}