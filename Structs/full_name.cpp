#include <iostream>
#include <string>
using namespace std;

struct stInfo {
    string FirstName;
    string LastName;
};

stInfo ReadInfo() {
    stInfo Info;

    cout << "Enter your first name: " << endl;
    cin >> Info.FirstName;

    cout << "Enter your last name: " << endl;
    cin >> Info.LastName;

    return Info;
}

string GetFullName(stInfo Info, bool Reversed) {
    string FullName = "";
    if(Reversed)
        FullName = Info.LastName + " " + Info.FirstName;
    else 
        FullName = Info.FirstName + " " + Info.LastName;
    
    return FullName;
}

void PrintFullName(string FullName) {
    cout << "\nYour name is: " << FullName << endl;
}

int main()
{
    PrintFullName(GetFullName(ReadInfo(),false));

    return 0;
}

