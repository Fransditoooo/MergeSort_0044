#include <iostream>
using namespace std;

int arr[20], B[20];

int n;

void input() {
            while (true){
                cout << "Masukkan panjang element array: ";
                cin >> n;

                if (n<= 20) {
                    break;
                }
                else {
                    cout << "\nMaksimal panjang array adalah 20";
                }
            }

            cout << "\n===============";
            cout << "\nInputkan Isi Element Array";
            cout << "\n===============" << endl;

            for (int i = 0; i < n; i++){
                cout << "Masukkan Array index ke - " << i << ":";
                cin >> arr[i];
            };
}

void MergeSort(int low, int high) {
    if (low >= high) { //step 1
        return ; //step 1.a
    }

    int mid = (low + high)/2; //step2
    



}