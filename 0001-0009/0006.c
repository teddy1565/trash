#include<stdio.h>

int main(){
    int a[4];
    printf("please enter number\n");
    scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]);
    printf("total:%d\n",a[0]+a[1]+a[2]+a[3]);
    printf("average:%lf\n",(a[0]+a[1]+a[2]+a[3])/2.0);
    printf("product:%d\n",a[0]*a[1]*a[2]*a[3]);
    int max=a[0],min=a[0];
    for(int i=0;i<4;i++){
        if(max<a[i]){
            max = a[i];
        }else if(min>a[i]){
            min = a[i];
        }
    }
    printf("max:%d\tmin:%d\n",max,min);
    return 0;
}