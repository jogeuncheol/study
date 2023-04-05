#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 최소직사각형
*/

int solution(vector<vector<int>> sizes)
{
    int answer = 0;
    
    int wm = 0;
    int hm = 0;
    for (vector<int> size : sizes)
    {
        if (size[0] < size[1])
            swap(size[0], size[1]);
        if (size[0] > wm)
            wm = size[0];
        if (size[1] > hm)
            hm = size[1];
    }
    answer = wm * hm;
    return answer;
}

int main()
{
    cout << solution({{60, 50}, {30, 70}, {60, 30}, {80, 40}}) << endl;
    cout << solution({{10, 7}, {12, 3}, {8, 15}, {14, 7}, {5, 15}}) << endl;
    return 0;
}