#include<iostream>
using namespace std;
main(){
	float age,times;
	int lived;
	cout<<"Enter the person's age: ";
	cin>>age;
	cout<<"Enter the number of times they've moved: ";
	cin>>times;
	lived = age / (times+1);
	cout<<"Average number of years lived in the same house: "<<lived;
	
}
