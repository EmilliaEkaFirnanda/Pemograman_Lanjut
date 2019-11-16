#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//EMILLIA EKA FIRNANDA
//18081010026

struct alamat{
	char jalan[100];
	char ibukota[100];
	char provinsi[100];
};

struct tanggallahir{
	int tanggal;
	int bulan;
	int tahun;
};

struct rekening{
	char nama[100];
	int no_rekening;
	char bank[100];
	double saldo;
	struct alamat almt;
	struct tanggallahir tl;
};
typedef struct rekening rek;

int main() {
	int i,menu,n=5,nasabah=4;
	bool found;
	rek data[100];
	
	//NASABAH 1
	strcpy(data[0].nama,"Nindy");
	data[0].no_rekening = 254335;
	strcpy(data[0].bank,"BRI");
	data[0].saldo = 500000;
	strcpy(data[0].almt.jalan,"Randu Agung");
	strcpy(data[0].almt.ibukota,"Surabaya");
	strcpy(data[0].almt.provinsi,"Jawa Timur");
	data[0].tl.tanggal = 16;
	data[0].tl.bulan = 10;
	data[0].tl.tahun = 2000;
	
	//NASABAH 2
	strcpy(data[1].nama,"Nanda");
	data[1].no_rekening = 2893435;
	strcpy(data[1].bank,"BCA");
	data[1].saldo = 700000;
	strcpy(data[1].almt.jalan,"Kedung Mangu");
	strcpy(data[1].almt.ibukota,"Sidoarjo");
	strcpy(data[1].almt.provinsi,"Jawa Timur");
	data[1].tl.tanggal = 15;
	data[1].tl.bulan = 01;
	data[1].tl.tahun = 2005;
	
	//NASABAH 3
	strcpy(data[2].nama,"Ilyas");
	data[2].no_rekening = 2846635;
	strcpy(data[2].bank,"BNI");
	data[2].saldo = 900000;
	strcpy(data[2].almt.jalan,"Rungkut");
	strcpy(data[2].almt.ibukota,"Nganjuk");
	strcpy(data[2].almt.provinsi,"Jawa Timur");
	data[2].tl.tanggal = 15;
	data[2].tl.bulan = 06;
	data[2].tl.tahun = 1985;
	
	//NASABAH 4
	strcpy(data[3].nama,"Peter Parker");
	data[3].no_rekening = 123456;
	strcpy(data[3].bank,"BTN");
	data[3].saldo = 1000000;
	strcpy(data[3].almt.jalan,"Platuk");
	strcpy(data[3].almt.ibukota,"Gresik");
	strcpy(data[3].almt.provinsi,"Jawa Timur");
	data[3].tl.tanggal = 12;
	data[3].tl.bulan = 12;
	data[3].tl.tahun = 1992;
	
	//NASABAH 5
	strcpy(data[4].nama,"Tony Stark");
	data[4].no_rekening = 987654;
	strcpy(data[4].bank,"MANDIRI");
	data[4].saldo = 2500000;
	strcpy(data[4].almt.jalan,"Perak");
	strcpy(data[4].almt.ibukota,"Surabaya");
	strcpy(data[4].almt.provinsi,"Jawa Timur");
	data[4].tl.tanggal = 02;
	data[4].tl.bulan = 02;
	data[4].tl.tahun = 1974;
	
	void tampil(int i){
		printf("Nama		: %s\n", data[i].nama);
		printf("No.Rek		: %d\n", data[i].no_rekening);
		printf("Bank		: %s\n",data[i].bank);
		printf("Saldo		: %.0lf\n",data[i].saldo);
		printf("Alamat		: %s, %s, %s\n",data[i].almt.jalan,data[i].almt.ibukota,data[i].almt.provinsi);
		printf("Tanggal Lahir	: %d-%d-%d\n\n",data[i].tl.tanggal,data[i].tl.bulan,data[i].tl.tahun);
	}
	
	void pilihan(){
		printf("\n======PILIH MENU======\n\n");
		printf("  1. Menampilkan Data Nasabah\n");
		printf("  2. Pencarian Data (berdasarkan No. Rekening)\n");
		printf("  3. Akumulasi Saldo Total Nasabah\n");
		printf("  4. Pencarian Data (berdasarkan Kota)\n");
		printf("  5. Menampilkan Nasabah dengan Umur Tertentu\n");
		printf("  6. Nasabah dengan Saldo Terbanyak dan Tersedikit\n");
		printf("  7. Input Data Nasabah\n");
		printf("  0. Keluar Program\n\n");
		printf("Masukkan pilihan anda : ",menu);
		scanf("%d",&menu);
	}

do{
	pilihan();
	if(menu==1){
		//1. MENAMPILKAN DATA
		printf("\n=======DATA NASABAH=======\n\n");
		for(i=0;i<=nasabah;i++){	
			tampil(i);
		}
	
	}else if(menu==2){
		//2. PENCARIAN DATA BERADASARAKAN NO.REK
		int cari_rek;
		printf("\n======CARI DATA NASABAH======\n\n");
		printf("Masukkan No. Rekening yang dicari : ");
		scanf("%d", &cari_rek);
		printf("\n");

		i=0;
		found=false;
		while(i<=nasabah && !found){
			if(cari_rek==data[i].no_rekening){
				found=true;
			}else {
				i++;
			}
		}
		if (found==true){	
			tampil(i);
		} else{
			printf("DATA NASABAH TIDAK DITEMUKAN\n");
		}
		
	} else if(menu==3){
		//3. AKUMULASI SALDO TOTAL NASABAH
		double total=0;
		for(i=0;i<=nasabah;i++){		
			total+=data[i].saldo;
		}
		printf("\n===========================================");
		printf("\n Akumulasi Saldo Total Nasabah = %.0lf",total);
		printf("\n===========================================\n");
		
	} else if(menu==4){
		//4. CARI DATA NASABAH BERDASARKAN KOTA
		char cari_kota[100];
		printf("\n========CARI DATA NASABAH=======\n\n");
		printf("Masukkan Kota yang dicari : ");
		fflush(stdin);
		gets(cari_kota);
		printf("\n");
	
		i=0;
		found=false;
		while(i<=nasabah && nasabah!=NULL){
			if(!strcmp(cari_kota, data[i].almt.ibukota)){
				tampil(i);
				found=true;
				i++;
			} else {
				i++;
			}
		}
			if (found!=true){
			printf("\nDATA NASABAH TIDAK DITEMUKAN\n");
			}
	
	}else if(menu==5){
		//5. TAMPILKAN NASABAH DENGAN UMUR TERTENTU
		int pil_umur,umur;
		printf("\n======Range Umur======\n");
		printf("  1. 13-20 tahun\n");
		printf("  2. 21-30 tahun\n");
		printf("  3. 31-40 tahun\n");
		printf("  4. >= 41 tahun\n");
		printf("\nMasukkan pilihan : ",pil_umur);
		scanf("%d",&pil_umur);
		printf("\n");
		
		i=0;
		found=false;
		while(i<=nasabah && nasabah!=NULL){
			umur=2019-data[i].tl.tahun;

			if(pil_umur == 1 && umur>=13 && umur<=20){
				tampil(i);
				i++;
			} else if(pil_umur == 2 && umur>=21 && umur<=30){
				tampil(i);
				i++;
			}
			else if(pil_umur == 3 && umur>=31 && umur<=40){
				tampil(i);
				i++;
			} else if(pil_umur == 4 && umur>=41){
				tampil(i);
				i++;
			} else {
				i++;
			}
			
		}

	}else if(menu==6){
		//6. MENAMPILKAN NASABAH DENGAN SALDO TERBANYAK DAN TERSEDIKIT
		int max, min;
		max = data[0].saldo;

		for (i=0; i<=nasabah ;i++){
		
			 if (max < data[i].saldo)  
            {
                max = data[i].saldo;
            }
            else  
            {
            	min = data[i].saldo;
            }
			
    	}
    	printf("===================================\n");
    	printf(" Saldo Terbanyak = %d\n",max);
    	printf("===================================\n");
    	printf(" Saldo Terkecil = %d\n",min);
    	printf("===================================\n");
		
	}else if(menu==7){
		//7. INPUT DATA NASABAH
		printf("\n========INPUT DATA NASABAH========\n\n");
		printf("Masukkan Nama		: ",n);
		fflush(stdin);
		gets(&data[n].nama);
		printf("Masukkan Nama Bank	: ",n);
		fflush(stdin);
		gets(&data[n].bank);
		printf("Masukkan No.Rek		: ",n);
		fflush(stdin);
		scanf("%d",&data[n].no_rekening);
		printf("Masukkan Tanggal Lahir	: ",n);
		fflush(stdin);
		scanf("%d",&data[n].tl.tanggal);
		printf("Masukkan Bulan Lahir	: ",n);
		fflush(stdin);
		scanf("%d",&data[n].tl.bulan);
		printf("Masukkan Tahun Lahir	: ",n);
		fflush(stdin);
		scanf("%d",&data[n].tl.tahun);
		printf("Masukkan Alamat		: ",n);
		fflush(stdin);
		gets(&data[n].almt.jalan);
		printf("Masukkan Kota		: ",n);
		fflush(stdin);
		gets(&data[n].almt.ibukota);
		printf("Masukkan Provinsi	: ",n);
		fflush(stdin);
		gets(data[n].almt.provinsi);
		printf("Masukkan Saldo		: ",n);
		fflush(stdin);
		scanf("%lf",&data[n].saldo);
		nasabah = n;
		n++;
	}
}while(menu != 0);
	//0. EXIT PROGRAM
	printf("\n=======TERIMA KASIH :)=======\n\n");
	
	return 0;
}
