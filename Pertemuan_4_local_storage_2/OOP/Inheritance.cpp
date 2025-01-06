#include<iostream>
using namespace std;

class Animal{
	private:
		string nama;
	public:
		Animal(string nama_hewan){
			this->nama = nama_hewan;
		}

		string getNama(){
			return this->nama;
		}
		
		void setNama(string nama_hewan){
			this->nama = nama_hewan;
		}
};

class Kucing : public Animal{
	private:
		int kaki;
	public:
		Kucing(string nama_hewan, int kaki_kucing) : Animal(nama_hewan){
			this->kaki = kaki_kucing;
		}

};



int main(){
	Kucing kucing("Tom",2);
	cout << "Nama karkater kucing : " << kucing.getNama() << endl;
	return 0;
}
