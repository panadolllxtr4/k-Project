/* 
	Nama file          : Tugas4.
	Nama Programmar    : Qayla At Thahara
	Tgl pembuatan      : 23/September/2024
	Deskripsi          : Program Ini Menentukan Jenis Makanan Berdasarkan Kode Pesanan
*/

#include <stdio.h>
#include <string.h>

int main() {
	printf("Program Ini Menentukan Jenis Makanan Berdasarkan Kode Pesanan\n");
	printf("=============================================================\n");
	printf("Nama Programmer : Qayla At Thahara\n");
	printf("NIM             : 24343105\n");
	printf("=============================================================\n");
    char kodePesanan[3];
    
    // Membaca kode pesanan
    printf("Masukkan kode pesanan (M1-M4): ");
    scanf("%s", kodePesanan);
    
    // Menentukan nama makanan
    if (strcmp(kodePesanan, "M1") == 0) {
        printf("Nasi Goreng\n");
    } else if (strcmp(kodePesanan, "M2") == 0) {
        printf("Mie Goreng\n");
    } else if (strcmp(kodePesanan, "M3") == 0) {
        printf("Soto Ayam\n");
    } else if (strcmp(kodePesanan, "M4") == 0) {
        printf("Sate Ayam\n");
    } else {
        printf("Kode pesanan tidak valid\n");
    }
    
    return 0;
}

