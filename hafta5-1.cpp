#include <iostream>
using namespace std;

class Circle {
    double radius;
    public: 
        Circle (double r): radius(r){}
        double area(){ 
            return radius*radius*3.1415;}
    };
class Cylinder {
    //clinder içinde adı base olan başka bir nesne var
    Circle base;
    double height;
    public: 
        Cylinder(double r, double h) : base(r){height=h;}
        double volume() {//
            return base.area()*height;}// base formulu çağırıldı
    
};
int main(){
    Cylinder foo(10,20);//foo oluşturuldu
    Circle fo(1);
    cout<<"circle foo's area: "<<fo.area()<<endl;
    cout<<"foo's volume: "<<foo.volume()<<'\n';//foo nesnesinin volume ismindeki fonksiyonu çağırıldı
}