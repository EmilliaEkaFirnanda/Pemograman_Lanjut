#include <stdio.h>
#include <stdlib.h>

//EMILLIA EKA FIRNANDA
//18081010026

int pangkat (int x, int y){
	if (y==0){
		return 1;
	}
	else {
		return x*pangkat(x,y-1);
	}
}
int ubah_positif(int y){
	if(y<0){
		return(y*-1); 
	}else{
		return(y); 
	}
}
	
int main(){
	system("color B0");
	int x,y;
	float hasil,negatif;

	printf("\n_____PERHITUNGAN BILANGAN PANGKAT_____\n\n");
	printf("Masukkan bilangan yang akan dipangkatkan : ");
	scanf("%d", &x);
	printf("Masukkan pangkat bilangan 		 : ");
	scanf("%d",&y);
    
	if(y>=0){ 
    	printf ("\nHasil bilangan %d pangkat %d adalah %d\n", x, y, pangkat(x,y));  
	} else if(y<0){ 
		hasil=pangkat(x,ubah_positif(y)); 
    	printf ("\nHasil bilangan %d pangkat %d adalah %f\n", x, y, 1/hasil);  
	}
	
	return 0;
}
