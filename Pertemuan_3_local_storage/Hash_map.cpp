#include<iostream>
#include<unordered_map> // pakage
using namespace std;

// function
// apakah fungsinya akan mengluarkan nilai
int tambah(int a , int b){
    return a + b;
}
// atau tidak mengeluarkan nilai
void cetak_nilai(string pesan ,unordered_map<string,int> hash){
    cout << pesan << endl;
    cout << endl;
    cout << "|" << "key" << "\t|" << "value" << "\t|" << endl;
    for(const auto& value : hash){
        cout << "|" << value.first << "\t|" << value.second << "\t|" << endl;
    }
    cout << endl;
}


int main(){
    // inisialisasi
    unordered_map<string,int> hash_map;

    // isi nilai 
    hash_map["dua"] = 1;
    hash_map["satu"] = 2;
    hash_map["tiga"] = 3;
    hash_map["empat"] = 4;
    cetak_nilai("after create hash", hash_map);
    // update
    // teknik dasar hapus terus tambah
    hash_map["satu"] = 1;
    hash_map["dua"] = 2;
    cetak_nilai("after update hash", hash_map);

    // menghapus 
    hash_map.erase("empat");
    cetak_nilai("after delete hash", hash_map);
    return 0;
}