#include <iostream>
#include <cmath>
using namespace std;

struct stNum {
    float Num1;
    float Num2;
    float Num3;
};

stNum ReadNumber() {
    stNum Number;

    cout << "Enter number1: " << endl;
    cin >> Number.Num1;

    cout << "Enter number2: " << endl;
    cin >> Number.Num2;

    cout << "Enter number3: " << endl;
    cin >> Number.Num3;

    return Number;
}

void PrintResult(stNum Number) {
    cout << "The max number is " << max(Number.Num1, max(Number.Num2, Number.Num3)) << endl; 
}
int main()
{
    PrintResult(ReadNumber());

    return 0;
}
