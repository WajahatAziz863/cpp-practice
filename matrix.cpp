#include <iostream>
using namespace std;
class matrix{
private:
	int m[3][3];
	int t[3][3];
public:
	void input(){
		for (int i = 0; i < 3; i++)
		{
			for(int j=0;j<3;j++){
             cin>>m[i][j];
			}
		}
	}
	void display(){
		for (int i = 0; i<3; i++)
		{
			for (int j = 0; j <3; j++)
			{
				cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
}
	void trans(){
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				t[i][j]=m[j][i];
           cout<<t[i][j]<<" ";
		}

		cout<<endl;
	}
}
};
int main()
{
	matrix p;
	cout<<"Enter 9 matrix elements"<<endl;
	p.input();
	cout<<"Matrix is :"<<endl;
	p.display();
	cout<<"Transpose of matrix is :"<<endl;
	p.trans();
	
	
	return 0;
}