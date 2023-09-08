#include <stdio.h>
#include <stdlib.h>
int main (){
    int tipe, single, deluxe, president_suite, harga, total=0, menu, jmlhsluruh, kembalian, hari;
menu:
    printf("===SELAMAT DATANG DI HOTEL SANTUY===\n");
    printf("Silahkan Pilih Tipe Kamar ^_^\n");
    printf("\n1. Tipe Kamar Single");
    printf("\n2. Tipe Kamar Deluxe");
    printf("\n3. Tipe Kamar President Suite");
     printf("\n11. Struck Pembayaran");
    printf("\n99. Keluar\n");
    printf("\n Masukan Menu: "); scanf("%d", &menu);

    switch (menu)
    {
    case 1: printf("Tipe Kamar Single Rp. 200.000\n");
            printf("Berapa hari checking: "); scanf("%d", &hari);
            single = 200000;
            total= total+(hari*single);
            goto menu;
            break;
    
     case 2: printf("Tipe Kamar Deluxe Rp. 500.00\n");
            printf("Berapa hari checking: "); scanf("%d", &hari);
            deluxe = 500000;
            total= total+(hari*deluxe);
            goto menu;
            break;

     case 3: printf("Tipe Kamar President Suite Rp. 750.000\n");
            printf("Berapa hari checking: "); scanf("%d", &hari);
            president_suite = 750000;
            total= total+(hari*president_suite);
            goto menu;
            break;

	case 11:printf("Total Pembayaran: %d", total); break;		
    
    default: printf ("Maaf terdapat kesalahan input, silahkan coba kembali \n");
        break;
    }

    return 0;
}
