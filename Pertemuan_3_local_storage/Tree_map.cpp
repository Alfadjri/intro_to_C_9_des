#include<iostream>
#include<map>
using namespace std;

void cetak_nilai(string pesan ,map<int,string> hash){
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
    map<int,string> tree_map;
    // isi 
    tree_map[2] = "roti";
    tree_map[1] = "pasta";
    tree_map[3] = "nasi";
    tree_map[4] = "ikan mentah";
    //cetak
    cetak_nilai("after create tree_map", tree_map);
    // gimana cara nya ambil 1 nilai
    // misal kita pingin ikan mentah value
    cout << "Makanan khas jepang : " << tree_map[4] << endl;
    cout << endl;
    // update
    tree_map[4] = "ikan";
    cetak_nilai("after update tree_map", tree_map);
    // delete
    tree_map.erase(4);
    cetak_nilai("after delete tree_map", tree_map);
    return 0;
}