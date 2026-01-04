#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string name;
    int roll;
    char choice;
    ofstream file("C:\\Users\\dell\\Desktop\\file.txt",ios::app);
    if(!file){
        cout<<"Error opening file"<<endl;
        return 1;
    }
    do{
    cout<<"Enter Student name = ";
    cin>>name;
    cout<<"Enter Student roll number = ";
    cin>>roll;
    file<<name<<" "<<roll<<endl;
     cout<<"Record saved !!"<<endl;
    cout<<"Do you to save another record ?(y/n):";
    cin>>choice;
    }
    while(choice=='y'||choice=='Y');
    file.close();
    return 0;
}