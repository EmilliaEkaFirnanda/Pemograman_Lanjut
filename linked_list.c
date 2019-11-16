#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node {
	int data;
    struct node *next;
};
typedef struct node node;

void tranverse(node *head){
	node *pWalker;
	pWalker = head;
	while (pWalker != NULL){
   		printf("%d -> ", pWalker -> data);
   		pWalker = pWalker -> next;
	}
    printf("NULL\n");
}

void insertNode(node **head, node *pPre, node *pNew){
	if (pPre == NULL){
       //menambahkan diawal atau pada empty list
	    pNew -> next = *head;
       *head = pNew;
    }else {
       //menambahkan node di tengah atau di akhir
       pNew -> next = pPre -> next;
       pPre -> next = pNew;
   }
}

void tambahAwal(node **head){
	int bil;
	node *pTemp;

	printf("Masukkan Bilangan : ");
	scanf("%d", &bil);
	pTemp = (node *)malloc(sizeof(node));

	if (pTemp != NULL){
  		pTemp->data = bil;
    	pTemp->next = NULL;
    	insertNode(head, NULL, pTemp);
  	}else{
      	printf("Alokasi memori gagal");
      	getch();
  	}
}

void tambahAkhir(node **head){
	int bil;
  	node *pCur,*pTemp;
  	pCur = *head;
  	tranverse(*head);
  	printf("Masukkan Bilangan : ");
 	scanf("%d", &bil);
  	pTemp = (node *)malloc(sizeof(node));
  	
	if (pTemp == NULL){
	  	printf("\nAlokasi memori gagal");
		getch();
	}else{
  		while(pCur != NULL && pCur -> next != NULL){
  		pCur=  pCur->next;
	    }
	  	pTemp->data = bil;
      	pTemp->next = NULL;
      	insertNode(head, pCur, pTemp);
  	}
}

void tambahData(node **head){
	int pos, bil;
	node *pTemp, *pCur;
  	tranverse(*head);
  	printf("\nPosisi penambahan setelah data bernilai : ");
  	scanf("%d", &pos);
  	printf("Masukkan Bilangan : ");
  	scanf("%d", &bil);

  	pCur = *head;
  	while (pCur != NULL && pCur -> data != pos) {
    	pCur = pCur -> next;
  	}

  	pTemp = (node *)malloc(sizeof(node));

  	if (pCur == NULL){
    	printf("\nNode tidak ditemukan\n");
    	getch();
  	}else if (pTemp == NULL){
    	printf("\nAlokasi memeori gagal\n");
     	getch();
  	}else{
     	pTemp->data = bil;
     	pTemp->next = NULL;
     	insertNode(head, pCur, pTemp);
  	}
}

void deleteNode(node **head, node *pPre, node *pCur)
{
	if (pPre == NULL)
		*head = pCur -> next;
	else
    	pPre -> next = pCur -> next;
		free(pCur);
}

void hapusData(node **head)
{
  	int pos;
  	node *pCur, *pPre;
  	tranverse(*head);
  	printf("\nData yang akan dihapus : ");
 	scanf("%d", &pos);

  	pPre = NULL;
  	pCur = *head;
  	//cari target value sampai ditemukan atau sampai pada akhir list
  	while (pCur != NULL && pCur -> data != pos) {
    	pPre = pCur;
    	pCur = pCur -> next;
  	}

  	if (pCur == NULL){
    	printf("\nNode tidak ditemukan");
    	getch();
  	}else
    	deleteNode(head, pPre, pCur);
   		getch();
  
}

void sum(node *head){
   //traverse linked list
	node *pWalker;
	int jumlah = 0;
	pWalker = head;
	while (pWalker != NULL){
   		printf("%d -> ", pWalker -> data);
   		jumlah += pWalker -> data; //menjumlahkan data inputan
   		pWalker = pWalker -> next;
	}
   	printf("NULL");
   	printf("\nJumlah Data = %d\n",jumlah);
}

int main(){
	int menu,pilih;
	node *head;
	head = NULL;
	
	do{
		printf("\n=====PILIH MENU=====\n");
		printf("0. Keluar Program\n");
		printf("1. Tambah Data Awal\n");
		printf("2. Tambah Data Akhir\n");
		printf("3. Tambah Data Tengah\n");
		printf("4. Tampilkan Data\n");
		printf("5. Hapus Data\n");
		printf("6. Jumlah Data\n");
		printf("Masukkan Pilihan : ");
		scanf("%d",&menu);
		
		if(menu==0){
			printf("\nTERIMA KASIH \n");
		}else if(menu==1){
			tambahAwal(&head);
		}else if(menu==2){
			tambahAkhir(&head);
		}else if(menu==3){
			tambahData(&head);
		}else if(menu==4){
			tranverse(head);
		}else if(menu==5){
			hapusData(&head);
		}else if(menu==6){
			sum(head);
		}else{
			printf("\nNOTHING\n");
			getch();
		}
	}while(menu!=0);
}
