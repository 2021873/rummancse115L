#include<stdio.h>
int main(){
  int num1, num2,coun=0,minimum,maximum,space,i,ans;
  while(scanf("%d%d",&num1,&num2) == 2){

    if(num1 == 0 && num2 == 0)break;

       space=num1*num2;

       if(num1 > num2)
       minimum = num2;
       else minimum = num1;

       ans=1;
       for(i=minimum; i>=1; i--){

         if(space%(i*i)==0){

           ans = space/(i*i);

           break;
         }
       }
  printf("%d %d --------------- %d\n",num1,num2,ans);
  }
}

