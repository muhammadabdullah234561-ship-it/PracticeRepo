#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string username,passward;
    cout<<"LOGININFO";
     ofstream file("C:\\Users\\dell\\Desktop\\file.txt",ios::app);
     cout<<"Enter Username = ";
     cin>>username;
      cout<<"Enter Passward = ";
      cin>>passward;
       file<<username<<" "<<passward<<" "<<endl;
       file.close();
       cout<<"Record saved ";
       return 0;
}