#include<iostream>
using namespace std;

void generate_random_value(int arr[],int n){
    for(int i =0 ; i < n ; i++){
        arr[i] = rand() % 100 + 1;
    }
}

void print_format(string pesan , int arr[], int n){
    cout << pesan << endl;
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bobbleShort(int arr[],int n){
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j = 0 ; j < n - i - 1 ; j++){
            // urutkan dari 0 sampai z (ASC)
            if(arr[j] > arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}
void selectionShort(int arr[],int n){
    for(int i = 0 ; i < n -1 ; i++){
        int min_index = i;
        for(int j = i + 1 ; j < n ; j++){
            // dari z ke 0 (DESC) 
            if(arr[j] < arr[min_index]){ 
                min_index = j;
            }
            
        }
        int tmp = arr[min_index];
        arr[min_index]= arr[i];
        arr[i] = tmp;
    }
}

int main(){
    int n ;
    cout << "Masukan jumlah data yang ada inginkan : ";
    cin >> n;
    int arr[n];
    generate_random_value(arr,n);
    print_format("Sebelum di shorting : " , arr , n);
    // bobbleShort(arr,n);
    selectionShort(arr,n);
    print_format("Setelah di susun datanya : " , arr,n);
    return 0;
}