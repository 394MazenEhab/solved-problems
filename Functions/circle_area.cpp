#include <iostream>
#include <cmath>
using namespace std;

float ReadRadious() {
    float Radious;

    cout << "Enter the radious: " << endl;
    cin >> Radious;

    return Radious;
}

float CircleAreaByRadious(float Radious) {
 
    const float PI = 3.14159253589793238; //for more accuracy

    float Area = PI * pow(Radious, 2);

    return Area;
}

void PrintCircleArea(float Area) {
    cout << "\nCircle Area = " << Area << endl;
}

int main()
{
    PrintCircleArea(CircleAreaByRadious(ReadRadious()));

    return 0;
}
