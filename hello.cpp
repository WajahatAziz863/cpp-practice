#include <iostream>
using namespace std;
int main()
{
   int a[5];
   cout<<"enter 5 values :";
   int positive=0,negative=0,zero=0;
   for(int i=0;i<5;i++)
   {
   	cin>>a[i];
   	if(a[i]>0)
   	{
   		positive++;
   	}else if(a[i]==0)
   	{
   		zero++;
   	}else{
   		 negative++;
   	}
   }
   	cout<<"\npositive numbers :"<<positive;
   	cout<<"\nnegative numbers :"<<negative;
   	cout<<"\nzero are :"<<zero;
   
	return 0;
}