#include<stdio.h>

int main(){
  bool x=false,y=true,z=false;
  bool ans;
  ans = x*(x+(!y)+z)*(x+y+(!z));
  printf("%d\n",ans);
  return 0;
}