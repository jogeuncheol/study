#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * x만큼 간격이 있는 n개의 숫자
*/

vector<long long> solution(int x, int n)
{
    vector<long long> answer;

    for (int i = 0; i < n; ++i)
        answer.emplace_back(x + (i * x));
    return answer;
}

int main()
{
    for (long long i : solution(-4, 2))
        cout << i << " ";
    cout << endl;
    return 0;
}