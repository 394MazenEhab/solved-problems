#include <iostream>
#include <string>
using namespace std;

struct stNumbers {
    float Num1;
    float Num2;
    float Num3;
};

stNumbers ReadNumbers() {
    stNumbers Number;
    cout << "Enter number 1: " << endl;
    cin >> Number.Num1;

    cout << "Enter number 2: " << endl;
    cin >> Number.Num2;

    cout << "Enter number 3: " << endl;
    cin >> Number.Num3;

    return Number;
}

float Sum3Number(stNumbers Number) {

    return Number.Num1 + Number.Num2 + Number.Num3;

}

float CalculateAverage(stNumbers Number) {
    return Sum3Number(Number) / 3;
}

void PrintSum(stNumbers Number) {
    string Average = "\nThe average of :" + to_string(Number.Num1) + " ," + to_string(Number.Num2) + " ," + to_string(Number.Num3) + " = " + to_string(CalculateAverage(Number));
    cout << Average << endl;
}

int main()
{
    PrintSum(ReadNumbers());

    return 0;
}

