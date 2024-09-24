/* 
	Nama file          : Tugas4.
	Nama Programmar    : Qayla At Thahara
	Tgl pembuatan      : 23/September/2024
	Deskripsi          : Program Ini Menampilkan Hasil Kategori Barang Berdasarkan Jenis dan Harga
*/

#include <stdio.h>
#include <string.h>

int main() {
	printf("Program Ini Menampilkan Hasil Kategori Barang Berdasarkan Jenis dan Harga\n");
	printf("===========================================================================\n");
	printf("Nama Programmer : Qayla At Thahara\n");
	printf("NIM             : 24343105\n");
	printf("===========================================================================\n");
    char jenisBarang[15];
    float harga;
    char kategori[10];
    
    // Membaca input
    printf("Masukkan jenis barang (Elektronik/Non-Elektronik): ");
    scanf("%s", jenisBarang);
    printf("Masukkan harga barang: ");
    scanf("%f", &harga);
    
    // Menentukan kategori barang
    if (strcmp(jenisBarang, "Elektronik") == 0) {
        if (harga > 2000000) {
            strcpy(kategori, "Premium");
        } else {
            strcpy(kategori, "Reguler");
        }
    } else if (strcmp(jenisBarang, "Non-Elektronik") == 0) {
        if (harga > 1000000) {
            strcpy(kategori, "Premium");
        } else {
            strcpy(kategori, "Reguler");
        }
    }
    
    // Menampilkan hasil
    printf("Kategori Barang: %s\n", kategori);
    
    return 0;
}

