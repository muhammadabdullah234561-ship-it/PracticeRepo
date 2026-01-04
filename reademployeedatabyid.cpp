#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string name;
    int id;
    float salary;
    ifstream file("C:\\Users\\dell\\Desktop\\file.txt");
    if(!file){
        cout<<"File not found "<<endl;
        return 1;
    }
    cout<<"Employee record "<<endl;
    while(file>>name>>id>>salary){
        cout<<"Name :"<<name<<",ID :"<<id<<"Salary :"<<salary<<endl;
    }
    file.close();
    return 0;

}