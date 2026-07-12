#include <iostream>
using namespace std;
class trans{
private:
	int m[2][2];
	int n[2][2];
public:
	void input(){
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				cin>>m[i][j];
			}
		}
	}
	void show(){
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				cout<<m[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	void pose(){
		for(int i =0;i<2;i++){
			for(int j=0;j<2;j++){
				n[i][j]=m[j][i];
				cout<<n[i][j]<<" ";
			}
			cout<<endl;
		}
	}
};
int main(){
	trans t;
	cout<<"Enter matrix elements :";
	t.input();
	cout<<"Matrix is :"<<endl;
	t.show();
	cout<<"Transpose of matrix is :"<<endl;
	t.pose();
	return 0;
}