#include<stdio.h>

int main(){
	int a,b;
	printf("please enter number\n");
	scanf("%d%d",&a,&b);
	if(a%b==0||b%a==0){
		printf("yes\n");
	}else{
		printf("no\n");
	}
	return 0;
}
