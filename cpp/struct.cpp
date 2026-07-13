#include <iostream>
#include <string>
using namespace std;

// Data yang dibentuk oleh beberapa data
struct buah {
    string warna;
    float berat;
    int harga;
    string rasa;
};

int main() {
    buah apel;
    buah jeruk;

    apel.warna = "Kuning";
    apel.harga = 400;
    apel.berat = 47.3;
    apel.rasa = "Pahit";

    jeruk.warna = "Merah";
    jeruk.harga = 420;
    jeruk.berat = 27.3;
    jeruk.rasa = "Asem";

    cout << "warna apel " << apel.warna << endl;
    cout << "berat apel " << apel.berat << endl;
    cout << "harga apel " << apel.harga << endl;
    cout << "rasa apel " << apel.rasa << endl << endl;

    cout << "warna Jeruk " << jeruk.warna << endl;
    cout << "berat Jeruk " << jeruk.berat << endl;
    cout << "harga Jeruk " << jeruk.harga << endl;
    cout << "rasa  Jeruk " <<  jeruk.rasa << endl;


    //cin.get();
    return 0;
}