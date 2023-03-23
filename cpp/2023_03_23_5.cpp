#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 가까운 수
*/

int solution(vector<int> array, int n)
{
    int answer = 0;

    for (int a : array)
    {
        int d1 = (answer - n) > 0 ? (answer - n) : -(answer - n);
        int d2 = (a - n) > 0 ? (a - n) : -(a - n);
        if (d1 == d2)
            answer = (answer < a) ? answer : a;
        else if (d1 > d2)
            answer = a;
    }
    return answer;
}

int main()
{
    cout << solution({3, 10, 28}, 20) << endl;
    cout << solution({3, 10, 11, 12}, 12) << endl;
    cout << solution({3, 10, 28, 8, 16, 100, 98}, 99) << endl;
    cout << solution({3, 10, 28, 8, 16, 100, 98}, 98) << endl;
    return 0;
}