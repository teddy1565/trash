#include<stdio.h>
void swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main(){
	int a=0,b=0;
	scanf("%d %d",&a,&b);
	printf("%x %x\n",&a,&b);
	swap(&a,&b);
	printf("%x %x\n",&a,&b);
	return 0;
}
