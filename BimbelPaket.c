#include<stdio.h>
#include<stdlib.h>
#define pendaftaranA 300000
#define pendaftaranB 200000
#define pendaftaranC 150000
#define kursusA 300000
#define kursusB 175000
#define kursusC 160000
#define admin 100000


int main(){
    int biaya=0, uang, kembalian, menu;
    int paket_A, paket_B, paket_C;

menu: 
    printf("===Selamat Datang Pendaftaran Bimbel===\n");

    printf("Menu Paket: ");
    printf("\nSilahkan pilih menu paket yang tersedia ^_^");

    printf("\n1. Pakat A 'MIPA' ");
    printf("\n2. Paket B 'Bahasa Inggris");
    printf("\n3. Paket C 'Bahasa Mandarin' ");
    printf("\n11. Struck Pembayaran Paket");
    printf("\n99. Keluar Menu");
    printf("\nMasukan Pilihan: "); scanf("%d", &menu);

    switch (menu)
    {
    case 1: printf("Paket A ==> MIPA\n");
            printf("Uang pendaftaraan, Rp 300000\n");
            printf("Biaya kursus (bulan), Rp 220000\n ");
            printf("--------------------------------\n");
            printf("Metode Pembayaran: \n");
            printf("1. Tunai\n");
            printf("2. Angsuran\n");
            printf("Pilih Jenis Pembauaran: "); scanf("%d", &paket_A);

            if (paket_A==1){
                biaya= (biaya + pendaftaranA)*0.15 + kursusA;
                printf("Total Pembayaran: %d\n ", biaya); 
            }
           else if (paket_A==2){
                printf("Total Pembayaran: %d\n", biaya); 
                biaya= biaya + pendaftaranA + kursusA + admin;
           }
        goto menu;
        break;
    
    case 2: printf("Paket B ==> Bahasa Inggris\n");
            printf("Uang pendaftaraan, Rp 200000\n");
            printf("Biaya kursus (bulan), Rp 175000\n ");
            printf("--------------------------------\n");
            printf("Metode Pembayaran: \n");
            printf("1. Tunai\n");
            printf("2. Angsuran\n");
            printf("Pilih Jenis Pembauaran: "); scanf("%d", &paket_B);

            if (paket_B==1){
                printf("Total Pembayaran: %d\n ", biaya);
                biaya= (biaya + pendaftaranB)*0.15 + kursusB;
            }
           else if (paket_B==2){
                printf("Total Pembayaran: %d\n ", biaya); 
                biaya= biaya + pendaftaranB + kursusB + admin;
           }
        goto menu;
        break;

    case 3: printf("Paket C ==> Bahasa Mandarin\n");
            printf("Uang pendaftaraan, Rp 150000\n");
            printf("Biaya kursus (bulan), Rp 160000\n ");
             printf("--------------------------------\n");
            printf("Metode Pembayaran: \n");
            printf("1. Tunai\n");
            printf("2. Angsuran\n");
            printf("Pilih Jenis Pembauaran: "); scanf("%d", &paket_C);

            if (paket_C==1){
                printf("Total Pembayaran: %d\n ", biaya); 
                biaya= (biaya + pendaftaranC)*0.15 + kursusC;
            }
           else if (paket_A==2){
                printf("Total Pembayaran: %d\n ", biaya); 
                biaya= biaya + pendaftaranA + kursusC + admin;
           }
        goto menu;
        break;
    
    case 11: printf("Total pembayaran: %d\n", biaya);
            printf("Masukan Uang: \n"); scanf("%d", &uang);
            kembalian= uang - biaya;
            printf("Kembaliannya: %d\n", kembalian);
    
    case 99: exit (0);
    default: printf("Plihan paket tidak tersedia\n");
        break;
    }
    return 0;
}
