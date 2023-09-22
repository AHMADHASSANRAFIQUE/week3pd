#include<iostream>
using namespace std;
main(){
	int n,degree;
	cout<<"Enter the number of sides of the polygon: ";
	cin>> n;
	degree = (n-2) * 180;
	cout<<"The sum of internal angles of a "<<n<<"-sided polygon is: "<<degree<<" degrees";
	
}
