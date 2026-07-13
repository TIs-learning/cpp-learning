#include <iostream>
using namespace std;


int main(){
	
	int a = 3;
	int b = 2;
	
	bool hasil;
	
	// operator logika : not, and, or
	
	// not : jika tidak sama maka true
	hasil = !(a==4);
	cout << "Ini Not: " << hasil << endl << endl;
	
	// and : kedua nilai harus benar untuk true
	hasil = (a==3) and (b==2);
	cout << "Operator and: " << hasil << endl;
	hasil = (a==4) and (b==2);
	cout << "Operator and : " << hasil << endl << endl;
	
	// or : salah satu benar untuk true
	hasil = (a==3) or (b==2);
	cout << "Operator or: " << hasil << endl;
	hasil = (a==4) or (b==2);
	cout << "Operator or: " << hasil << endl;
	return 0;
}
