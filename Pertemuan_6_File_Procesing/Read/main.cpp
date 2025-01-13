#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file ("../Create/contoh_file.txt" , ios::in);
    if(file.is_open()){
        string row;
        cout << "Isi dari contoh_file.txt" << endl;
        while(getline(file,row)){
            cout << row << endl;
        }
        file.close();
    }else{
        cout << "File tidak di temukan" << endl;
    }
    return 0;
}