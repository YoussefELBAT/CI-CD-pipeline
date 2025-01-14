#include <stdio.h>


int sum(int a , int b){
	return a+b;
}
int main()
{
	int a = 8, b = 9;
	int somme = sum(a,b);
	printf("the sum of %d + %d is %d",a ,b,somme);
	
	return 0;
}