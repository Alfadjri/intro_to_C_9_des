#include<iostream>
using namespace std;

int main(){
    // CRUD (Create , Read , Update , Delete)
    // tipe data primitif
    // number (bilangan bulat)
    // variabel 
    // format baca
    // tipe_data namaVariabel = value yang mau di simpan;
    int integerNumber = 999999999;
    short shortNumber = 9999;
    long longNumber = 123456789;
    long long verylongNumber = 9876543210;

    cout << "Tipe data integer : " << integerNumber << endl;
    cout << "Tipe data shortNumber : " << shortNumber << endl;
    cout << "Tipe data long : " << longNumber << endl;
    cout << "Tipe data long long : " << verylongNumber << endl;

    // bilang desimal (bilang berkoma)
    /*ini untuk komentar bertipe paragraf*/
    float floatNumber = 3.14f;
    double doubleNumber = 2.718828;
    long double longDoubleNumber = 1.6180339887;

    cout << "Tipe data float : " << floatNumber << endl;
    cout << "Tipe data double : " << doubleNumber << endl;
    cout << "Tipe data long double : " << longDoubleNumber << endl;

    // karakter 
    char karakter = 'A';
    cout << "Tipe data char : " << karakter << endl;

    // boolean (kondisi)
    // nilai hanya ada 2 true (1) dan false (0)
    bool boolean_simbol = 1;
    bool boolean_no_simbolic = true;
    cout << "Tipe data boolean simbolic : " << boolean_simbol << endl;
    cout << "Tipe data bollean simbolic : " << boolalpha << boolean_simbol << endl;

    // non primitif
    const char nama[30] = "Alfadjri"; // 255 ini nilai default dari tipe data strings
    cout << "ini contoh tipe data primitif char dengan panjang 255 karakter : " << nama << endl;
    std::string nama_strings = "Alfadjri Dwi Fadhilah";

    return 0;
}
