#include <iostream>

using namespace std;

int fibonacci(int x);
int main(){
    int num = 1;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Fibonacci sum of "<<num<<" is: "<<fibonacci(num)<<endl;

}
int fibonacci(int x){
    if (x== 0 || x==1 )
        return 1;
    else
        return  fibonacci(x-2)+ fibonacci(x-1);
}