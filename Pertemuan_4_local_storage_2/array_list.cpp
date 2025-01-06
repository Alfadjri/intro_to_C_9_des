#include<iostream>
#include<vector> // ini di sebut pakage , header
using namespace std;

int main(){
	// inisialisasi
	vector<string> array_list;

	// cara isi nya 
	array_list.push_back("Top Gun");
	array_list.push_back("Mr.Robot");
	array_list.push_back("whoami");
	array_list.push_back("backhat");
	array_list.push_back("showden");

	cout << "Element dalam array list : " << endl;
	int number_list = 1;
	for (int i = 0 ; i < array_list.size() ; i++){
		cout << number_list << ". " << array_list[i] << endl;
		number_list++;
	}
	return 0;
}
