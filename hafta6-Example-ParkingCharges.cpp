#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    const int limit = 3;
    int hour[limit];

    for(int i = 0; i<limit; i++){
        cout<<"Enter hours for "<<(i+1)<<". Customer: ";
        cin>>hour[i];
    }
    cout << setw(5) << "Car" << setw(15) << "Hours" << setw(15) << "Charge\n";
    for(int i= 0;i<limit;i++){
        double charge = 0.00;
        if(hour[i]<3)
            charge = 2;
        else{
            charge =  (hour[i]-3)*0.5 + 2;
        }
        //setw tbın havalı versiyonudur.
        cout<<setw(3)<<(i+1)<<setw(17)<<hour[i]<<setw(14)<<fixed<<setprecision(2)<<charge<<endl;
    }

    return 0;
    }