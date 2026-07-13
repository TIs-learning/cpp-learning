#include <iostream>
#include <string>
using namespace std;
void sapa() {
	cout << "Hello Everyone" << endl;
}
	enum HariKuliah {Selasa, Rabu, Kamis, Jumat};
int main(){
	int a = 10;
	string c = "Rumah Budi";
	bool isBekerja = true;
	float x = 3.21;
	double y = 3.41326563;
	char Kelas = 'E';
	int nilai_ujian[5] = {68, 87, 77, 69, 87};
	signed int u = -7;
	unsigned int z = 40;
	long f = 10000;
	short v = 1;
	HariKuliah hari = Kamis;
	cout << "Integer: " << a << endl
		 <<	"String: " << c << endl
		 << "Bool: " << isBekerja << endl
		 << "Float: " << x << endl
		 << "Double: " << y << endl
		 << "Char: " << Kelas << endl
		 << "Signed int: " << u << endl
		 << "Unsigned int: " << z << endl
		 << "Long: " << f << endl
		 << "Short: " << v << endl
		 << "Enum: " << hari << endl;
		 
	cout << "Array: ";
    for(int i = 0; i < 5; i++) {
        cout << nilai_ujian[i] << " ";
    }		 
    cout << endl;
    
    cout << "Void: ";
	sapa();
	cout << endl;
	// Ilustrasi Penggunaan
	int luas = 7;
	int panjang = 5;
	int lebar = 4;
	luas =  panjang * lebar;

    cout << "Panjang: " << panjang << endl;
    cout << "Lebar: " << lebar << endl;
    cout << "Luas Persegi Panjang: " << luas << endl;
	
	cin.get();
	return 0;
}
