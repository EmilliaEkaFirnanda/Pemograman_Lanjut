#include <stdio.h>
#include <stdlib.h>

//EMILLIA EKA FIRNANDA
//18081010026

int main(){
	system("color B0");
	char nama[100], jurusan[100], tempatlahir[100], tanggallahir[100], alamat[100], notelp[100], npm[100], kembali;
	
		input:
		printf("\n________SILAHKAN INPUT BIODATA ANDA!________\n");
		printf("	    [Don't use spaces!]\n");
		printf("	 [ex: TeknikInformatika]\n\n");
		printf("Nama : ");
		//gets(nama);
		scanf("%s",&nama);
		printf("Alamat : ");
		//gets(alamat);
		scanf("%s",&alamat);
		printf("Tempat Lahir : ");
		//gets(tempatlahir);
		scanf("%s",&tempatlahir);
		printf("Tanggal Lahir [DD/MM/YYYY] : ");
		//gets(tanggallahir);
		scanf("%s",&tanggallahir);
		printf("Jurusan : ");
		//gets(jurusan);
		scanf("%s",&jurusan);
		printf("NPM : ");
		//gets(npm);
		scanf("%s",&npm);
		printf("No. Telp : ");
		//gets(notelp);
		scanf("%s",&notelp);
		
		printf("\n\n________BIODATA ANDA________\n\n");
		printf("Nama 		: %s \n",nama);
		printf("Alamat		: %s \n",alamat);
		printf("Tempat Lahir 	: %s \n",tempatlahir);
		printf("Tanggal Lahir 	: %s \n",tanggallahir);
		printf("Jurusan 	: %s \n",jurusan);
		printf("NPM 		: %s \n",npm);
		printf("No.Telp 	: %s \n",notelp);
		
		printf("\n\nApakah anda ingin input biodata lagi [Y/N]?  ");
		scanf("%s",&kembali);
		if (kembali=='y' || kembali=='Y'){
			system("cls");
			goto input;
		}else if (kembali=='n' || kembali=='N'){
			printf("\nOKE TERIMA KASIH :) \n");
		}else {
			printf("\nNOTHING \n");
		}
		
	return 0;
}
