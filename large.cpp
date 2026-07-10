#include <iostream>
using namespace std;
int main()
{
	int w,x,y;
	cout<<"Enter three numbers :";
	cin>>w>>x>>y;
	if(w>=x && w>=y){
		cout<<w<<" "<<"is largest"<<endl;
	}else if(x>=y && x>=w){
		cout<<x<<" "<<"is largest"<<endl;
	}else{
		cout<<y<<" "<<"is largest"<<endl;
	}

	return 0;
}