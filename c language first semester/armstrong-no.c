#include<stdio.h>
int isArmstrong(int a); //function declaration/signatures/prototype
int main(){
int n;
for(n=1;n<500000;n++)
 if(isArmstrong(n)==1)  // functionc call
  printf("\n\t %d",n);
return 0;
}

int isArmstrong(int a){
int ndigits=0,i,temp=a,rem,sum=0;
while(a){
 	ndigits++;
 	a/=10;  // how would we count 3 digits out of 153->15->1->0
}
a = temp;   // retrieving the original number
while(a){
 	rem = a%10; sum=sum+pow(rem,ndigits);// rem^ndigits
 	a/=10;
}
if(sum==temp) return 1; // yes
else return 0;    // no
}

