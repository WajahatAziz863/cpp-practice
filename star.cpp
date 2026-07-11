#include <iostream>
using namespace std;
int main(){
	int col=5;
	for(int i=0;i<col;i++){
		for(int j=5;j>=i;j--){
			cout<<" ";
		}
		for(int k=0;k<=i;k++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}