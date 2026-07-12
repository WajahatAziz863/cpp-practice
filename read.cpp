#include <iostream>
#include <fstream>
using namespace std;
int main (){
	ifstream file;
	file.open("Aziz.txt");
	string n;
	while (getline(file,n)){
	cout<<n<<endl;
}
    file.close();
    return 0;
}