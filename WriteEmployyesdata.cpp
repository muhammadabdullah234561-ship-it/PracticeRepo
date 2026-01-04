#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string name;
    int ID;
    float salary;
    char choice;
    ofstream file("C:\\Users\\dell\\Desktop\\file.txt",ios::app);
    if(!file){
        cout<<"File not found ";
        return 1;
    }
    do
    {
        cout<<"Enter employee name = ";
        cin>>name;
        cout<<"Enter employee ID = ";
        cin>>ID;
        cout<<"Enter employee salary = ";
        cin>>salary;
        cout<<"REcord saved !!<<endl";
        cout<<"Do you want to save another record ";
               cin>>choice;
    }while(choice=='y'||choice=='Y');
     return 0;
    
}