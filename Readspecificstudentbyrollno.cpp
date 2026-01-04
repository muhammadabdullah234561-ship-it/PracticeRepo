#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int roll,searchroll;
    string name;
    bool found=false;
    ifstream file("C:\\Users\\dell\\Desktop\\file.txt");
    if(!file){
        cout<<"File not found !"<<endl;
        return 1;
    }
    cout<<"Enter rollno for searching = ";
    cin>>searchroll;
    while(file>>name>>roll){
        if(roll==searchroll){
            cout<<"Record found "<<endl;
            cout<<"Name :"<<name<<"Roll No :"<<roll<<endl;
            found=true;
            break;
        }
    }
    file.close();
    if(!found){
        cout<<"Record not found!"<<endl;
    }
    return 0;

}