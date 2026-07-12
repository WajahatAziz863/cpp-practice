#include <iostream>
#include <fstream>
using namespace std;
int main (){
	ofstream file;
	file.open("message.txt");
	file<<"Wajahat Aziz"<<endl;
	file<<"20"<<endl;
	file<<"Jalla Jeem"<<endl;
	file.close();
	ifstream rfile;
	rfile.open("message.txt");
	string n;
	while(getline(rfile,n)){
		cout<<n<<endl;
	}
    rfile.close();
    return 0;

}