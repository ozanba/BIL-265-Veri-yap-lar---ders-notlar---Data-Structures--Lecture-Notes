#include <iostream>
#include <string>
using namespace std;
int main(){
    string string1("noon is 12 pm; midnight is not");
    int location;
    //first of - last of
    //find "is" at location 5 and 24
    cout <<"original string: loacition: "<<string1.find("is")<<"\nrfind location: "<<string1.rfind("is")<<endl;
    
    //find "o" at loaciton 5
    location = string1.find_first_of("misop");
    cout <<"\n\n (find_first_of) found '"<<string1[location]
        <<"'from the group \"misop\"at: "<<location<<endl;
        //string1 içinde "misop karaktaerlerininden beri ilk olarak nerede var cevabını bulduk:"
    return 0;
}