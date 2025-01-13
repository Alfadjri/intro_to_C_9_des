#include<iostream>
using namespace std;

// case kita bawa mengamati hewan 

class Hewan{ // ini di sebut kelas
	private: // ini di sebut property
		int umur;
	public: 
		string nama = "default"; // object
		// construktor itu teknik memanggil langsung dengan perintahnya
		Hewan(string nama_hewan , int umur_hewan){
			this->umur = umur_hewan;
			this->nama = nama_hewan;
		}

		int getUmur(){
			return this->umur;
		}
};

int main(){
	// inisialisasi
	Hewan animal("Kucing",4);
	cout << "Siapa nama hewan di bawah ini  :" << endl;
	cout << animal.nama << endl; // ini cara memanganggil object dan print object
	cout << "berapa umur hewan ini : " << endl;
	// cara memanggil function class atau method
	cout << animal.getUmur() << endl;
	return 0;
}
