#include <iostream>
using namespace std;

void ReadNumbers(int& Number1, int& Number2) {
    
    cout << "Enter number 1: " << endl;
    cin >> Number1;

    cout << "Enter number 2: " << endl;
    cin >> Number2;

}

void Swap(int& Number1, int& Number2) {
    int Temp;
    Temp = Number1;
    Number1 = Number2;
    Number2 = Temp;
}

void PrintNumbers(int Number1, int Number2) {
    cout << Number1 << ", " << Number2 << endl;
}

int main()
{
    int Number1, Number2;
    ReadNumbers(Number1, Number2);
    PrintNumbers(Number1, Number2);
    Swap(Number1, Number2);
    PrintNumbers(Number1, Number2);

    return 0;
}


