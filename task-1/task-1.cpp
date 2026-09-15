#include <iostream>

using namespace std;

int main(){

	int x, y, c;
	cout << "Enter three numbers: ";
	cin >> x >> y >> c;
	if (x > y && x > c) {
		cout << "The largest number is: " << x << endl;
	}
	else if (y > x && y > c) {
		cout << "The largest number is: " << y << endl;
	}
	else {
		cout << "The largest number is: " << c << endl;
	}

}
