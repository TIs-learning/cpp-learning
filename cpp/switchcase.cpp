#include <iostream>
using namespace std;


int main(){
	
	int a;
	cout << "Masukan angka: ";
	cin >> a;
	
	switch(a){
		case 5:
			cout << "YES TRUE" << endl;
			break; // pass the next statement exit switch
		case 7:
			cout << "Not Perfect" << endl;
		case 9:
			cout << "Ysre" << endl;
		case 8:
			cout << "Bad" << endl;
		case 1:
			cout << "Poor" << endl;
		default:
			cout << "Not Found" << endl;
	}
	
	cout << "End Of Program";
	return 0;
}
