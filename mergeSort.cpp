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
    
    //step 3
    //fungsi rekursi - memanggil diri sendiri
    MergeSort(low,mid); //step 3.a
    MergeSort(mid + 1, high); //step 3.b

    //step 4
    int i = low; //step 4.a
    int j = mid + 1; //step4.b
    int k = low; //step 4.c

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]){
            B[k] = arr[i];
            i++;
        
        }else {
            B[k] = arr[j];
            j++;
        }
        k++;
    }

    while (j <= high){
        B[k] = arr[j];
        j++;
        k++;
    }
}
