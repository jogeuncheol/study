#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int angle)
{
    int answer = 0;
    
    if (angle == 180)
        answer = 4;
    else if (angle > 90)
        answer = 3;
    else if (angle == 90)
        answer = 2;
    else if (angle < 90)
        answer = 1;
    return answer;
}

int main(int argc, char *argv[])
{
    if (argc > 1)
        cout << solution(atoi(argv[1])) << endl;
    else
        cout << "./a.out (0 < num <= 180)" << endl;
    return 0;
}