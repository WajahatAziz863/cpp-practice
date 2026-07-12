#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream myfile;
	myfile.open("random.txt");
	myfile.write("I will do this happen.",22);
	int stand=myfile.tellp();
	cout<<"current position is :"<<stand;
	myfile.seekp(stand-7,ios::beg);
	myfile.write("InshaAllah.",11);
	myfile.close();
	return 0;
}