#include<stdio.h>
main()
{
	int islem,tutar;
	int bakiye=1000;
	
	printf("Islemler:\n1:para cekme\n2:para yatirma\n3:havale yapma\n4:bakiye sorgulama\n5:kart iade\n\n\n");
	printf("Islemi seciniz:");
	scanf("%d",&islem);
	
	switch(islem)
	{
		case 1:
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Cekilecek para tutari:");
			scanf("%d",&tutar);
			if(bakiye<tutar)
			{
				printf("Bakiye yetersiz.\n");
				break;
			}
			bakiye=bakiye-tutar;
			printf("Para cekme islemi basari ile tamamlanmistir.\n");
			printf("Bakiye:%d",bakiye);
			break;
			
		case 2:
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Yatirilacak para tutari:");
			scanf("%d",&tutar);
			bakiye= bakiye + tutar;
			printf("Para yatirma islemi basari ile tamamlanmistir.\n");
			printf("Bakiye:%d",bakiye);
			break;
				
		case 3:
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Aktarilacak para tutari:");
			scanf("%d",&tutar);
			if(bakiye<tutar)
			{
				printf("Bakiye yetersiz.\n");
				break;
			}
			bakiye=bakiye-tutar;
			printf("Para aktarma islemi basari ile tamamlanmistir.\n");
			printf("Bakiye:%d",bakiye);
			break;
		
		case 4:
			printf("Bakiyeniz: %d\n",bakiye);
			break;
		case 5:
			printf("Kartiniz iade ediliyor...");
			break;
		default:
			printf("Bilinmeyen islem.");
			break;
	
		
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
