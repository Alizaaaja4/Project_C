#include<stdio.h>
#define tarif_motor 2000
#define tarif_mobil 3000
int main(){
    int jam_masuk, jam_keluar, kendaraan, tagihan=0, nomor, mobil, motor, jenis, total_jam, tagihan_mobil, tagihan_motor, menu;
    
    menu:
    printf("=== TAGIHAN PARKIR ===\n");
    printf("\n1. Kendaraan Mobil");
    printf("\n2. Kendaraan Motor");
    printf("\n11. Struck Pembayaran Paket");
    printf("\n99. Keluar Menu");
    printf("\nMasukan Pilihan: "); scanf("%d", &menu);

    switch (menu)
    {
    case 1: printf ("==== TAGIHAN KENDARAAN MOBIL ===\n");
            printf("Masukan nomor kendaraan: "); scanf("%d", &nomor);
            printf("\nJam Masuk: "); scanf("%d", &jam_masuk);
            printf("\nJam keluar: "); scanf("%d", &jam_keluar);

            total_jam= jam_keluar - jam_masuk;
            tagihan_mobil= total_jam * tarif_mobil;

            printf("\n TAGIHAN KENDARAAN MOBIL");
            printf("Nomor kendaraan: %d\n", nomor);
            printf("Total tagihan: %d\n", tagihan_mobil);
        break;
    
    case 2: printf ("==== TAGIHAN KENDARAAN MOTOR ===\n");
            printf("Masukan nomor kendaraan: "); scanf("%d", &nomor);
            printf("\nJam Masuk: "); scanf("%d", &jam_masuk);
            printf("\nam keluar: "); scanf("%d", &jam_keluar);

            total_jam= jam_keluar - jam_masuk;
            tagihan_motor= total_jam * tarif_motor;

            printf("\n STRUK TAGIHAN KENDARAAN MOBIL");
            printf("Nomor kendaraan: %d\n", nomor);
            printf("Total tagihan: %d\n", tagihan_motor);
        break;
    
    default: printf ("Jenis kendaraan tidak terdeteksi !!");
        break;
    }
    return 0;
}   
