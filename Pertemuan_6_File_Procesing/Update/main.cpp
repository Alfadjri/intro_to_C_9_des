#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file("../Create/contoh_file.txt",ios::app);
    if(file.is_open()){
        file << "ini line baru pesannya baru akan muncul di bawah tulisan" << endl;
        file.close();
    }else{
        cout << "File tidak di temukan" << endl;
    }
    return 0;
}