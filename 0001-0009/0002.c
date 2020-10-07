#include<stdio.h>
#include<stdlib.h>
int main(){
	int a1,a2;
	printf("please enter number1 and number2\n");
	scanf("%d%d",&a1,&a2);
	printf("total:%d\n",a1+a2);
	printf("average:%lf\n",(a1+a2)/2.0);
	printf("product:%d\n",a1*a2);
	if(a1>a2){
		printf("max:%d\tmin:%d\n",a1,a2);
	}else{
		printf("max:%d\tmin:%d\n",a2,a1);
	}
	return 0;
}
