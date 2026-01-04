#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string name;
    int roll;
    ifstream file("C:\\Users\\dell\\Desktop\\file.txt");
    if(!file){
        cout<<"File not found "<<endl;
        return 1;
    }
    cout<<"Student Record "<<endl;
    while(file>>name>>roll){
        cout<<"Name :"<<name<<",Roll no :"<<roll<<endl;
    }
    file.close();
    return 0;

}