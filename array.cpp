#include <iostream>
using namespace std;
int main(){
	int a[5];
	cout<<"Enter 5 numbers :";
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	int sum=0;
	cout<<"Sum is :";
	for(int i=0;i<5;i++){
		sum+=a[i];
	
	}
	cout<<sum;
	return 0;
}