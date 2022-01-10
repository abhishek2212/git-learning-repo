#include<stdio.h>
int main(){
	int n1,n2;
	printf("Enter 1st number: ");
	scanf("%d", &n1);
	printf("Enter 2nd number: ");
	scanf("%d", &n2);

	if(n1>n2){
		printf("%d is greater\n",n1);
	}
	else{
		printf("%d is greater\n",n2);
	}
	return 0;
}