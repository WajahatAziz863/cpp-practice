#include <iostream>
using namespace std;
void swap(int* a,int* b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int x=7,y=3;
	cout<<"Before x :"<<x<<" "<<"Before y :"<<y<<endl;
	swap(&x,&y);
	cout<<"After x:"<<x<<" "<<"After y:"<<y;
	return 0;
}