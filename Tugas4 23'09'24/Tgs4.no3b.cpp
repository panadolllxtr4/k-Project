/* 
	Nama file          : Tugas4.
	Nama Programmar    : Qayla At Thahara
	Tgl pembuatan      : 23/September/2024
	Deskripsi          : Program Ini Menampilkan Hasil Biaya Pengiriman Berdasarkan Berat dan Tujuan
*/

#include <stdio.h>
#include <string.h>

int main() {
	printf("Program Ini Menampilkan Hasil Biaya Pengiriman Berdasarkan Berat dan Tujuan\n");
	printf("===========================================================================\n");
	printf("Nama Programmer : Qayla At Thahara\n");
	printf("NIM             : 24343105\n");
	printf("===========================================================================\n");
    float beratBarang, biayaPengiriman;
    char tujuan[10];
    
    // Membaca input
    printf("Masukkan berat barang (kg): ");
    scanf("%f", &beratBarang);
    printf("Masukkan tujuan pengiriman (Jakarta/Bandung): ");
    scanf("%s", tujuan);
    
    // Menentukan biaya pengiriman
    if (beratBarang < 5) {
        if (strcmp(tujuan, "Jakarta") == 0) {
            biayaPengiriman = 20000;
        } else if (strcmp(tujuan, "Bandung") == 0) {
            biayaPengiriman = 25000;
        }
    } else {
        if (strcmp(tujuan, "Jakarta") == 0) {
            biayaPengiriman = 30000;
        } else if (strcmp(tujuan, "Bandung") == 0) {
            biayaPengiriman = 35000;
        }
    }
    
    // Menampilkan hasil
    printf("Biaya Pengiriman: %.2f\n", biayaPengiriman);
    
    return 0;
}


