#include<iostream>
using namespace std;
main(){
	string name;
	float lossW;
	float day;
	cout<<"Enter the Name of the Person: ";
	cin>>name;
	cout<<"Enter the target weight loss in kilograms: ";
	cin>>lossW;
	day=lossW*15;
	cout<<name<<" will need "<<day<<" days to lose "<<lossW<<" kg of weight by following the doctor's suggestions";
}
