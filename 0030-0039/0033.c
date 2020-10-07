#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
  int r=0,i;
  while(r==0||r<0){
    scanf("%d",&r);
  }
  int *a[r];
  for(i=0;i<r;i++){
    a[i]=calloc(5,sizeof(int));
  }
  printf("end loop\n");
  for(i=0;i<r;i++){
    scanf("%d %d %d %d",&a[i][0],&a[i][1],&a[i][2],&a[i][3]);
    printf("%d %d %d %d",a[i][0],a[i][1],a[i][2],a[i][3]);
  } 
  return 0;
}