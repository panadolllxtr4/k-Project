/* 
	Nama file          : Tugas4.
	Nama Programmar    : Qayla At Thahara
	Tgl pembuatan      : 23/September/2024
	Deskripsi          : Program Ini Menentukan Jenis Kendaraan Berdasarkan Plat Nomor
*/

#include <stdio.h>

int main() {
	printf("Menentukan Jenis Kendaraan Berdasarkan Plat Nomor\n");
	printf("====================================================\n");
	printf("Nama Programmer : Qayla At Thahara\n");
	printf("NIM             : 24343105\n");
	printf("====================================================\n");
    char kodePlat;
    
    // Membaca kode plat nomor
    printf("Masukkan kode plat nomor: ");
    scanf(" %c", &kodePlat);
    
    // Menentukan kota asal
    switch (kodePlat) {
        case 'B':
            printf("Jakarta\n");
            break;
        case 'D':
            printf("Bandung\n");
            break;
        case 'L':
            printf("Surabaya\n");
            break;
        case 'A':
            printf("Yogyakarta\n");
            break;
        default:
            printf("Kode plat tidak valid\n");
    }
    
    return 0;
}

