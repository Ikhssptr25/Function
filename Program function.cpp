#include <iostream>
using namespace std;

float perpangkatan(double a,double b);
int main(){
	cout<<perpangkatan(2,3);
	
}
float perpangkatan (float a,float b){
	float hasil=1;
	for(int i=0; i<b; i++){
		hasil=hasil*a;}
		return hasil;
	 
}
