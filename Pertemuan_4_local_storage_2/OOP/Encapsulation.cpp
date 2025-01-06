#include<iostream>
using namespace std;

class Animal{
	private:
		string nama; // object private 
	public:
		Animal(string nama_hewan){
			this->nama = nama_hewan;
		}
		// set and get
		// set gunanya untuk mengganti nilai
		// get untuk mengambil nilai
		string getNama(){
			return this->nama;
		}

		void setNama(string nama_hewan){
			this->nama = nama_hewan;
		}
		
};

int main(){
	Animal animal("Kucing");
	cout << "Nama Animal : " << endl;
	cout << animal.getNama() << endl;
	// kita rubah nama 
	animal.setNama("Burung");
	cout << "Nama Animal setelah di update : " << endl;
	cout << animal.getNama() << endl;
	return 0;
}
