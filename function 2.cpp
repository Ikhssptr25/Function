#include <iostream>
using namespace std;

//deklarasi 
bool valid_triangle(int i,int k,int h);

int main(){
	int i,k,h;
	cin>>i>>k>>h;
	if(valid_triangle( i, k, h))
	{
	cout<<"false"<<endl;
	}else{
	cout<<"true";
	}
	
 return 0;

}

bool valid_triangle(int i,int k,int h){
	if( i+k>h || i+h>k || k+h>i){
	return true;
	}else{
	return false;}
}
 
