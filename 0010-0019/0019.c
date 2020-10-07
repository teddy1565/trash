#include<stdio.h>

int main(){
    int n,count;
    while(n!=-1){
	    count = 1;
	    printf("please enter number:");
	    scanf("%d",&n);
	    for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
	  	  printf("%d ",count);
		    count++;
		}
		printf("\n");
   	    }
    }
    printf("\n");
    return 0;
}
