#include<iostream>
using namespace std;
int main()
{
	int add,rem,num; add=0;
	
	cout<<"enter the five digit num : ";
    cin>>num;
    
	rem=num%10;
	num=num/10;
	add=add+rem ;
	
	rem=num%10;
	num=num/10;
	add=add+rem;
	
	rem=num%10;
	num=num/10;
	add=add+rem;
	
	rem=num%10;
	num=num/10;
	add=add+rem;
	
	rem=num%10;
	num=num/10;
	add=add+rem;
	
	cout<<"sum of five digit no is  : "<< add;
	
	return 0;
	
	
}
