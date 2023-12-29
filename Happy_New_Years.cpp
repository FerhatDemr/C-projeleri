#include<stdio.h>
main(){
	
	
	int i,j;

	
	for(i=0;i<40;i++){
		
		for(j=0;j<i;j++){
		
		printf("'");
		}
		
		printf("*\n");
	}
	
	printf("----------------------------------------* Happy New Years\n");
	
	for (i=40;i>0;i--){
		
		for(j=1;j<i;j++){
		
			printf("'");
		}
		printf("*\n");

	}
	
	
	
	
	
	return 0;
}
