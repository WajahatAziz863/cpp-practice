#include <iostream>
using namespace std;
struct stu{
	int Roll_no;
	float Marks;
};
int main(){
stu s[5];

for(int i=0;i<5;i++){
cout<<"Enter Roll no and Marks :";
cin>>s[i].Roll_no>>s[i].Marks;
cout<<endl;
}
int maxindex=0;
for(int i=0;i<5;i++){
	if(s[i].Marks>s[maxindex].Marks){
		maxindex=i;
}
}
cout<<"Student with highest marks is "<<endl;
cout<<"Roll no :"<<s[maxindex].Roll_no<<endl;
cout<<"Marks are :"<<s[maxindex].Marks<<endl;
return 0;
}
