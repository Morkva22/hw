#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
using namespace std;

int main() {
	int x, y, result = 1;

	cout << "write number x:";
	cout << "write number y:";
	cin >> x;
	cin >> y;

	if (y < 0) {
		cout << "cant be minus number";
		return 1;
	}
	for (int i = 1; i <= y; ++i) {
		result *= x;
	}
	cout << x << " y stepeni " << y << " dorivnue " << result << endl;
	return 0;
}
