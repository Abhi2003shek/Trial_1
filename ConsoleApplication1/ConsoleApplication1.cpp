#include <iostream> //print & Scan statement
#include<cmath> //power
#include<cstdlib> //random
#include<ctime> //time
#include<string> //string

using namespace std;
  
int main() {
	//Area of circle
	cout << "Enter the radius of a circle: ";
	int radius;
	cin >> radius;
	double AreaCircle = 3.14 * pow(radius, 2); //pi*r^2
	cout << "Area of the Circle: " << AreaCircle << endl;
	
	
	//Random roll a dice
	srand(time(nullptr));
	int Dice = (rand() % (6-1+1))+1;  //[rand()%(maxTerm-minTerm+1]+1
	cout << "Rolling a Dice : " << Dice << endl;


	return 0;
}
