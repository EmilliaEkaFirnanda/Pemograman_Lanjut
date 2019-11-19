#include <stdio.h>
#include <stdlib.h>

//EMILLIA EKA FIRNANDA
//18081010026

struct matkul{
	char nama_matkul[100][100];
};
typedef struct matkul mk;

struct mahasiswa{
	char nama[100];
	int npm;
	struct matkul mk;
};
typedef struct mahasiswa mhs;

int main() {
	int sks[10]={4,3,3,3,4};
	float nilai[10][10];
	mhs data[10];
	
	strcpy(data[0].nama,"Peter Parker");
	strcpy(data[1].nama,"Tony Stark");
	strcpy(data[2].nama,"Tom Holand");
	strcpy(data[3].nama,"Robert Downey");
	strcpy(data[4].nama,"Zayn Malik");
	
	data[0].npm=18081026;
	data[1].npm=18081027;
	data[2].npm=18081028;
	data[3].npm=18081029;
	data[4].npm=18081030;
	
	strcpy(data[0].mk.nama_matkul,"Pemograman");
	strcpy(data[1].mk.nama_matkul,"Sistem Operasi");
	strcpy(data[2].mk.nama_matkul,"Metode Numerik");
	strcpy(data[3].mk.nama_matkul,"Statistika");
	strcpy(data[4].mk.nama_matkul,"Pancasila");
	
	nilai[0][0]=4;
	nilai[0][1]=4;
	nilai[0][2]=3.75;
	nilai[0][3]=4;
	nilai[0][4]=2.75;
	
	nilai[1][0]=4;
	nilai[1][1]=3;
	nilai[1][2]=3.5;
	nilai[1][3]=4;
	nilai[1][4]=3.75;
	
	nilai[2][0]=4;
	nilai[2][1]=3.75;
	nilai[2][2]=3;
	nilai[2][3]=3.5;
	nilai[2][4]=2.75;
	
	nilai[3][0]=3;
	nilai[3][1]=4;
	nilai[3][2]=2.5;
	nilai[3][3]=4;
	nilai[3][4]=1.75;
	
	nilai[4][0]=3;
	nilai[4][1]=4;
	nilai[4][2]=3.5;
	nilai[4][3]=3.75;
	nilai[4][4]=2;
	
	float jumlah,a;
	int i,j,k;
	float ipk[10];
	int totalsks;
	
	for(j=0;j<=4;j++){
		jumlah=0;
		a=0;
		totalsks=0;
		printf("\n============================================\n");
		printf("Nama	: %s\n",data[j].nama);
		printf("NPM	: %d\n",data[j].npm);
		printf("============================================\n");
		
		for(k=0;k<=4;k++){
			printf("%s	",data[k].mk.nama_matkul);
			printf(" %.2f (%d sks) ",nilai[j][k],sks[k]);
			if(nilai[j][k]==4){
				printf("A	\n");
			}else if(nilai[j][k]>=3.75){
				printf("A-	\n");
			}else if(nilai[j][k]>=3.5){
				printf("B+	\n");
			}else if(nilai[j][k]>=3){
				printf("B	\n");
			}else if(nilai[j][k]>=2.75){
				printf("B-	\n");
			}else if(nilai[j][k]>=2.5){
				printf("C+	\n");
			}else if(nilai[j][k]>=2){
				printf("C	\n");
			}else if(nilai[j][k]>=1.75){
				printf("C-	\n");
			}else if(nilai[j][k]>=1.5){
				printf("D+	\n");
			}else if(nilai[j][k]>=1){
				printf("D	\n");
			}else if(nilai[j][k]>=0.5){
				printf("D-	\n");
			}else{
				printf("E	\n");
			}
		}

		for(i=0;i<=4;i++){
			totalsks += sks[i];
			jumlah += (nilai[j][i]*sks[i]);
			a=jumlah/totalsks;
			ipk[j]=a ;	
		}
		printf("============================================\n");
		printf("IPK = %.3f\n",ipk[j]);
		printf("============================================\n\n");
	}

	
	return 0;
}
