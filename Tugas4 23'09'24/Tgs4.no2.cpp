/* 
	Nama file          : Tugas4.
	Nama Programmar    : Qayla At Thahara
	Tgl pembuatan      : 23/September/2024
	Deskripsi          : Program menentukan Kategori Nilai Berdasarkan Huruf Mutu
*/

#include <stdio.h>

int main() {
	printf("Program menentukan Kategori Nilai Berdasarkan Huruf Mutu\n");
	printf("=========================================================\n");
	printf("Nama Programmer : Qayla At Thahara\n");
	printf("NIM             : 24343105\n");
	printf("=========================================================\n");
    int nilai;
    
    // Membaca nilai mahasiswa
    printf("Masukkan nilai (0-100): ");
    scanf("%d", &nilai);
    
    // Menentukan huruf mutu
    switch (nilai / 10) {
        case 10:
        case 9:
        case 8:
            printf("A\n");
            break;
        case 7:
            printf("B\n");
            break;
        case 6:
            printf("C\n");
            break;
        case 5:
        case 4:
            printf("D\n");
            break;
        default:
            if (nilai >= 0) {
                printf("E\n");
            } else {
                printf("Nilai tidak valid\n");
            }
    }
    
    return 0;
}

