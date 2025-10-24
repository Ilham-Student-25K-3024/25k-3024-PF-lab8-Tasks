#include<stdio.h>
int main(){
	int num1,j,i,num2;
	printf("Enter the amount of tables:");
	scanf("%d",&num1);
	for(i=1;i<=num1;i++){
	printf("\n%d:",i);
		for(j=1;j<=10;j++){
			num2=i*j;
			printf("%d",num2);
			printf("\t");
		}	
		
	}
	
	return 0;
}
