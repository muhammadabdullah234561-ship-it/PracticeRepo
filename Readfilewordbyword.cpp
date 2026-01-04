#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string word;
    ifstream file("C:\\Users\\dell\\Desktop\\file.txt");
    if(!file){
        cout<<"File not foound !"<<endl;
        return 1;

    }
    while(file>>word){
        cout<<word<<endl;
    }
    file.close();
    return 0;
}