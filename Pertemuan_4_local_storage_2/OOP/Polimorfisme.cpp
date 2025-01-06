#include<iostream>
using namespace std;

class Animal{
	private:
		string nama;
	public : 
		Animal(string nama_hewan){
			this->nama = nama_hewan;
		}
		
		string getNama() const{
			return this->nama;
		}

		void setNama(string nama_hewan){
			this->nama = nama_hewan;
		}

		virtual void sound() const = 0;

};

class Dog : public Animal{
	public : 
		Dog(string nama_hewan) : Animal(nama_hewan){}
		void sound() const override {
			cout << "Woff !!!!" << endl;
		}
};
class Kucing : public Animal{
	public :
		Kucing(string nama_hewan) : Animal(nama_hewan){}
		void sound() const override{
			cout << "Meow !!!" << endl;
		}
};

void makeSound(const Animal& kelas){
	cout << "Nama dari hewan : " << kelas.getNama() << endl;
	kelas.sound();
}
int main(){
	Dog dogs("Spike");
	Kucing kucingt("Tom");
	makeSound(dogs);
	makeSound(kucingt);
	return 0;
}
