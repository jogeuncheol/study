#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 소수 만들기
 * nums.size : 3 ~ 50
*/

int solution(vector<int> nums)
{
    int answer = 0;

    // 정렬하지 않고 제일 큰 세개만 앞으로 가져옴
    for (int i = 0; i < 3; ++i)
    {
        int max = i;
        for (int j = i + 1; j < nums.size(); ++j)
        {
            if (nums[max] < nums[j])
                max = j;
        }
        if (max != i)
            swap(nums[max], nums[i]);
    }
    int max = nums[0] + nums[1] + nums[2];
    vector<int> e(max + 1, 0);
    for (int i = 2; i * i <= max; ++i)
    {
        if (e[i] == 0)
        {
            for (int j = i * i; j <= max; j += i)
                e[j] = 1;
        }
    }
    for (int i = 0; i < nums.size() - 2; ++i)
    {
        for (int j = i + 1; j < nums.size() - 1; ++j)
        {
            for (int k = j + 1; k < nums.size(); ++k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (!e[sum])
                    answer++;
            }
        }
    }
    return answer;
}

int main()
{
    cout << solution({1, 2, 3, 4}) << endl;
    cout << solution({1, 2, 7, 6, 4}) << endl;
    return 0;
}