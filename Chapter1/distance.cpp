#include <iostream>
using namespace std;

int main()
{
	float km,m,ft,in,cm;
	
	cout<<"Enter distance between two cities in km:";
	
	cin>>km;
	
	m=km*1000;ft=3280.8399*km;
	in=39370.0787*km;cm=100000*km;
	
	cout<<"distance in m  : "<<m<<endl;
	cout<<"distance in ft : "<<ft<<endl;
	cout<<"distsance in in: "<<in<<endl;
	cout<<"distance in cm : " <<cm<<endl;
	
	return 0;
}
