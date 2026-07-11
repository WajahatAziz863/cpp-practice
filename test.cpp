#include <iostream>
using namespace std;
int main() {
	int a[5];

	cout<<"enter number :"<<endl;
	for(int i=0;i<5;i++){
		cin>>a[i];
	} 
	int largest=a[0];
	for(int i=0;i<5;i++){
		if(a[i]>largest)
		{
			largest=a[i];
		}
	} cout<<"largest number is :"<<largest<<endl;	 
	 
	
    return 0;
}