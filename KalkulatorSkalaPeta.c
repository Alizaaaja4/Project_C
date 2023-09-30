#include <stdio.h>
#include <stdlib.h>

int main() {
    int jarak_peta, jarak_sebenarnya, nilai_skala;
    int hitung_jarak_sebenarnya, hitung_jarak_peta;
    int menu;

    printf("\t= = = KALKULATOR = = =\n");
    printf("= = SKALA, JARAK PETA & JARAK SEBERNARNYA = =\n");
    printf("Menu: \n");

    printf("1. Skala\n");
    printf("2. Jarak pada peta\n");
    printf("3. Jarak sebenarnya\n");
    printf("Masukkan Pilihan: "); 
    scanf("%d", &menu);

    switch (menu) {
    case 1:
        printf("\n- - - Menghitung Skala - - -\n");
        printf("Masukkan jarak pada peta (cm): "); scanf("%d", &jarak_peta);
        printf("Masukkan jarak sebenarnya (km): "); scanf("%d", &jarak_sebenarnya);

        hitung_jarak_sebenarnya = (jarak_sebenarnya * 100000)/ jarak_peta;
        // nilai_skala = hitung_jarak_sebenarnya / jarak_peta;

        printf("\nOUTPUT\n");
        printf("Skala: 1:%d\n", hitung_jarak_sebenarnya);

        break;
    
    case 2:
        printf("\n- - - Menghitung Jarak Peta - - -\n");
        printf("Masukan Nilai Akhir Skala Peta (1: xxxxxx): "); scanf("%d", &nilai_skala);
        printf("Masukan Jarak sebenarnya (km): "); scanf("%d", &jarak_sebenarnya);

        hitung_jarak_sebenarnya = jarak_sebenarnya * 100000;
        hitung_jarak_peta = hitung_jarak_sebenarnya / nilai_skala;

        printf("\nOUTPUT\n");
        printf("Jarak pada Peta (cm): %d\n", hitung_jarak_peta);

        break;
    
    case 3:
        printf("\n- - - Menghitung Jarak Sebenarnya - - -\n");
        printf("Masukan Nilai Akhir Skala Peta (1:xxxxx): "); scanf("%d", &nilai_skala);
        printf("Masukan Jarak pada Peta (cm): "); scanf("%d", &jarak_peta);

        hitung_jarak_sebenarnya = (nilai_skala * jarak_peta) / 100000;

        printf("Jarak Sebenarnya (km): %d\n", hitung_jarak_sebenarnya);

        break;
        
    default:
        printf("Pilihan tidak valid.\n");
        break;
    }

    return 0;
}
