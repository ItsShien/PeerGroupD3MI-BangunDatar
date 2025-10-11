
# Kalkulator Geometri Pake C++

Ini project C++ simpel buat ngitung luas bangun datar. Programnya jalan di terminal atau CMD doang, jadi bener-bener *basic* tapi fungsional. Pas banget buat yang lagi mulai belajar ngoding C++ biar konsep dasarnya makin nempel.

## Fiturnya Apa Aja?

  * **Menu interaktif**, jadi tinggal pilih mau ngitung apa.
  * Bisa ngitung luas dari **empat bangun datar** dasar: persegi, persegi panjang, segitiga, sama lingkaran.
  * Ada **notifikasi simpel** kalo salah masukin pilihan menu. Gak bakal nge-bug aneh-aneh.

## Cara Running Programnya

Lo butuh C++ compiler ya, misalnya G++ (biasanya ada di MinGW buat Windows atau `build-essential` di Linux).

1.  **Save Kode**
    Simpen kodenya di satu file, kasih nama `kalkulator.cpp`.

2.  **Buka Terminal**
    Buka terminal atau CMD lo, terus masuk ke direktori atau folder tempat file tadi disimpen.

3.  **Kompilasi Kode**
    Ketik command ini di terminal terus enter. Command ini bakal nge-build kodemu jadi file yang bisa dieksekusi.

    ```bash
    g++ kalkulator.cpp -o kalkulator
    ```

4.  **Jalanin Programnya**
    Kalo kompilasi sukses, bakal ada file baru namanya `kalkulator`. Tinggal jalanin pake command ini:

    ```bash
    ./kalkulator
    ```

5.  **Selesai**
    Nanti bakal muncul menunya di terminal. Tinggal ikutin aja instruksinya, masukin angka, dan hasilnya langsung keliatan.

## Bedah Kodenya, Kuy

Penasaran gimana cara kerjanya? Sini kita bongkar dalemannya.

### Header & Namespace

```cpp
#include <iostream>
using namespace std;
```

  * `#include <iostream>`: Ini kayak 'izin' ke C++ buat pake fitur input-output. Wajib ada biar kita bisa pake `cout` (buat nampilin teks) dan `cin` (buat nerima inputan user).
  * `using namespace std;`: Ini *lifehack* biar kita gak perlu ngetik `std::` mulu di depan `cout` atau `cin`. Biar lebih ringkes aja kodemu.

### Variabel Global

```cpp
double PI = 3.14159;
```

Kita bikin variabel `PI` buat nyimpen nilai Pi. Tipenya `double` biar bisa nampung angka desimal. Ditaro di luar `main` biar bisa diakses dari mana aja, makanya disebut variabel global.

**Pro tip**: Biar lebih aman, tambahin `const` di depannya (`const double PI`), biar nilainya gak bisa diubah-ubah lagi di tengah jalan.

### Fungsi main

```cpp
int main() {
    // ... isi program ...
    return 0;
}
```

  * `int main()`: Ini adalah jantungnya program. Titik start di mana semua kode dieksekusi pertama kali.
  * `return 0;`: Kalo program udah selesai dan ada ini di akhir, artinya semua berjalan aman sentosa, gak ada error.

### Menu & Input

```cpp
int pilihan;
cout << "Menu Kalkulator bangun Datar:" << endl;
// ... dst ...
cin >> pilihan;
```

Di sini kita cuma nyiapin "wadah" integer namanya `pilihan`. Terus kita nampilin tulisan menu ke layar pake `cout`. `endl` itu buat bikin baris baru alias enter. Nah, `cin >> pilihan;` tugasnya "nangkep" angka yang diketik user dan masukin ke wadah `pilihan` tadi.

### Otak Program: switch-case

```cpp
switch (pilihan) {
    // ... case-case ...
}
```

Struktur `switch` ini kayak pos satpam. Dia bakal ngecek isi variabel `pilihan`, terus ngarahin program ke `case` yang nomornya cocok.

  * **`case 1:`**: Kalo user ngetik 1, kode di blok ini yang jalan. Minta sisi, itung luas, cetak hasilnya. Simpel.
  * **`break;`**: Ini penting banget. Gunanya buat "ngerem" setelah satu `case` selesai. Kalo gak ada `break`, programnya bakal bablas ngejalanin kode di `case` selanjutnya.
  * **`default:`**: Ini "plan B". Kalo user masukin angka ngasal (misalnya 5 atau 100), kode di `default` ini yang jalan buat ngasih tau kalo pilihannya gak valid.

## Bisa Di-upgrade Gak? Jelas\!

Program ini udah jalan, tapi masih bisa dibikin lebih GG lagi. Coba deh:

  * **Validasi Input Biar Gak Crash**: Sekarang, kalo user masukin huruf pas ditanya angka, programnya bakal error. Coba tambahin validasi biar programnya bisa nanganin input yang salah.
  * **Pake Fungsi Biar Rapi**: Tiap perhitungan (persegi, segitiga, dll) bisa dipisah ke dalam fungsinya masing-masing. Biar fungsi `main` gak kepanjangan dan lebih gampang dibaca.
  * **Bikin Loop Biar Bisa Ngitung Lagi**: Programnya sekarang cuma jalan sekali. Coba bungkus pake loop `do-while`, jadi setelah selesai ngitung ada pilihan "Mau hitung lagi? (y/n)".
  * **Pake `const` Buat PI**: Seperti pro tip di atas, ini best practice biar kode lo lebih aman dan profesional.
