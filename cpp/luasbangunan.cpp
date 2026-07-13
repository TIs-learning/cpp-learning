#include <iostream>
using namespace std;

float luasbangunan(float panjang, float lebar){
	cout << "Luas Bangunan adalah " << panjang * lebar << endl;
}


int main(){
	float p,l;
	cout << "Panjang: ";
	cin >> p;
	cout << "Lebar: ";
	cin >> l;
	luasbangunan(p, l);
	
	return 0;
}
