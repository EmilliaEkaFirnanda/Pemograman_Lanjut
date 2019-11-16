#include <stdio.h>
#include <stdlib.h>

//EMILLIA EKA FIRNANDA
//18081010026

int BinarySearch(int angka[], int awal, int akhir, int cari){
    int tengah = (awal+akhir)/2;
    
	if(awal>akhir){
      return -1;
    }else if(angka[tengah] == cari){
      return tengah+1;
    }else if(angka[tengah] < cari){
      return BinarySearch(angka, tengah+1, akhir, cari);
    }else{
      return BinarySearch(angka, awal, tengah-1, cari);
    }
    
}

int main(){
    int angka[8]={8,10,6,-2,11,7,1,100};
    int i, j, x, hasil, cari;

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
    
    /////BINARY SEARCH REKURSIF/////
	hasil = BinarySearch(angka,0,8,cari);
    
    if(hasil == -1){
        printf("\n Hasil dari BINERY SEARCH REKURSIF");
        printf("\n Angka %d tidak ditemukan \n",cari);
    } else {
        printf("\n Hasil dari BINARY SEARCH REKURSIF");
        printf("\n Angka %d ditemukan di indeks ke-%d\n", cari ,hasil);
    }
    return 0;
}
