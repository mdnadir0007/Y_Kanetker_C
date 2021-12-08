#include <iostream>
using namespace std;

int main()
{
	float agge,per,math,hindi,english,science,social_science;
	
	cout<<"enter the marks of five subject btetween 0 to 100 :";
	
	cin>> math>>hindi>>english>>science>>social_science;
	agge=5*100;
	per=(math+hindi+english+science+social_science)/5;
	
	cout<<"agge marks :" << agge<< endl;
	cout<<"obtain marks in per : "<<per;
	
	return 0;
	
}
