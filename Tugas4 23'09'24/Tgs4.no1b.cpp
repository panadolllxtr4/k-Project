/* 
	Nama file          : Tugas4.
	Nama Programmar    : Qayla At Thahara
	Tgl pembuatan      : 23/September/2024
	Deskripsi          : Program Ini Menampilkan Hasil Diskon Berdasarkan Kategori Pelanggan dan Kode Promo
*/

#include <stdio.h>
#include <string.h>

int main() {
	printf("Program Ini Menampilkan Hasil Diskon Berdasarkan Kategori Pelanggan dan Kode Promo\n");
	printf("==================================================================================\n");
	printf("Nama Programmer : Qayla At Thahara\n");
	printf("NIM             : 24343105\n");
	printf("==================================================================================\n");
    float hargaAwal, totalHarga;
    char kategoriPelanggan[10], kodePromo[10];
    
    // Membaca input
    printf("Masukkan harga awal: ");
    scanf("%f", &hargaAwal);
    printf("Masukkan kategori pelanggan (VIP/Reguler): ");
    scanf("%s", kategoriPelanggan);
    printf("Masukkan kode promo (PROMO1/PROMO2 atau kosong): ");
    scanf("%s", kodePromo);
    
    // Menentukan diskon
    if (strcmp(kategoriPelanggan, "VIP") == 0) {
        totalHarga = hargaAwal * 0.8;
    } else if (strcmp(kategoriPelanggan, "Reguler") == 0) {
        if (strcmp(kodePromo, "PROMO1") == 0) {
            totalHarga = hargaAwal * 0.9;
        } else if (strcmp(kodePromo, "PROMO2") == 0) {
            totalHarga = hargaAwal * 0.85;
        } else {
            totalHarga = hargaAwal;
        }
    } else {
        totalHarga = hargaAwal;
    }
    
    // Menampilkan hasil
    printf("Total Harga: %.2f\n", totalHarga);
    
    return 0;
}

