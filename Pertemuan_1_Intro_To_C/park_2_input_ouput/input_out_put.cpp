#include<iostream>
using namespace std;
int main(){
    // variabel
    // format dasar
    // tipe_data namaVaribale[memory_yang_di_gunakan] = nilai_di_simpan
    char nama[35];
    cout << "Masukan nama Anda : ";
    // input keyboard
    cin >> nama;
    // cara manggil variabel
    cout << "Hello , " << nama << " Selamat datang di program pertama saya!!!" << endl;
    return 0;
}