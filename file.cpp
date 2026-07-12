#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream file;
	file.open("Aziz.txt");
	file<<"Abdul Aziz"<<endl;
	file<<"A Greatest man and a successful father who raised good children"<<endl;
	file<<"We are very thankfull to him";
	file.close();
	return 0;
}