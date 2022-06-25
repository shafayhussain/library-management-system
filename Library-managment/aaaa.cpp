#include<stdio.h>
int cal(int a, int b);
int main{
	int a=0,b=0;
	printf("enter first number");scanf("%d",%a);
	printf("enter second number");scanf("%d",%b);
	sum=cal(a,b);
	printf("value=%d",sum);
	return 0;
}
int cal(int a, int b){
	
	int sum ;
	sum=a+b;
	return sum;
	
}
