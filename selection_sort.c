#include <stdio.h>
#include <stdlib.h>

//EMILLIA EKA FIRNANDA
//18081010026

int main() {
	
	int data[8] = {8,10,6,-2,11,7,1,100};
	int i,j,x,minimal;
	
	printf("\n Data sebelum diurutkan : ");
	for(i=0;i<8;i++){
		printf("%d ",data[i]);
	}
	
	/////ASCENDING SORTING/////
	for(i=0;i<8-1;i++){
		minimal = i;
		for(j=7;j>i;j--){
			if(data[j]<data[minimal]){
				minimal = j;	
			}
		}
		x=data[minimal];
		data[minimal]=data[i];
		data[i]=x;
	}
	
	printf("\n\n ASCENDING SORTING SELECTION SORT");
	printf("\n Data setelah diurutkan : ");
	for(i=0;i<8;i++){
		printf("%d ",data[i]);
	}
	
	/////DESCENDING SORTING/////
	for(i=0;i<8-1;i++){
		minimal = i;
		for(j=7;j>i;j--){
			if(data[j]>data[minimal]){
				minimal = j;	
			}
		}
		x=data[minimal];
		data[minimal]=data[i];
		data[i]=x;
	}
	
	printf("\n\n DESCENDING SORTING SELECTION SORT");
	printf("\n Data setelah diurutkan : ");
	for(i=0;i<8;i++){
		printf("%d ",data[i]);
	}
	
	printf("\n");
	
	return 0;
}
