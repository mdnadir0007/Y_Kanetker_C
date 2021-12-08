#include<iostream>
#include<iostream>
using namespace std;
int main()
{
	int rev,rem,num; rev=0;
	
	cout<<"enter the five digit no: ";
    cin>>num;
    
	rem=num%10;
	num=num/10;
    rev=rev*10+rem;
	
	rem=num%10;
	num=num/10;
	rev=rev*10+rem;
	
	rem=num%10;
	num=num/10;
    rev=rev*10+rem;
	
	rem=num%10;
	num=num/10;
	rev=rev*10+rem;
	
	rem=num%10;
	num=num/10;
	rev=rev*10+rem;
	
	cout<<"rev no is : "<<rev;
	return 0; 
	
}
	
	
	
	
