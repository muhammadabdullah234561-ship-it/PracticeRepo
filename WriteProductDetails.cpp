#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string productname;
    int id;
    float price;
    ofstream file("C:\\Users\\dell\\Desktop\\file.txt",ios::app);
    cout<<"Enter Product Name = ";
    cin>>productname;
    cout<<"Enter Product ID = ";
    cin>>id;
    cout<<"Enter Product Price = ";
    cin>>price;
    file<<"PRODUCT DETAILS"<<endl;
    file<<productname<<" "<<id<<" "<<price<<" ";
    file.close();
    cout<<"Record saved"<<endl;
    return 0;
}