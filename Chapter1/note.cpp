#include<iostream>
using namespace std;
int main()
{
	int note,a,b,c;
	cout<<"enter the amount in hundreds : ";
	cin>>note;
	a=note/10;b=note/50;c=note/100;
	cout<<"amont in 10 note : " <<a<<endl;
	cout<<"amount in 50 note : " << b<<endl;
	cout <<"amount in 100 note : "<<c;
	return 0;
}
