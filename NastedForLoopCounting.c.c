#include<stdio.h>
int main(){
	int i,j;
	
	for(i=1; i<=10; i++){
		for(j=1; j<=10; j++){
			
			if(j%2==1){
				printf("%d",j);
			}
			
		}
		printf("\n");
	}
}