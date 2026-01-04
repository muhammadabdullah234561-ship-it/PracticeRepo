#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string ename,newname;
    int id,newid,searchid;
    float salary,newsalary;
     ifstream file("C:\\Users\\dell\\Desktop\\file.txt");
    ofstream temp("C:\\Users\\dell\\Desktop\\file2.txt");
    if(!file){
        cout<<"File not found !"<<endl;
        return 1;

    }
    cout<<"Enter search id to find employee ";
    cin>>searchid;
    bool found=false;
    while(file>>ename>>id>>salary){
        if(id==searchid){
            cout<<"Record found "<<endl;
            cout<<"Enter new record"<<endl;
            cin>>newname>>newid>>newsalary;
            temp<<newname<<" "<<newid<<""<<newsalary<<endl;
            found = true;
        }
    }
    file.close();
    temp.close();
    if(found){
        remove("C:\\Users\\dell\\Desktop\\file.txt");
        rename("C:\\Users\\dell\\Desktop\\file2.txt","C:\\Users\\dell\\Desktop\\file.txt");
        
    }
    else{
        remove("C:\\Users\\dell\\Desktop\\file2.txt");

    }
    return 0;
}