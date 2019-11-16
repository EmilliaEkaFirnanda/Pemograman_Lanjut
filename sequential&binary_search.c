#include <stdio.h>
#include <stdlib.h>

//EMILLIA EKA FIRNANDA
//18081010026

int main() {
	
	int angka[8]={8,10,6,-2,11,7,1,100};
	int i,j,x,cari,awal,akhir,tengah,hasil;
	
	/////PENGURUTAN ANGKA/////
	for(i=0;i<8;i++){
		for(j=7;j>i;j--){
			if(angka[i]>angka[j]){
				x=angka[j];
				angka[j]=angka[i];
				angka[i]=x;
			}
		}
	}
	printf("\n Data setelah diurutkan : ");
	for(i=0;i<8;i++){
		printf("%d ",angka[i]);
	}
	
	printf("\n\n Cari Data : ");
	scanf("%d",&cari);
	
	/////SEQUENTIAL SEARCH/////
	for(i=0;i<=8;i++){
		if(cari==angka[i]){
			printf("\n Hasil dari SEQUENTIAL SEARCH");
			printf("\n Angka %d ditemukan \n",angka[i]);
			break;
		}
	}
	if(cari!=angka[i]){
		printf("\n Hasil dari SEQUENTIAL SEARCH");
		printf("\n Angka %d tidak ditemukan \n",cari);
	}
	
	/////BINARY SEARCH/////
	awal=0,akhir=8;
	
	while (awal<=akhir){   
		tengah = (awal+akhir)/2;
        if (angka[tengah] == cari){
            printf("\n Hasil dari BINARY SEARCH");
        	printf("\n Angka %d ditemukan di indeks ke-%d\n", cari ,tengah+1);
        	break;
        }else if (angka[tengah] < cari){
            awal = tengah + 1;
        }else{
            akhir = tengah - 1;
        }
    }
    
    if (awal>akhir){
    	printf("\n Hasil dari BINERY SEARCH");
        printf("\n Angka %d tidak ditemukan \n",cari);
	}

	return 0;
}
