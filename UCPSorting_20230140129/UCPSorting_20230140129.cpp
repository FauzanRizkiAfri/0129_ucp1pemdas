// 1. Elemen ini dibandingkan dengan elemen-elemen yang telah diurutkan satu persatu dari kanan ke kiri, jika elemen yang dipilih lebih kecil dari elemen disebelahnya,maka elemen yang dipilih akan dipindahkan ke posisi tepat
// 2. pada iterasi, algoritma mencari elemen terkecil dari array yang belum diurutkan, proses ini diulangi untuk array yang semakin kecil
// 3. untuk mengetahui jumlah langkah yang dilakukan dalam algoritma sortir, anda bisa menggunakan variabel hitung atau yang biasa disebut dengan langkah yang ditingkatkan setiap kali ada operasi komparasi atau pertukaran elemen 


#include <iostream>
using namespace std;

int arr[29];
int n;

void input() {
    while (true) {
        cout << "Masukkan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 29)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 29 elemen.\n";
        }
    }
    cout << endl;
    cout << "======================" << endl;
    cout << "Masukkan  Elemen Array" << endl;
    cout << "======================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void selectionSort() {
    for (int j = 0; j < n - 1; j++) {
        int min_index = j;
        for (int i = j + 1; i < n; i++) {
            if (arr[i] < arr[min_index]) {
                min_index = i;
            }
        }
        int temp = arr[j];
        arr[j] = arr[min_index];
        arr[min_index] = temp;
    }
}

void display() {
    cout << endl;
    cout << "====================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "====================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j];
        if (j < n - 1) {
            cout << " --> ";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;
}

int main() {
    input();
    selectionSort();
    display();

    system("pause");
    return 0;
}