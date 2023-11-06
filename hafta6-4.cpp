// recursive funcitions
#include <iostream>
using namespace std;
double power(double x, int y);
int main(){
    cout<<"Sonuç: "<<power(2,2)<<endl;
    return 0;
}
double power(double x, int y){
    if (y==0){
        return 1.0;
    }
    else{
        return x*power(x,y-1);
    }
}