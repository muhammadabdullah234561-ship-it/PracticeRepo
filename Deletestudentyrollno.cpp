#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string name;
    int roll,searchroll;
    float marks;
    ifstream file("C:\\Users\\dell\\Desktop\\file.txt");
    ofstream temp("C:\\Users\\dell\\Desktop\\file2.txt");
    if(!file){
        cout<<"File not found !"<<endl;
        return 1;
    }
    bool found=false;
    cout<<"Enter roll no to delete ";
    cin>>searchroll;
    while(file>>name>>roll>>marks){
        if(roll==searchroll){
            cout<<"Record found !"<<endl;
            found=true;
        }
       
        else{
          temp<<name<<" "<<roll<<" "<<marks;
        }
    }
        file.close();
        temp.close();
        
        
        
        if(found){
            remove("C:\\Users\\dell\\Desktop\\file.txt");
        rename("C:\\Users\\dell\\Desktop\\file2.txt","C:\\Users\\dell\\Desktop\\file.txt");

            cout<<"Record deleted "<<endl;
        }
        else{
            cout<<"Roll no not found"<<endl;
            remove("C:\\Users\\dell\\Desktop\\file2.txt");
        }
    
    return 0;
}