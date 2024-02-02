#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int pc=0,user=0;
	
	printf("TAS KAGIT MAKAS OYUNU\n\n");
	
	srand(time(NULL));
	int i,tahmin;
	
	for (i=0;i<5;i++){
		printf("Lutfen tahmininizi giriniz (1.tas,2.kagit,3.makas):");
		scanf("%d",&tahmin);
		
		int pctahmini=(rand()%3)+1;
		
		
		if(tahmin==1){
			printf("Tas sectiniz\n");
			if(pctahmini==2){
			 printf("Bilgisayar kagit secti\nBilgisayar kazandi.\n");
			 pc++;
			}
			else if(pctahmini==3){
			 printf("Bilgisayar makas secti\nKullanici kazandi.\n");
			 user++;
			}
			else if(pctahmini==1){
			 printf("Bilgisayar tas secti\nBerabere.\n");
			}
			}
		else if(tahmin==2){
			printf("Kagit sectiniz\n");
			if(pctahmini==3){
			 printf("Bilgisayar makas secti\nBilgisayar kazandi.\n");
			 pc++;
			}	
			else if(pctahmini==1){
			 printf("Bilgisayar tas secti\nKullanici kazandi.\n");
			 user++;
			}
			else if(pctahmini==2) printf("Bilgisayar kagit secti\nBerabere.\n");
			}
		else if(tahmin==3){
			printf("Makas sectiniz\n");
			if(pctahmini==1){
			 printf("Bilgisayar tas secti\nBilgisayar kazandi.\n");
			 pc++;
			}
			else if(pctahmini==2){
			 printf("Bilgisayar kagit secti\nKullanici kazandi.\n");
			 user++;
			}
			else if(pctahmini==3) printf("Bilgisayar makas secti\nBerabere.\n");
			}
		else printf("Hatali secim yapildi.\n");
		
			
		}
		
	if (pc>user){
			printf("\n\n\nOYUNU BILGISAYAR KAZANDI\n");
			printf("Bilgisayar:%d,Kullanici:%d",pc,user);
		}
	else if (user>pc){
			printf("\n\n\nOYUNU KULLANICI KAZANDI\n");
			printf("Kullanici:%d,Bilgisayar:%d",user,pc);
		}
	else printf("\n\n\nBERABERE BITTI.");
		
	}
	
	
	





