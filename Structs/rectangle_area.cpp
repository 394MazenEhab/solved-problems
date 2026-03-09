#include <iostream>
using namespace std;

struct stDim {
    float Length;
    float Width;
};

stDim ReadDimensions() {
    stDim Dimension;

    cout << "Enter tall: " << endl;
    cin >> Dimension.Length;

    cout << "Enter Width: " << endl;
    cin >> Dimension.Width;

    return Dimension;
}

float CalculateRectangleArea(stDim Dimension) {
    return Dimension.Length * Dimension.Width;
}

void PrintArea(stDim Dimension) {
    cout << "\nThe area of the rectangle = " << CalculateRectangleArea(Dimension) << endl;
}

int main()
{
    PrintArea(ReadDimensions());

    return 0;
}