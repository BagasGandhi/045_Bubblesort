#include <iostream>
#include <string>
using namespace std;

int arr[20]; // Deklarasi variable global array a dengan ukuran 20
int n; // Deklarasi variable global n untuk menyimpan banyaknya elemen pada array

void input()
{ // procedur untuk input
    int d;
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array: "; // Output ke layar
        cin >> n;                                         // Input dari pengguna
        if (n <= 20)                                      // Jika n kurang dari atau sama dengan 20, lanjutkan ke proses input elemen array
            break;                                        // Keluar dari loop
        else
        {                                                           // Jika n lebih dari 20, tampilkan pesan error  
            cout << "\nArray dapat memiliki maksimal 20 elemen.\n"; //Output ke layar
        }
    }

}