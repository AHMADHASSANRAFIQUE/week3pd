#include<iostream>
using namespace std;
main(){
	int min,Sec,frames;
	cout<<"Number of Minutes: ";
	cin>>min;
	cout<<"Frames per Second: ";
	cin>>Sec;
	frames = min * Sec * 60;
	cout<<"Total Number of Frames: "<<frames;
}
