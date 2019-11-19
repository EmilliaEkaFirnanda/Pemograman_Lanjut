#include <stdio.h>
#include <stdlib.h>

//EMILLIA EKA FIRNANDA
//18081010026

int main() {
	int data[8] = {8,10,6,-2,11,7,1,100};
	int i,j,x;
	
	printf("\n Data sebelum diurutkan : ");
	for(i=0;i<8;i++){
		printf("%d ",data[i]);
	}
	
	/////ASCENDING SORTING/////
	for(i=0;i<8;i++){
		for(j=7;j>i;j--){
			if(data[j-1]>data[j]){
				x=data[j-1];
				data[j-1]=data[j];
				data[j]=x;
			}
		}
	}
	printf("\n\n ASCENDING SORTING BUBBLE SORT");
	printf("\n Data setelah diurutkan : ");
	for(i=0;i<8;i++){
		printf("%d ",data[i]);
	}
	
	/////DESCENDING SORTING/////
	for(i=0;i<8;i++){
		for(j=7;j>i;j--){
			if(data[j-1]<data[j]){
				x=data[j-1];
				data[j-1]=data[j];
				data[j]=x;
			}
		}
	}
	printf("\n\n DESCENDING SORTING BUBBLE SORT");
	printf("\n Data setelah diurutkan : ");
	for(i=0;i<8;i++){
		printf("%d ",data[i]);
	}
	
	printf("\n");
	
	return 0;
}
