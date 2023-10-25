#include <iostream>
#include <string>
using namespace std;
int main(){

    string string1("ozan.bagiran.bu.kodu.yazdi.bunu.");
    size_t position = string1.find(".");
    cout<<"Original string: "<<string1<<endl;

    while(position != string::npos){
        string1.replace(position,1," ");
        position = string1.find(".",position+1);
    }


    cout<<"Replace all . to " " : "<<string1<<endl;

    
    return 0;
}