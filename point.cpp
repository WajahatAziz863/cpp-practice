#include <iostream>
using namespace std;
int main(){
	int a[5]={12,3,5,6,22};
	int *p=a;
	cout<<"elements are :";
	int sum=0;
	
	for(int i=0;i<5;i++){
		cout<<*(p+i)<<" "<<endl;
       sum+=a[i];
	}
     cout<<"sum is :"<<sum<<endl;
     return 0;
}