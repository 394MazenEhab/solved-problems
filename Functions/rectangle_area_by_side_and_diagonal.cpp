#include <iostream>
#include <cmath>
using namespace std;

void ReadNumber(float& A, float& D) {
    cout << "Enter rectangle side A: " << endl;
    cin >> A;

    cout << "Enter rectangle diagonal D: " << endl;
    cin >> D;
}

float RectangleAreaBySideAndDiagonal(float A, float D) {
    return A * sqrt(pow(D, 2) - pow(A, 2));
}

void PrintRectangleArea(float Area) {
    cout << "\nRectangle Area= " << Area << endl;
}

int main()
{
    float A, D;
    ReadNumber(A, D);
    PrintRectangleArea(RectangleAreaBySideAndDiagonal(A, D));

    return 0;
}

