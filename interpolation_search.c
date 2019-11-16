#include <stdio.h>
#include <stdlib.h>

//EMILLIA EKA FIRNANDA
//18081010026

int main (){
	int data[8] = {8,10,6,-2,11,7,1,100};
	int low, high, posisi, kunci, hasil;
	int i,j,x;
	
	/////MENAMPILKAN DATA/////
	printf("\n Data sebelum diurutkan : ");
	for(i=0;i<8;i++){
		printf("%d ",data[i]);
	}
	
	/////PENGURUTAN DATA/////
	for(i=0;i<8;i++){
		for(j=7;j>i;j--){
			if(data[i]>data[j]){
				x=data[j];
				data[j]=data[i];
				data[i]=x;
			}
		}
	}
	printf("\n Data setelah diurutkan : ");
	for(i=0;i<8;i++){
		printf("%d ",data[i]);
	}
	
	printf("\n\n Masukkan data yang dicari : ");
	scanf("%d", &kunci);
	
	/////INTERPOLATION SEARCH/////
	hasil=0; high=7; low=0;
	while (kunci>=data[low]&&kunci<=data[high]){
		posisi=((kunci-data[low])/(data[high]-data[low]))*(high-low)+low;
		if(data[posisi]==kunci){
			hasil=1;
			break;
		}else if(data[posisi]>kunci){
			high = posisi-1;
		}else if(data[posisi]<kunci){
			low = posisi+1;
		}
	}
	
	if(hasil==1){
		printf("\n Data %d ditemukan dalam indeks ke-%d \n",kunci,posisi+1);
	}else{
		printf("\n Data %d tidak ditemukan \n",kunci);
	}
	
	return 0;
}
