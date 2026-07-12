#include <iostream>
#include <fstream>
using namespace std;
main(){
ofstream file;
file.open("ran.txt");
file.write("trying to improve",17);
int cursor=file.tellp();
cout<<" position is :"<<cursor;
file.seekp(cursor-7,ios::beg);
file.write("for",3);
file.close();
return 0;
}