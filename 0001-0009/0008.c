#include<stdio.h>

int main(){
	int a;
	printf("please enter number\n");
	scanf("%d",&a);
	printf("%d  %d  %d  %d  %d\n",a/10000,(a/1000)%10,(a/100)%100%10,(a/10)%1000%100%10,a%10000%1000%100%10);
	return 0;
}
