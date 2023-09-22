#include <iostream>
using namespace std;
main()
{ 
	int n;
	cout<<"Number of square meters you can paint: ";
	cin>>n;
	int width;
	cout<<"Width of the single wall (in meters): ";
	cin>>width;
	int height;
	cout<<"Height of the single wall (in meters): ";
	cin>>height;
	int area;
	area= (width * height);
	float paint;
	paint = n/area;
	cout<<"Number of walls you can paint: "<<paint;

}
