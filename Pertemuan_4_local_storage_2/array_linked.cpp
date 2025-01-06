#include<iostream>
using namespace std;


struct Note{
	int data;
	Note* next;
};

int main(){
	// inisialisai
	Note* head = nullptr;
	Note* second = nullptr;
	Note* third = nullptr;
	
	// memanggil data
	head = new Note();
	second = new Note();
	third = new Note();
	// isi 
	head->data = 10;
	head->next = second;
	second->data = 20;
	second->next = third;
	third->data = 30;
	third->next = nullptr;

	Note* masinis = head;

	// gimana cara print atau cetak data
	cout << "Apa saja yang ada di dal gerbong" << endl;
	while(masinis != nullptr){
		cout << "Data dalam gerbong : " << masinis->data << endl;
		cout << "apakah ada lokomotif berikutnya : " << masinis->next << endl;
		masinis = masinis->next;
	}
	cout << endl;
	
	// bersihin ram 
	delete head;
	delete second;
	delete third;

	cout << "Apa saja yang ada di dal gerbong" << endl;
	while(masinis != nullptr){
		cout << "Data dalam gerbong : " << masinis->data << endl;
		cout << "apakah ada lokomotif berikutnya : " << masinis->next << endl;
		masinis = masinis->next;
	}
	cout << endl;

	return 0;
}
