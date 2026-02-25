#include <iostream>
using namespace std;

struct stInfo {
    int Age;
    bool HasDriverLicense;
};

stInfo ReadInfo() {
    stInfo info;

    cout << "Enter your age: " << endl;
    cin >> info.Age;

    cout << "Do you have a driver license? (Enter 1 or 0): " << endl;
    cin >> info.HasDriverLicense;

    return info;
}

bool IsAccepted(stInfo info) {
    return (info.Age > 21 && info.HasDriverLicense == true);
}

void PrintResult(stInfo info) {

    if (IsAccepted(info)) {
        cout << "\nHired!" << endl;
    }
    else {
        cout << "\nRejected!" << endl;
    }
}
int main()
{
    PrintResult(ReadInfo());
    return 0;
}

