#include<iostream>
using namespace std;
int main()
{
	float area_of_rect,area_of_cir,perimeter_of_rect, circum,l,b,r;
	cout<<"enter the l,b,r :";
	cin>>l>>b>>r;
	area_of_rect=l*b;
	perimeter_of_rect=2*(l+b);
    area_of_cir=3.14*r*r;
    circum=2*3.14*r;
    cout<<area_of_rect<<endl;
    cout<<perimeter_of_rect<<endl;
    cout<<area_of_cir<<endl;
    cout<<circum<<endl;
    return 0;
	
	
	
}
