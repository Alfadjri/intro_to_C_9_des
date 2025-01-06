#include<iostream>
using namespace std;

void print_data(string pesan , int data_value[5]){
	cout << pesan << endl;
	for(int i = 0 ; i < 5 ; i++){
		cout << "Value index of-" << i << " : " << data_value[i] << endl;
	}
}

int main(){
	// inisialisasi
	// const = final = mutlak 
	// tipe data ini tidak bisa di ubah atau mutlak 
	const int size = 5;
	int number[size] = {0,1,2,4,3};
	print_data("value baru waktu inisialiasi : ", number);
	// membaca salah satu nilai 
	// misal saya butuh value di index 3
	cout << "index ke 3 : " << number[2] << endl;
	// update
	// lokasi yang update
	number[3] = 3;
	number[4] = 4;
	print_data("value setelah di update : " , number);

	// update
	number[4] = 0;
	print_data("value setelah di hapus : " , number);
	// kalau misalnya string
	string kata[2] = {"","value"};
	for(int i = 0 ; i < 2 ; i++){
		cout << kata[i] << endl;
	}

	return 0;
}
