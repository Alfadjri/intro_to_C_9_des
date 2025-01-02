#include<iostream>
using namespace std;

int main(){
    // while
    // di mana dia akan melakukan perulangan tapi di check terlebih dahulu
    // contoh : 0 samapi 4
    // ouput : index ke 0 , index ke 1, .... , index ke 4
    cout << "===== while =====" << endl;
    int index = 5;
    // format dasarnya 
    // while(kondisi_kapan_harus_berhenti){
    // sebelum berhenti kamu mau ngapain ?
    // cara menghentikan sampai kondisi ini berhenti
    //}
    while(index < 5){
        cout << "index ke-" << index << endl;
        index++;
    }
    cout << "=======do-while====" << endl;
    index = 5;
    do{
        index++;
        cout << "index ke-" << index << endl;
        break;
    }while(true);
    // for 
    // kita harus tau kapan berhenti berapa banyak pengulangan
    for(int i = 1; i <= 10000;i++){
        cout << "i love you " << i << endl;
    }
    // foreach  baru ada di c++ version 11
    string buahs[6] = {"Semangka","melon","anggur","pisang","markisa","jeruk"};
    cout << "Buah yang ada di keranjang" << endl;
    for(string value : buahs){
        cout << value << endl;
    }
    return 0;
}