#include <iostream>
#include <vector>

using namespace std;

/**
 * 폰켓몬
*/

int solution(vector<int> nums)
{
    int answer = 0;

    string N = "";
    vector<int> I;
    for (int n : nums)
    {
        int find = 0;
        for (int i : I)
        {
            if (i == n)
                find = i;
        }
        if (find == 0)
        {
            I.emplace_back(n);
            answer++;
        }
        if (answer == nums.size() / 2)
            break;
    }
    return answer;
}

int main()
{
    cout << solution({3, 1, 2, 3}) << endl;
    cout << solution({3,3,3,2,2,4}) << endl;
    cout << solution({3,3,3,2,2,2}) << endl;
    return 0;
}