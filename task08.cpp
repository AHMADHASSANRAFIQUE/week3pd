#include<iostream>
using namespace std;
main(){
	float vege,fruit,earning;
	float tvege,tfruit;
	cout<<"Enter vegetable price per kilogram (in coins): ";
	cin>>vege;
	cout<<"Enter fruit price per kilogram (in coins): ";
	cin>>fruit;
	cout<<"Enter total kilograms of vegetables: ";
	cin>>tvege;
	cout<<"Enter total kilograms of fruits: ";
	cin>>tfruit;
	earning = vege / 1.94 * tvege + fruit / 1.94 * tfruit;
	cout<<"Total earnings in Rupees (Rps): "<<earning;
	
}
