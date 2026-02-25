#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

int ReadMark() {
	int Mark;

	cout << "Enter your mark: " << endl;
	cin >> Mark;

	return Mark;
}

enPassFail CheckMark(int Mark) {

	while (Mark > 100 || Mark < 0) {
		cout << "\nInvalid Number, Enter again!" << endl;

		Mark = ReadMark();
	}

	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResult(int Mark) {

	if (CheckMark(Mark) == enPassFail::Pass)

		cout << "\nYou Passed!" << endl;

	else

		cout << "\nYou Failed!" << endl;

}

int main() {
	PrintResult(ReadMark());

	return 0;
}