#include<stdio.h>
int main(){
    double x1,y1,x2,y2,x3,y3;
    scanf("%d",&x1);
    scanf("%d",&y1);
    scanf("%d",&x2);
    scanf("%d",&y2);
    scanf("%d",&x3);
    scanf("%d",&y3);

   double m1=(y2-y1/x2-x1);
   double m2=(y3-y2/x3-x2);
   if(m1=m2){
    printf("fall on one straight line");
   } 
   else{
    printf("fall on not one straight line");
   }
   return 0;
    
}