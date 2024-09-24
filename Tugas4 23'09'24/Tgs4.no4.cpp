/* 
	Nama file          : Tugas4.
	Nama Programmar    : Qayla At Thahara
	Tgl pembuatan      : 23/September/2024
	Deskripsi          : Program Ini Menentukan Diskon Berdasarkan Kode Promo
*/

#include <stdio.h>
#include <string.h>

int main() {
	printf("Program Ini Menentukan Diskon Berdasarkan Kode Promo\n");
	printf("====================================================\n");
	printf("Nama Programmer : Qayla At Thahara\n");
	printf("NIM             : 24343105\n");
	printf("====================================================\n");
    float hargaAwal, totalHarga;
    char kodePromo[10];
    
    // Membaca harga awal dan kode promo
    printf("Masukkan harga awal: ");
    scanf("%f", &hargaAwal);
    printf("Masukkan kode promo: ");
    scanf("%s", kodePromo);
    
    // Menentukan diskon berdasarkan kode promo
    if (strcmp(kodePromo, "KODE1") == 0) {
        totalHarga = hargaAwal * 0.9;
    } else if (strcmp(kodePromo, "KODE2") == 0) {
        totalHarga = hargaAwal * 0.8;
    } else if (strcmp(kodePromo, "KODE3") == 0) {
        totalHarga = hargaAwal * 0.7;
    } else {
        totalHarga = hargaAwal;
    }
    
    // Menampilkan total harga setelah diskon
    printf("Total Harga: %.2f\n", totalHarga);
    
    return 0;
}
