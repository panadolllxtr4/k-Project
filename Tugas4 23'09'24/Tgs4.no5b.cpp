/* 
	Nama file          : Tugas4.
	Nama Programmar    : Qayla At Thahara
	Tgl pembuatan      : 23/September/2024
	Deskripsi          : Program Ini Menampilkan Hasil Tarif Listrik Berdasarkan Jenis Pelanggan dan Daya
*/

#include <stdio.h>
#include <string.h>

int main() {
	printf("Program Ini Menampilkan Hasil Tarif Listrik Berdasarkan Jenis Pelanggan dan Daya\n");
	printf("================================================================================\n");
	printf("Nama Programmer : Qayla At Thahara\n");
	printf("NIM             : 24343105\n");
	printf("================================================================================\n");
    char jenisPelanggan[15];
    int daya;
    float tarif;
    
    // Membaca input
    printf("Masukkan jenis pelanggan (Rumah Tangga/Bisnis): ");
    scanf("%s", jenisPelanggan);
    printf("Masukkan daya (900/1300): ");
    scanf("%d", &daya);
    
    // Menentukan tarif listrik
    if (strcmp(jenisPelanggan, "Rumah Tangga") == 0) {
        switch (daya) {
            case 900:
                tarif = 1352;
                break;
            case 1300:
                tarif = 1444;
                break;
        }
    } else if (strcmp(jenisPelanggan, "Bisnis") == 0) {
        switch (daya) {
            case 900:
                tarif = 1528;
                break;
            case 1300:
                tarif = 1652;
                break;
        }
    }
    
    // Menampilkan hasil
    printf("Tarif Listrik: %.2f/kWh\n", tarif);
    
    return 0;
}

