#include <iostream>
using namespace std;
class matrix{
private:
	int m[2][2];
	int r[2][2];
public:
void input(){
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin>>m[i][j];
		}
	}
}
void show(){
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
}
void zarb(){
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			r[i][j]=0;
			for (int k = 0; k < 2; k++)
			{
				r[i][j]+=m[i][k]*m[k][i];

			}
			cout<<r[i][j]<<" ";
		}
		cout<<endl;
	}
}
};
int main(){
	matrix z;
	cout<<"Enter 4 elements of matrix :";
	z.input();
	cout<<"Matrix is :"<<endl;
	z.show();
	cout<<"Multiple of matrix is :"<<endl; 
	z.zarb();
	return 0;
}