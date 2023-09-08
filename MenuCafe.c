#include<stdio.h>
#include<stdlib.h>

int main (){
	int kolatte, koamericano, koaceh, estecs,  estem,  estekp, kgr, browfs, browche, browca, cookscc, cooksa, cooksp, cooksam, rotbkkp, rotbktk, rotbkp;
	int thm, thmi, menu, uang, kembalian, total=0, jmlh, jmlhsluruh;
	int jenesteh, jenbrow, jencooks, jenrotbk;

menu:
	printf("==========----------==========\n");
	printf("--------SELAMAT DATANG--------\n");
	printf("       CAFE D'LAST ALIZA      \n");
	printf("Jln. Telekomunikai no.4, Bogor\n");
	printf("==============================\n");


	printf("Menu: ");
	printf("\nSilahkan pilih menu kami");
	
	printf("\n1. Kopi Latte ");
	printf("\n2. Kopi Americano ");
	printf("\n3. Kopi Aceh ");
	printf("\n4. Es Teh Manis ");
	printf("\n5. Kentang Goreng ");
	printf("\n6. Brownies ");
	printf("\n7. Cookies ");
	printf("\n8. Roti Bakar ");
	printf("\n99. Keluar");
	printf("\n11. Struck Pembayaran");
	printf("\n Masukan Menu : "); scanf("%d", &menu);

	switch(menu){
		case 1: printf("Kopi Latte Rp.30000\n");
				printf("Jumlah Pesanan : "); scanf("%d", &jmlh);
				kolatte= 30000;
				total= total+(jmlh*kolatte);
				goto menu;
				break;
		
		case 2: printf("Kopi Americano Rp.20000\n");
				printf("Jumlah Pesanan : "); scanf("%d", &jmlh);
				koamericano=20000;
				total= total+(jmlh*koamericano);
				goto menu;
				break;

		case 3: printf("Kopi Aceh Rp.15000\n");
				printf("Jumlah Pesanan : "); scanf("%d", &jmlh);
				koaceh=15000;
				total= total+(jmlh*koaceh);
				goto menu;
				break;
		
		case 4: printf("MENU ES TEH \n");
				printf("1. Es Teh Susu Cincau\n");
				printf("2. Es Teh Mangga\n");
				printf("3. Es Teh Kampul Pandan\n");
				printf("Pilih Jenis Es Teh (1/2/3): \n"); scanf("%d", &jenesteh);

				if(jenesteh==1){
					printf("Jumlah Pesanan : "); scanf("%d", &jmlh);
					estecs= 14000;
					total= total+(jmlh*estecs);
		
				} else if(jenesteh==2){
					printf("Jumlah Pesanan : "); scanf("%d", &jmlh);
					estem= 16000;
					total= total+(jmlh*estem);

				}else if(jenesteh==3){
					printf("Jumlah Pesanan : "); scanf("%d", &jmlh);
					estekp= 18000;
					total= total+(jmlh*estekp);
			
				} 
				goto menu;
				break;
		case 5: printf("Kentang Goreng Rp.15000\n");
				printf("Jumlah Pesanan : "); scanf("%d", &jmlh);
				kgr=15000;
				total= total+(jmlh*kgr);
				goto menu;
				break;
			
		case 6: printf("MENU BROWNIES\n");
				printf("1. Brownies Fudgy Source\n");
				printf("2. Brownies Chewy\n");
				printf("3. Brownies Cakey \n");
				printf("Pilih Jenis Brownies (1/2/3): \n"); scanf("%d", &jenbrow);

				if(jenbrow==1){
					printf("Jumlah Pesanan : "); scanf("%d", &jmlh);
					browfs= 25000;
					total= total+(jmlh*browfs);
		
				} else if(jenbrow==2){
					printf("Jumlah Pesanan : "); scanf("%d", &jmlh);
					browche= 29000;
					total= total+(jmlh*browche);

				}else if(jenbrow==3){
					printf("Jumlah Pesanan : "); scanf("%d", &jmlh);
					browca= 28000;
					total= total+(jmlh*browca);
			
				} 
				goto menu;
				break;
		
		case 7: printf("MENU COOKIES\n");
				printf("1. Choco Cips Cookies\n");
				printf("2. Alfajores Cookies\n");
				printf("3. Paprenjak Cookies\n");
				printf("4. Amaretti Cookies\n");
				printf("Pilih Jenis Brownies (1/2/3/4): \n"); scanf("%d", &jencooks);

				if(jencooks==1){
					printf("Jumlah Pesanan : "); scanf("%d", &jmlh);
					cookscc= 20000;
					total= total+(jmlh*cookscc);
		
				} else if(jencooks==2){
					printf("Jumlah Pesanan : "); scanf("%d", &jmlh);
					cooksa= 20000;
					total= total+(jmlh*cooksa);

				}else if(jencooks==3){
					printf("Jumlah Pesanan : "); scanf("%d", &jmlh);
					cooksp= 21000;
					total= total+(jmlh*cooksp);
			
				} else if(jencooks==4){
					printf("Jumlah Pesanan : "); scanf("%d", &jmlh);
					cooksam= 22000;
					total= total+(jmlh*cooksam);
				}
				goto menu;
				break;
		case 8: printf("MENU ROTI BAKAR\n");
				printf("1. Roti Bakar Keju Pisang\n");
				printf("2. Roti Bakar Telur Keju\n");
				printf("3. Roti Bakar Planta \n");
				printf("Pilih Jenis Brownies (1/2/3): \n"); scanf("%d", &jenrotbk);

				if(jenrotbk==1){
					printf("Jumlah Pesanan : "); scanf("%d", &jmlh);
					rotbkkp= 15000;
					total= total+(jmlh*rotbkkp);
		
				} else if(jenrotbk==2){
					printf("Jumlah Pesanan : "); scanf("%d", &jmlh);
					rotbktk= 15000;
					total= total+(jmlh*rotbkp);

				}else if(jenbrow==3){
					printf("Jumlah Pesanan : "); scanf("%d", &jmlh);
					rotbkp= 15000;
					total= total+(jmlh*rotbkp);
			
				} 
				goto menu;
				break;
		
		case 11:printf("Total Pembayaran: %d", total);
				if(total>50000){
				jmlhsluruh= total*0.9;
				printf("\n Harga Setelah Diskon: %d\n", jmlhsluruh);
				printf("Uang: "); scanf("%d", &uang);
				kembalian= uang-jmlhsluruh;
				printf("\nKembaliannya : %d\n", kembalian);

				} else {
					printf("\nUang: \n"); scanf("%d", &uang);
					kembalian = uang-total;
					printf("\nKembaliannya : %d\n", kembalian);
				}
				break;
		
		case 99: exit (0);
		default: printf("Pillihan tidak tersedia\n");}
		
		return 0;}
