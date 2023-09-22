#include<iostream>
using namespace std;
main(){
	string name;
	float atic,ctic,atsold,ctsold,charity,total,donation,remaining;
	cout<<"Enter the movie name: ";
	cin>>name;
	cout<<"Enter the adult ticket price: $";
	cin>>atic;
	cout<<"Enter the child ticket price: $";
	cin>>ctic;
	cout<<"Enter the number of adult tickets sold: ";
	cin>>atsold;
	cout<<"Enter the number of child tickets sold: ";
	cin>>ctsold;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	cin>>charity;
	cout<<""<<endl;
	cout<<"Movie: "<<name;
	total = atic * atsold + ctic * ctsold;
	cout<<"Total amount generated from ticket sales: $"<<total<<endl;
	donation = 0.1 * total;
	cout<<"Donation to charity ("<<charity<<"%): $"<<donation<<endl;
	remaining = total - donation;
	cout<<"Remaining amount after donation: "<<remaining;
}
