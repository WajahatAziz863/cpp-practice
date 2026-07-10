#include <iostream>
using namespace std;
int main(){
	int i=0,sum=0;
	cout<<"Sum of numbers is :";
	do{
       sum+=i;
       i++;
	}while(i<=10);
	cout<<sum;
	return 0; 

}