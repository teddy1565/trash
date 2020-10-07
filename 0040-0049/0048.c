#include<stdio.h>
#include<math.h>
double abso(double num){
  if(num<0)return -num;
  return num;
}
int hw3(double a,double b,double c){
    double function1 = (b*b)-(4*a*c);
    double x1 = ((-b)+sqrt(abso(function1)))/(2*a);
    double x2 = ((-b)-sqrt(abso(function1)))/(2*a);
    function1<0?printf("根=%lf+%lf i\n根=%lf-%lf i\n",(-b)/(2*a),sqrt(abso(function1))/(2*a),(-b)/(2*a),sqrt(abso(function1))/(2*a)):printf("x1=%lf\nx2=%lf\n",x1,x2);
    return 0;
}
int main(){
    while(1){
        double a,b,c;
        scanf("%lf%lf%lf",&a,&b,&c);
        if(a==-1||b==-1||c==-1){
            break;
        }else{
            hw3(a,b,c);
        }
    }
    return 0;
}