#include <iostream>
using namespace std;


int main() 
{
	// increment and decrement
	int a = 5;
	int b = 5;
	
	// Perbedaanya terletak dari proses penambahannya
	
	//preincrement
	cout << a << endl;
	cout << b << endl;
	++b;
	cout << a << endl;
	cout << b << endl << endl;
	
	//postincrement
	cout << a << endl;
	cout << b << endl;
	a++;
	cout << a << endl;
	cout << b << endl << endl;
	
	//predecrement
	cout << a << endl;
	cout << b << endl;
	--b;
	cout << a << endl;
	cout << b << endl << endl;
	
	//postdecrement
	cout << a << endl;
	cout << b << endl;
	a--;
	cout << a << endl;
	cout << b << endl;
	
	return 0;
}
