#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string newname,name;
    int roll,newroll;
    float marks,newmarks;
    ifstream file("C:\\Users\\dell\\Desktop\\file.txt");
    ofstream temp("C:\\Users\\dell\\Desktop\\temp.txt");
    if(!file){
        cout<<"File not found !"<<endl;
        return 1;
    }
    int searchroll;
    bool found=false;
    cout<<"Enter roll no to searvh"<<endl;
    cin>>searchroll;
    while(file>>name>>roll>>marks){
        if(searchroll==roll){
           
            cout<<"Enter new name, roll no nad marks"<<endl;
            cin>>newname>>newroll>>newmarks;
            temp<<newname<<" "<<newroll<<" "<<newmarks<<endl;;
           found=true;
        }
        else{
            temp<<name<<" "<<roll<<" "<<marks<<endl;
        }
    }
    file.close();
    temp.close();
    if(found){
        remove("C:\\Users\\dell\\Desktop\\file.txt");
        rename("C:\\Users\\dell\\Desktop\\temp.txt","C:\\Users\\dell\\Desktop\\file.txt");
        cout<<"Record updated successfully"<<endl;
    }
    else{
        remove("C:\\Users\\dell\\Desktop\\temp.txt");
        cout<<"Record not found"<<endl;
    }
}