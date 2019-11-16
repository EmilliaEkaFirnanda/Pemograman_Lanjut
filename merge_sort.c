#include <stdio.h>
#include <stdlib.h>

//EMILLIA EKA FIRNANDA
//18081010026

void ascending(int data[], int left, int mid, int right) { 
    int i, j, k; 
    int n1 = mid - left + 1; 
    int n2 =  right - mid; 
  
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) {
    	L[i] = data[left + i]; 
	}
    for (j = 0; j < n2; j++) {
    	R[j] = data[mid + 1+ j];
	}  

    i = 0; 
    j = 0;  
    k = left; 
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            data[k] = L[i]; 
            i++; 
        }else{ 
            data[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 

    while (i < n1) { 
        data[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    while (j < n2) { 
        data[k] = R[j]; 
        j++; 
        k++; 
    } 
} 

void mergesortass(int data[], int left, int right) { 
    if (left < right) { 

        int mid = left+(right-left)/2; 
  
        mergesortass(data, left, mid); 
        mergesortass(data, mid+1, right); 
  
        ascending(data, left, mid, right); 
    } 
} 

void descending(int data[], int left, int mid, int right) { 
    int i, j, k; 
    int n1 = mid - left + 1; 
    int n2 =  right - mid; 
  
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) {
    	L[i] = data[left + i]; 
	}
    for (j = 0; j < n2; j++) {
    	R[j] = data[mid + 1+ j]; 
	}

    i = 0; 
    j = 0;  
    k = left; 
    while (i < n1 && j < n2) { 
        if (L[i] >= R[j]) { 
            data[k] = L[i]; 
            i++; 
        }else{ 
            data[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 

    while (i < n1) { 
        data[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    while (j < n2) { 
        data[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  

void mergesortdes(int data[], int left, int right) { 
    if (left < right) { 

        int mid = left+(right-left)/2; 
  
        mergesortdes(data, left, mid); 
        mergesortdes(data, mid+1, right); 
  
        descending(data, left, mid, right); 
    } 
} 

int main() {
	int data[8] = {8,10,6,-2,11,7,1,100};
	int i;
	
    printf("\n Data sebelum diurutkan : ");
	for(i=0;i<8;i++){
		printf("%d ",data[i]);
	}
  
    mergesortass(data,0,7); 
  
	printf("\n\n ASCENDING SORTING MERGE SORT");
	printf("\n Data setelah diurutkan : ");
	for(i=0;i<8;i++){
		printf("%d ",data[i]);
	}
	
	mergesortdes(data,0,7);
	
	printf("\n\n DESCENDING SORTING MERGE SORT");
	printf("\n Data setelah diurutkan : ");
	for(i=0;i<8;i++){
		printf("%d ",data[i]);
	}
	
	printf("\n");
	
	return 0;
}
