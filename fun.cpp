#include <iostream>
using namespace std;

	void evod(int*p,int size){
    int even=0,odd=0;
    cout<<"numbers are :";
    for(int i=0;i<size;i++){
    	cout<<p[i]<<" "<<endl;
    	if(p[i]%2==0){
    		even++;
    	}else{
            odd++;
    	}

    }
    cout<<"Odd numbers are :"<<odd<<endl;
    cout<<"Even numbers are :"<<even<<endl;
	}
	int main(){
		int a[5];
		cout<<"Enter numbers :";
		for(int i=0;i<5;i++){
			cin>>a[i];
		}
       evod(a,5);
       return 0; 
	}
	
