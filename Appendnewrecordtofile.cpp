#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string name;
    int roll;
    float marks;
    ofstream file("C:\\Users\\dell\\Desktop\\file.txt",ios::app);
    if(!file){
        cout<<"File not found "<<endl;
        return 1;
    }
     cout<<"Enter appended details"<<endl;
     cin>>name>>roll>>marks;
     file<<name<<" "<<roll<<" "<<marks;
     cout<<"Data entered :";
     return 0;
}