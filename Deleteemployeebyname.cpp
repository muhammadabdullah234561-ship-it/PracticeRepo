#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string name,searchname;
    int id;
    float salary;
    ifstream file("C:\\Users\\dell\\Desktop\\file.txt");
    ofstream temp("C:\\Users\\dell\\Desktop\\file2.txt");
    if(!file){
        cout<<"File not found !";
        return 1;
    }
    bool found=false;
    cout<<"Enter name to search employee ";
    cin>>searchname;
    while(file>>name>>id>>salary){
        if (searchname==name){
          cout<<"Record found"<<endl;
          found=true;
        }
        else{
            temp<<name<<" "<<id<<" "<<salary<<endl;

        }
        file.close();
        temp.close();

        if(found){
            remove("C:\\Users\\dell\\Desktop\\file.txt");
            rename("C:\\Users\\dell\\Desktop\\file2.txt","C:\\Users\\dell\\Desktop\\file.txt");
            cout<<"Record deleted"<<endl;
        }
        else{
            cout<<"Name not found"<<endl;
             remove("C:\\Users\\dell\\Desktop\\file2.txt");
        } 
    }
    return 0;
}