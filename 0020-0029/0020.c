#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1,l=0;i<n;i++){
	for(int j=1,k=(n*2-1)/2+1;j<=(n*2-1);j++){
	    if(j==(k+l)||j==(k-l)){
		printf("*");
	    }else{
		printf(" ");
	    }
	}
	l++;
	printf("\n");
    }
    for(int q=1;q<=(n*2-1);q++){
	printf("*");
    }
    printf("\n");
    return 0;
}
