#include <stdio.h>
#include <stdlib.h>
#define phi 3.14

int main (){
    int menu;
    float Vkerucut, Vtabung, Vbola, r, t;

    printf("\t= = = Program Kalkulator Volume = = =\n\n");
    printf("= = = KERUCUT, TABUNG, & BOLA = = =\n");
    printf("1. Volume Kerucut\n");
    printf("2. Volume Tabung\n");
    printf("3. Volume Bola\n");
    printf("Masukan Pilihan Menu: "); scanf("%d", &menu);

    switch (menu){
        case 1: printf("\n+ + + Menghitung Volume Kerucut + + +\n");
                printf ("Masukan jari jari (cm): "); scanf("%f", &r);
                printf ("masukan tinggi (cm): "); scanf("%f", &t);

                Vkerucut = (r * r * t * phi)/ 3;

                printf("\nVolume Kerucut: %.2f cm", Vkerucut); 
            break;

        case 2: printf("\n+ + + Menghitung Volume Tabung + + +\n");
                printf ("Masukan jari jari (cm): "); scanf("%f", &r);
                printf ("masukan tinggi (cm): "); scanf("%f", &t);

                Vtabung = phi* r * r * t;

                printf("\nVolume Tabung: %.2f cm", Vtabung);
            break;
        
        case 3: printf("\n+ + + Menghitung Volume Bola + + +\n");
                printf ("Masukan jari jari (cm): "); scanf("%f", &r);

                Vbola = (4*(phi* r * r * r))/ 3;

                printf("\nVolume Bola: %.2f cm", Vbola);
            break;
        
        default: printf("Plihan menu tidak tersedia\n");
            break;
        }

    return 0;

}
