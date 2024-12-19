#include<iostream>
using namespace std;

int main(){
    // int x = 3;
    // int y = 2;
    // int hasil;
    // singkat
    int x = 3 , y = 2 , hasil;

    // penjumlahan
    hasil = x + y ;
    cout << "Hasil tambah dari " << x << " + " << y << " = " << hasil << endl;
    // kurang
    hasil = x - y;
    cout << "Hasil kurang dari " << x << " - " << y << " = " << hasil << endl;
    // kali
    hasil = x * y;
    cout << "Hasil kali dari " << x << " * " << y << " = " << hasil << endl;
    // pembagian
    hasil = x / y;
    cout << "Hasil bagi dari tipe data intenger " << x << " / " << y << " = " << hasil << endl;
    float hasil_float = 3.0 / 2.0;
    cout << "Hasil bagi dari tipe data float " << x << " / " << y << " = " << hasil_float << endl;
    // modulus (sisa pembagian)
    hasil = x % y;
    cout << "Hasil sisa pembagian dari " << x << " % " << y << " = " << hasil << endl; 

    // incerment (menambahkan) dan decerment (mengurangkan)
    // ex : hasil = hasil + 1
    hasil++; // incremnet
    cout << "Hasil incerment : " << hasil << endl;
    hasil--; // decerment
    cout << "hasil decerment : " << hasil << endl;
    return 0;
}