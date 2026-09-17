#include <iostream>

using namespace std;

int main() {

	int x , y , c , max ;
	cout << "Enter three numbers: ";
	cin >> x >> y >> c;
	max = x;
		if ( y > max )
			max = y;
		if ( c > max )
			max = c;	
		cout << "The largest number is: " << max;


}
