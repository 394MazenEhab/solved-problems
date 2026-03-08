#include <iostream>
#include <string>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

struct stMark {
    float Mark1;
    float Mark2;
    float Mark3;
};

stMark ReadMark() {
    stMark Mark;

    cout << "Enter your mark1: " << endl;
    cin >> Mark.Mark1;

    cout << "Enter your mark2: " << endl;
    cin >> Mark.Mark2;

    cout << "Enter your mark3: " << endl;
    cin >> Mark.Mark3;

    return Mark;
}

float CalculateSumOf3Numbers(stMark Mark) {
    return Mark.Mark1 + Mark.Mark2 + Mark.Mark3;
}

float CalculateAverage(stMark Mark) {
    return CalculateSumOf3Numbers(Mark) / 3;;
}

enPassFail CheckResult(stMark Mark) {
    while (CalculateAverage(Mark) > 100 || CalculateAverage(Mark) < 0) {
        cout << "\nInvalid Number ,Enter Again! " << endl;
        Mark = ReadMark();
    }
    if (CalculateAverage(Mark) > 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintResults(stMark Mark) {
    cout << "The Average = " << CalculateAverage(Mark) << endl;

    if (CheckResult(Mark) == enPassFail::Pass)
        cout << "\nYou Passed! " << endl;
    else
        cout << "\nYou Failed!" << endl;
}

int main()
{
    PrintResults(ReadMark());

    return 0;
}