#include <iostream>
using namespace std;
int main (){
	char a;
	cout<<"enter character :";
	cin>>a;
	if(isalpha(a)){
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
		cout<<"It is vowel";
	}
	else{
		cout<<"It is consonant";
	}
}
	else{
		cout<<"invalid input";
	}

	return 0;
}