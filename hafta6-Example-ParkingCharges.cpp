#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    const int limit = 3;
    int hour[limit];
    int totalHour = 0;

    for(int i = 0; i<limit; i++){
        cout<<"Enter hours for "<<(i+1)<<". Customer: ";
        cin>>hour[i];
        totalHour +=hour[i];
    }
    // baş satır -- head line --
    cout << setw(5) << "Car" << setw(15) << "Hours" << setw(15) << "Charge\n";
    // orta satırların charge değerininin hesaplanması ve printlenmesi.
    double totalCharge = 0;
    for(int i= 0;i<limit;i++){
        double charge = 0.00;
        if(hour[i]<3)
            charge = 2;
        else{
            charge =  (hour[i]-3)*0.5 + 2;
        }
        totalCharge += charge;
        //setw tab!ın havalı versiyonudur. width yani genişliği belirler.
        cout<<setw(3)<<(i+1)<<setw(17)<<hour[i]<<setw(14)<<fixed<<setprecision(2)<<charge<<endl;
    }



    // son satır, Toplam satırı

    cout<<setw(5)<<"TOPLAM"<<setw(14)<<totalHour<<setw(14)<<fixed<<setprecision(2)<<totalCharge<<endl;

    return 0;
    }