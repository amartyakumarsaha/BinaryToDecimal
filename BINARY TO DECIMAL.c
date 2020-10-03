#include<stdio.h>
void binaryTodecimal();
int main(void)
{
	int n;
	printf("Enter a binary number :-");
	scanf("%d",&n);
	binaryTodecimal(n);
	return 0;
}
void binaryTodecimal(int n)
{
	int last_digit,temp,decimal=0,base=1;
	temp=n;
	while(temp)
	{
		last_digit=temp%10;
		decimal+=last_digit*base;
		base=base*2;
		temp=temp/10;
	}
	printf("The Decimal Value Of %d is :- %d",n,decimal);
}
