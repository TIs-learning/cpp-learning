#include <iostream>
using namespace std;

int main() {
	// Compound Assignment 
	int a = 10;
	a -= 7; // a = a - 7
	cout << "Subtraction Assignment: " << a << endl;
	
	a = 10; // Reset nilai a 
	a += 7; // a = a + 7
	cout << "Addition Assignment: " << a << endl;
	
	a = 10;
	a *= 6; // a = a * 6
	cout << "Multiplication Assignment: " << a << endl;
	
    a = 10;
	a /= 8; // a = a / b
	cout << "Division Assignment: " << a << endl;
	
	a = 10;
	a %= 7; // a = a % 7
	cout << "Modulus Assignment: " << a << endl;
	return 0;
}
