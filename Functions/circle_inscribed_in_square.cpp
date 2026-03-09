#include <iostream>
#include <cmath>
using namespace std;

float ReadSquareSide() {
    float SquareSide;

    cout << "Enter square side: " << endl;
    cin >> SquareSide;

    return SquareSide;
}

float CircleInscribedInSquare(float SquareSide) {

    const float PI = 3.14159253589793238;

    float Area = (PI * pow(SquareSide, 2)) / 4;

    return Area;
}

void PrintCircleArea(float Area) {
    cout << "\nCircle Area = " << Area << endl;
}

int main()
{
    PrintCircleArea(CircleInscribedInSquare(ReadSquareSide()));

    return 0;
}
