#include <stdio.h>
#include <stdlib.h>

//EMILLIA EKA FIRNANDA
//18081010026

int main() {
	system("color B0");
	int x,y,i;
	float hasil;
	hasil=1;

	printf("\n_____PERHITUNGAN BILANGAN PANGKAT_____\n\n");
	printf("Masukkan bilangan yang akan dipangkatkan : ");
	scanf("%d", &x);
	printf("Masukkan pangkat bilangan 		 : ");
	scanf("%d",&y);
	
	printf("Dengan proses perhitungan 		 : ");
	for(i=1;i<=y-1;i++){
		printf("%d x ",x);
	}
	printf("%d \n\n",x);
	
	if (y<0){
		y=y*(-1);
		//hasil=pow(x,y);
		for(i=1;i<=y;i++){
			hasil=hasil*x;
		}
		printf ("\nHasil bilangan %d pangkat %d adalah %f\n", x, -y, 1/hasil);
	} else{
		//hasil=pow(x,y);
		for(i=1;i<=y;i++){
			hasil=hasil*x;
		}
		printf ("\nHasil bilangan %d pangkat %d adalah %.0f\n", x, y, hasil);
	}

	return 0;
}
