#include<iostream>
using namespace std;
int main()
{
	int lmen,ilmen,	women,lwomen,ilwomen,p=80000;
	lmen=p*35/100;
	
	ilmen=p*52/100-lmen;
	
	women=p-p*52/100;
	
	lwomen=p*48/100-lmen;
	
	ilwomen=women-lwomen;
	
	cout<<"total ilet men   :  "<<ilmen<<endl;
	cout<<"total ilet women :  "<<ilwomen;
	
	return 0;
}
