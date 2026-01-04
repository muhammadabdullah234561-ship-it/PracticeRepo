#include<iostream>
#include <fstream>
using namespace std;
int main(){
    string name;
    int roll;
    float marks;
    ofstream file("C:\\Users\\dell\\Desktop\\file.txt",ios::app);
    cout<<"Enter Student name = ";
    cin>>name;
    cout<<"Enter student rollno = ";
    cin>>roll;
    cout<<"Enter student marks = ";
    cin>>marks;
    file<<name<<" "<<roll<<" "<<marks<<" "<<endl;
    file.close();
    cout<<"Record saved "<<endl;
    return 0;
}