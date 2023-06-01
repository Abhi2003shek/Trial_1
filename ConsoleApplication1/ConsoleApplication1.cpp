#include <iostream>
#include<cmath>

using namespace std;

int main() {
	cout << "Enter the radius of a circle: ";
	int radius;
	cin >> radius;
	double AreaCircle = 3.14 * pow(radius, 2);
	cout << "Area of the Circle: " << AreaCircle;
	return 0;
	//Area of circle
}
