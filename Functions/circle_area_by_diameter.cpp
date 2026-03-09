#include <iostream>
#include <cmath>
using namespace std;

float ReadDiameter() {
    float Diameter;

    cout << "Enter the radious: " << endl;
    cin >> Diameter;

    return Diameter;
}

float CircleAreaByDiameter(float Diameter) {

    const float PI = 3.14159253589793238; 

    float Area = (PI * pow(Diameter, 2)) / 4;

    return Area;
}

void PrintCircleArea(float Area) {
    cout << "\nCircle Area = " << Area << endl;
}

int main()
{
    PrintCircleArea(CircleAreaByDiameter(ReadDiameter()));

    return 0;
}
