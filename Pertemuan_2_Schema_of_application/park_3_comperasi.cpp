#include<iostream>
using namespace std;

int main(){
    bool a = true , b = false , hasil;
    // opeartor and (&&)
    // kedua syarat harus terpenuhi true
    // kalau salah satu tidak terpenuhi nilai selalu false
    // |x|1|0|
    // |1|1|0|
    // |0|0|0|
    hasil = (a && b);
    cout << "Hasil " << boolalpha << a << " ketemu dengan " << boolalpha << b  << " dengan simbol and (&&) adalah " << boolalpha << hasil << endl;
    // operator or (||)
    // kedua syarat false itu nilainya false
    // kalau misalnya salah satu true maka nilainya true
    // |x|1|0|
    // |1|1|1|
    // |0|1|0|
    hasil = (a || b);
    cout << "Hasil " << boolalpha << a << " ketemu dengan " << boolalpha << b  << " dengan simbol or (||) adalah " << boolalpha << hasil << endl;
    // kebalikan nilai not (!)
    bool hasil_2 = (!hasil);
    cout << "Hasil " << boolalpha << hasil << " ketemu  dengan simbol not (!) adalah " << boolalpha << hasil_2 << endl;


    int c = 10 , d = 10;
    // besar (>) // sifatnya harus spesifik
    hasil = (c > d);
    cout << "Apakah " << c << " besar dari (>) " << d << " : " << boolalpha << hasil << endl; 
    // kecil (<) // sifatnya harus spesifik
    hasil = (c < d);
    cout << "Apakah " << c << " kecil dari (<) " << d << " : " << boolalpha << hasil << endl; 
    // besar sama dengan (>=)
    hasil = (c >= d);
    cout << "Apakah " << c << " besar sama dengan dari (<=) " << d << " : " << boolalpha << hasil << endl; 
    // kecil sama dengan (<=)
    hasil = (c <= d);
    cout << "Apakah " << c << " kecil sama dengan dari (<=) " << d << " : " << boolalpha << hasil << endl; 
    // persamaan atau equels (==)
    hasil = (c == d);
    cout << "Apakah " << c << " sama dengan dari (==) " << d << " : " << boolalpha << hasil << endl; 

    return 0;
}