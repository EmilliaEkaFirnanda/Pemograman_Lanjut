#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//EMILLIA EKA FIRNANDA
//18081010026

struct mahasiswa
{
	int npm;
	float ipk;
};
typedef struct mahasiswa mhs ;

int main()
{
	int i,cari;
	bool found;
	mhs data[5];
	data[0].npm = 1808101;
	data[0].ipk = 3.98;

	data[1].npm = 1808102;
	data[1].ipk = 3.82;
	
	data[2].npm = 1808103;
	data[2].ipk = 3.96;
	
	data[3].npm = 1808104;
	data[3].ipk = 3.78;
	
	data[4].npm = 1808105;
	data[4].ipk = 3.99;
	
	printf("======DATA MAHASISWA======\n\n");
	for(i=0 ; i<5 ; i++){
		printf("NPM : %d\n", data[i].npm);
		printf("IPK : %.2f\n\n", data[i].ipk);
	}
	
	printf("=====DATA MAHASISWA AKHIR=====\n\n");
	for(i=4 ; i>=0; i--){
		printf("Mahasiswa ke-%d	: %d\n", i+1,data[i].npm);
		printf("IPK ke-%d	: %.2f\n\n", i+1,data[i].ipk);
	}
	
	printf("=====CARI DATA MAHASISWA=====\n\n");
	printf("Masukkan NPM yang dicari : ");
	scanf("%d", &cari);

	i=0;
	found=false;
	while(i<5 && !found){
		if(cari==data[i].npm){
			found=true;
		}
		else {
			i++;
		}
	}
	if (found==true){
		printf("NPM : %d\n",data[i].npm);
		printf("IPK : %.2f\n\n",data[i].ipk);
	}
	else{
		printf("\nDATA MAHASISWA TIDAK DITEMUKAN\n");
	}
	
	return 0;
}

