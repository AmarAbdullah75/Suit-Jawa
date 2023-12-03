#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main() {
    char jawaban[10], jawabanKomputer[10], pilihan;
    float komputer;
    do {
        printf("Masukkan Gajah, Orang atau Semut : ");
        scanf("%s", jawaban);
        komputer = rand() % 100;
        if (komputer <= 30) {
            strcpy(jawabanKomputer, "Gajah");
        } else if (komputer <= 60) {
            strcpy(jawabanKomputer, "Semut");
        } else if (komputer > 60) {
            strcpy(jawabanKomputer, "Orang");
        }
        if (strcmp(jawaban, "Gajah") == 0 || strcmp(jawaban, "gajah") == 0) {
            if (strcmp(jawabanKomputer, "Semut") == 0) {
                printf("Anda kalah jawaban anda adalah %s dan komputer adalah %s", jawaban, jawabanKomputer);
            } else if (strcmp(jawabanKomputer, "Orang") == 0) {
                printf("Anda menang jawaban anda adalah %s dan komputer adalah %s", jawaban, jawabanKomputer);
            } else {
                printf("Anda seri jawaban anda adalah %s dan komputer adalah %s", jawaban, jawabanKomputer);
            }
        } else if (strcmp(jawaban, "Semut") == 0 || strcmp(jawaban, "semut") == 0) {
            if (strcmp(jawabanKomputer, "Orang") == 0) {
                printf("Anda kalah jawaban anda adalah %s dan komputer adalah %s", jawaban, jawabanKomputer);
            } else if (strcmp(jawabanKomputer, "Gajah") == 0) {
                printf("Anda menang jawaban anda adalah %s dan komputer adalah %s", jawaban, jawabanKomputer);
            } else {
                printf("Anda seri jawaban anda adalah %s dan komputer adalah %s", jawaban, jawabanKomputer);
            }
        } else if (strcmp(jawaban, "Orang") == 0 || strcmp(jawaban, "orang") == 0) {
            if (strcmp(jawabanKomputer, "Gajah") == 0) {
                printf("Anda kalah jawaban anda adalah %s dan komputer adalah %s", jawaban, jawabanKomputer);
            } else if (strcmp(jawabanKomputer, "Semut") == 0) {
                printf("Anda menang jawaban anda adalah %s dan komputer adalah %s", jawaban, jawabanKomputer);
            } else {
                printf("Anda seri jawaban anda adalah %s dan komputer adalah %s", jawaban, jawabanKomputer);
            }
        } else {
            printf("Inputan Anda Tidak Valid");
        }
        printf("\nApa anda ingin lanjut? (Y/N)");
        scanf("%s", &pilihan);
    } while (pilihan == 'Y' || pilihan == 'y');
}