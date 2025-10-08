#include <iostream>
using namespace std;

const double PI = 3.14159;

int main() {
    int pilihan;
    cout << "Menu Kalkulator bangun Datar:" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "4. Lingkaran" << endl;
    cout << "Masukkan pilihan bro (1-4): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1: {
            int sisi;
            cout << "Masukkan panjang sisi persegi: ";
            cin >> sisi;
            cout << "Luas persegi: " << sisi * sisi << endl;
            break;
        }
        case 2: {
            int panjang, lebar;
            cout << "Masukkan panjang persegi panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar persegi panjang: ";
            cin >> lebar;
            cout << "Luas persegi panjang: " << panjang * lebar << endl;
            break;
        }
        case 3: {
            int alas, tinggi;
            cout << "Masukkan alas segitiga: ";
            cin >> alas;
            cout << "Masukkan tinggi segitiga: ";
            cin >> tinggi;
            cout << "Luas segitiga: " << 0.5 * alas * tinggi << endl;
            break;
        }
        case 4: {
            int jariJari;
            cout << "Masukkan jari-jari lingkaran: ";
            cin >> jariJari;
            cout << "Luas lingkaran: " << PI * jariJari * jariJari << endl;
            break;
        }
        default:
            cout << "Pilihan tidak valid." << endl;
            break;
    }

    return 0;
}
