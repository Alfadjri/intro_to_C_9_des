#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 5;

    // if 
    // format dasarnya 
    /* 
    if (kondisi){
        // apa yang di lakukan jika kondisi terpenuhi
    }
    */
    // case 
    // apakah nilai a itu besar dari b kalau besar maka saya minta print kan bilangannya besar dari b 
    cout << "===\tif\t===" << endl;
    if(b > a){
        cout << "bilangan a besar dari b karna nilai b : " << b << endl;
    }
    cout << "===\tif else\t===" << endl;
    // case 
    // kalau nilai b lebih besar dari a  munculkan pesan tadi 
    // kalau tidak maka munculkan tidak besar dari a
    if(b > a){
        cout << "bilangan b besar dari a karna nilai b : " << a << endl;
    }else {
        cout << "Tidak besar dari a :" << a << endl;
    }

    
    cout << "===\tif else-if else\t===" << endl;
    // case 
    // kalau nilai b lebih besar dari a  munculkan pesan tadi 
    // kalau tidak maka munculkan tidak besar dari a
    if(b > a){
        cout << "bilangan b besar dari a karna nilai a : " << a << endl;
    }else if ( b <= 5){
        cout << "bilangan b kurang dari 5 karna nilai b :" << b << endl;
    }else {
        cout << "Tidak besar dari a :" << a << endl;
    }

    // case menu selection
    cout << "===\tswirch case\t===" << endl;
    // switch case
    char nilai = 'Z';
    switch(nilai){
        case 'A' :
            cout << "Kamu lulus dengan sempurna" << endl;
        break; // break ini memaksa keluar
        case 'B' :
            cout << "Kamu lulus dengan pas-pasan" << endl;
        break; 
        default:
            cout << "Kamu tidak lulus" << endl;
        break;
    }
    return 0;
}