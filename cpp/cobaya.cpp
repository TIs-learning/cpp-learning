#include <iostream>
#include <string>
using namespace std;

int main() {
    string kata = "katak";
    int kiri = 0;
    int kanan = kata.length() - 1;
    bool adalahPalindrom = true;

    // Cek dari kedua ujung kata menuju ke tengah
    while (kiri < kanan) {
        if (kata[kiri] != kata[kanan]) {
            adalahPalindrom = false;
            break; // Kalau ada satu aja yang beda, langsung stop
        }
        kiri++;
        kanan--;
    }

    // Menampilkan hasil
    if (adalahPalindrom) {
        cout << "\"" << kata << "\" adalah palindrom." << endl;
    } else {
        cout << "\"" << kata << "\" bukan palindrom." << endl;
    }

    return 0;
}
