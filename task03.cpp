#include<iostream>
using namespace std;
main(){
	float iv,a,fv;
	cout<<"Enter Initial Velocity (m/s): ";
	cin>> iv;
	cout<<"Enter Acceleration (m/s^2): ";
	cin>> a;
	int Time;
	cout<<"Enter Time (s): ";
	cin>> Time;
	fv = iv + (a*Time);
	cout<<"Final Velocity (m/s): "<<fv;
	
}
