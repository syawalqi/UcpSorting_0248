// 1. algoritma bubble sort membandingkan index yang ada di dalam index 0 dengan angka yang berada di index 1 lalu akan men swap kedua index tersebut jika tidak berurutan. langkah ini akan berulang hingga semua angka yang berada di dalam index urut, algoritma ini mengurutkan dari yang terkecil hingga yang terbesar
// 2. dengan Insertion sort ini bekerja dengan memisahkan urutan, urutan sorted dan unsorted, dan urutan yang sudah ter sortir akan ada satu dan akan ada 4 di urutan yang belum disortir, lalu akan menaruh angka ke satu di urutan yang belum tersortir ke urutan yang sudah disortir. langkah ini akan berulang hingga urutan sudah sorted semua
// 3. hanya harus mengunakan 1 comparison di setiap urutan n-1 dengan urutan yang sebelumnya dengan menggunakan n-1
// 
// 

#include <iostream>
using namespace std;

int arr[48];
int n;

void input() {
    while (true) {
        cout << "masukan banyaknya elemen pada array :";
        cin >> n;
        if (n <= 48)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 48 elemen. \n";
        }
    }
    cout << endl;
    cout << "================" << endl;
    cout << "masukan Elemen Array" << endl;
    cout << "================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << "; ";
        cin >> arr[i];
    }

}

void sort() {
    int i, j, temp;

    for (i = 0; i <= n - 2; i++) {// step 1
        temp = arr[i]; //step 2

        j = i - 1; 

        while (j >= 0 && arr[j] > temp) 
        {
            arr[j + 1] = arr[j]; 
            j = j - 1; // j-- 
        }

        arr[j + 1] = temp;
    }
}


void display() {
    cout << endl;
    cout << "================" << endl;
    cout << "Element array yang telah tersusun" << endl;
    cout << "================" << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j];
        if (j < n - 1) {
            cout << "-->";
        }
    }
    cout << endl;
    cout << endl;

    cout << "jumlah pass =" << n - 1 << endl;
    cout << endl;
    cout << endl;
}


int main()
{
    input(); //memanggil prosedur untuk menginput data 
    sort(); //memanggil prosedur bubblesort
    display(); // memanggil prosedur untuk menampilkan data yang telah diproses
    system("pause");

    return 0;

    std::cout << "Hello World!\n";
}

