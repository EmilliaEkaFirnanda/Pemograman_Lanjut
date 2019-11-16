#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//EMILLIA EKA FIRNANDA
//18081010026

int main() {
	
	int i,cari;
	bool found;
	int npm[] = {1808101,1808102,1808103,1808104,1808105};
	float ipk[] = {3.98,3.82,3.96,3.78,3.99};
	
	printf("=====DATA MAHASISWA=====\n\n");
	for (i=0;i<5;i++){
		printf("NPM mahasiswa : %d\n",npm[i]);
		printf("IPK mahasiswa : %.2f\n\n",ipk[i]);
	}
	
	printf("=====DATA MAHASISWA AKHIR=====\n\n");
	for(i=4;i>=0;i--){
		printf("Mahasiswa ke-%d	: %d\n", i+1,npm[i]);
		printf("IPK ke-%d	: %.2f\n\n", i+1,ipk[i]);
	}
	
	printf("======CARI DATA MAHASISWA======\n\n");
	printf("Masukkan NPM yg dicari : ");
	scanf("%d",&cari);

	i=0;
	found=false;
	while(i<5 && !found){
		if(cari==npm[i]){
			found=true;
		}
		else {
			i++;
		}
	}
	if (found==true){
		printf("NPM : %d\n", npm[i]);
		printf("IPK : %.2f\n\n", ipk[i]);
	}
	else{
		printf("\nDATA MAHASISWA TIDAK DITEMUKAN\n");
	}
	
	
	return 0;
}


