#include<iostream>
using namespace std;

int main()
 {
 		int add,add1,add4,rev,rem,num; add=0;
 		
	
	cout<<"enter the four digit no: ";
    cin>>num;
    
	rem=num%10;
	num=num/10;
  add1=add+rem;
	
	rem=num%10;
	num=num/10;

	
	rem=num%10;
	num=num/10;
    rev=rev*10+rem;
	
	rem=num%10;
	num=num/10;
	add4=add1+rem;
	
	cout<<add4;
	
	return 0;
	
 }
