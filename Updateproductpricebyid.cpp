#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string pname,pnewname;
    int id,newid,searchid;
    float price,newprice;
    ifstream file("C:\\Users\\dell\\Desktop\\file.txt");
    ofstream temp("C:\\Users\\dell\\Desktop\\file2.txt");
    if(!file){
       cout<<"File not found !"<<endl;
       return 1;
    }
     cout<<"Enter Product id to search "<<endl;
    cin>>searchid;
    bool found = false;
    
        while(file>>pname>>id>>price){
           
    if(searchid==id){
        cout<<"Record found "<<endl;
            cout<<"Enter new product details "<<endl;
            cin>>pnewname>>newid>>newprice;
            temp<<pnewname<<" "<<newid<<" "<<newprice<<endl;
            found =true;
        }
        else{
             temp<<pname<<" "<<id<<" "<<price<<endl;

        }
    }
    file.close();
    temp.close();
    if(found){
        remove("C:\\Users\\dell\\Desktop\\file.txt");
        rename("C:\\Users\\dell\\Desktop\\file2.txt","C:\\Users\\dell\\Desktop\\file.txt");
    }else{
             remove("C:\\Users\\dell\\Desktop\\2.txt");
        cout<<"Record not found"<<endl;
        
    }
    return 0;
}