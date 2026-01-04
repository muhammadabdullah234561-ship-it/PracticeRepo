#include <iostream>
#include <fstream>
using namespace std;
int main(){
 ifstream file("C:\\Users\\dell\\Desktop\\file.txt");
 if(!file){
    cout<<"File not found !"<<endl;
    return 1;
 }
 string line;
 while(getline(file,line)){
    cout<<line<<endl;
 }
 file.close();
}