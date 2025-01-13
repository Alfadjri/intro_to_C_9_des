#include<iostream>
#include<fstream> // pakage untuk membuka dan menambahkan file
using namespace std;

int main(){
    fstream file ("./contoh_file.txt",ios::out);
    if(file.is_open()){
        cout << "File berhasil di buat dengan nama contoh_file.txt" << endl;
        // cara masukin tulisannya
        file << "ini pesan rahasia yang akan di buat dari program ini";
        file.close();
    }else{
        cout << "File tidak di temukan" << endl;
    }
    return 0;
}