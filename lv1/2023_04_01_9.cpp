#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 자연수 뒤집어 배열로 만들기
*/

vector<int> solution(long long n)
{
    vector<int> answer;

    while (n)
    {
        answer.emplace_back(n % 10);
        n /= 10;
    }
    return answer;
}

int main()
{
    for (int i : solution(12345))
        cout << i << " ";
    cout << endl;
    return 0;
}