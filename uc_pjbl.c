#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[100];
    long size;
    char content[1000]; // menambahkan isi file
} File;

File files[100];
int fileCount = 0;

void displayMenu() {
    printf("1. Tambah File\n");
    printf("2. Buat Isi File\n");
    printf("3. Baca File\n");
    printf("4. Cari File\n");
    printf("5. Hapus File\n");
    printf("6. Ubah Nama dan Ukuran File\n");
    printf("7. Tampilkan Semua File\n");
    printf("8. Keluar\n");
    printf("Pilih opsi: ");
}

void addFile() {
    File newFile;
    printf("\nMasukkan Nama File: ");
    fgets(newFile.name, sizeof(newFile.name), stdin);
    newFile.name[strcspn(newFile.name, "\n")] = 0;
    
    printf("Masukkan Ukuran File (dalam byte): ");
    scanf("%ld", &newFile.size);
    getchar();
    
    files[fileCount++] = newFile;
    printf("\nFile '%s' berhasil ditambahkan!\n\n", newFile.name);
}

void createFileContent() {
    char fileName[100];
    printf("\nMasukkan Nama File yang Akan Ditambahkan Isinya: ");
    fgets(fileName, sizeof(fileName), stdin);
    fileName[strcspn(fileName, "\n")] = 0;

    int found = 0;
    for (int i = 0; i < fileCount; i++) {
        if (strcmp(files[i].name, fileName) == 0) {
            printf("Masukkan Isi File: ");
            fgets(files[i].content, sizeof(files[i].content), stdin);
            files[i].content[strcspn(files[i].content, "\n")] = 0;
            printf("\nIsi file '%s' berhasil ditambahkan!\n\n", fileName);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nFile dengan nama '%s' tidak ditemukan.\n\n", fileName);
    }
}

void readFile() {
    char fileName[100];
    printf("\nMasukkan Nama File yang Akan Dibaca: ");
    fgets(fileName, sizeof(fileName), stdin);
    fileName[strcspn(fileName, "\n")] = 0;

    int found = 0;
    for (int i = 0; i < fileCount; i++) {
        if (strcmp(files[i].name, fileName) == 0) {
            printf("\nIsi File '%s': %s\n\n", fileName, files[i].content);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nFile dengan nama '%s' tidak ditemukan.\n\n", fileName);
    }
}

void searchFile() {
    char searchName[100];
    printf("\nMasukkan Nama File yang Ingin Dicari: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = 0;

    int found = 0;
    for (int i = 0; i < fileCount; i++) {
        if (strcmp(files[i].name, searchName) == 0) {
            printf("\nFile Ditemukan: Nama: %s, Ukuran: %ld byte\n\n", files[i].name, files[i].size);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nFile dengan nama '%s' tidak ditemukan.\n\n", searchName);
    }
}

void deleteFile() {
    char deleteName[100];
    printf("\nMasukkan Nama File yang Ingin Dihapus: ");
    fgets(deleteName, sizeof(deleteName), stdin);
    deleteName[strcspn(deleteName, "\n")] = 0;

    int found = 0;
    for (int i = 0; i < fileCount; i++) {
        if (strcmp(files[i].name, deleteName) == 0) {
            found = 1;
            for (int j = i; j < fileCount - 1; j++) {
                files[j] = files[j + 1];
            }
            fileCount--;
            printf("\nFile '%s' berhasil dihapus.\n\n", deleteName);
            break;
        }
    }

    if (!found) {
        printf("\nFile dengan nama '%s' tidak ditemukan.\n\n", deleteName);
    }
}

void updateFile() {
    char updateName[100];
    printf("\nMasukkan Nama File yang Ingin Diubah: ");
    fgets(updateName, sizeof(updateName), stdin);
    updateName[strcspn(updateName, "\n")] = 0;

    int found = 0;
    for (int i = 0; i < fileCount; i++) {
        if (strcmp(files[i].name, updateName) == 0) {
            found = 1;
            printf("Masukkan Nama Baru (atau tekan Enter untuk melewati): ");
            char newName[100];
            fgets(newName, sizeof(newName), stdin);
            newName[strcspn(newName, "\n")] = 0;
            if (strlen(newName) > 0) {
                strcpy(files[i].name, newName);
            }

            printf("Masukkan Ukuran Baru (dalam byte, atau tekan 0 untuk melewati): ");
            long newSize;
            scanf("%ld", &newSize);
            getchar();
            if (newSize > 0) {
                files[i].size = newSize;
            }
            printf("\nFile berhasil diubah!\n\n");
            break;
        }
    }

    if (!found) {
        printf("\nFile dengan nama '%s' tidak ditemukan.\n\n", updateName);
    }
}

void displayAllFiles() {
    printf("\n");
    if (fileCount == 0) {
        printf("Tidak ada file yang tersedia.\n\n");
    } else {
        printf("Daftar Semua File:\n");
        for (int i = 0; i < fileCount; i++) {
            printf("Nama: %s, Ukuran: %ld byte\n", files[i].name, files[i].size);
        }
        printf("\n");
    }
}

void exitProgram() {
    printf("\nTerima kasih telah menggunakan Sistem Manajemen File.\n");
    exit(0);
}

int main() {
    int choice;
    do {
        displayMenu();
        scanf("%d", &choice);
        getchar(); // Clear newline
        switch (choice) {
            case 1:
                addFile();
                break;
            case 2:
                createFileContent();
                break;
            case 3:
                readFile();
                break;
            case 4:
                searchFile();
                break;
            case 5:
                deleteFile();
                break;
            case 6:
                updateFile();
                break;
            case 7:
                displayAllFiles();
                break;
            case 8:
                exitProgram();
                break;
            default:
                printf("\nOpsi tidak valid.\n\n");
                break;
        }
    } while (choice != 8);

    return 0;
}
