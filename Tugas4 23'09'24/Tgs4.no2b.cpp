/* 
	Nama file          : Tugas4.
	Nama Programmar    : Qayla At Thahara
	Tgl pembuatan      : 23/September/2024
	Deskripsi          : Program Ini Menampilkan Hasil Gaji Berdasarkan Jabatan dan Golongan
*/

#include <stdio.h>
#include <string.h>

int main() {
	printf("Program Ini Menampilkan Hasil Gaji Berdasarkan Jabatan dan Golongan\n");
	printf("===================================================================\n");
	printf("Nama Programmer : Qayla At Thahara\n");
	printf("NIM             : 24343105\n");
	printf("===================================================================\n");
    char jabatan[10], golongan[2];
    float gaji;
    
    // Membaca input
    printf("Masukkan jabatan (Manager/Staff): ");
    scanf("%s", jabatan);
    printf("Masukkan golongan (A/B): ");
    scanf("%s", golongan);
    
    // Menentukan gaji
    if (strcmp(jabatan, "Manager") == 0) {
        if (strcmp(golongan, "A") == 0) {
            gaji = 15000000;
        } else if (strcmp(golongan, "B") == 0) {
            gaji = 12000000;
        }
    } else if (strcmp(jabatan, "Staff") == 0) {
        if (strcmp(golongan, "A") == 0) {
            gaji = 8000000;
        } else if (strcmp(golongan, "B") == 0) {
            gaji = 6000000;
        }
    }
    
    // Menampilkan hasil
    printf("Gaji: %.2f\n", gaji);
    
    return 0;
}


