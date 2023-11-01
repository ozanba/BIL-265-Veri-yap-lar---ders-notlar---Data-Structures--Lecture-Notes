//yıkıcı fonksiyonlar disturctors YOK EDİCİ
/*
nesne işi bittiğinde nesneyi ram'den siler. 
yaşam
parametre almazlar.
 bir nesnede sadece bir adet yok edici olabilir.
 sınıf ile aynı isimi taşır önünde tilda sembolü olur(~)
*/
#include <iostream>
using namespace std;
class Nokta
{
    public: 
    Nokta():y(){}// bu satır bu kodda hiçbir işe yaramıyor
    Nokta(int a, int b=3): y(b){x=a;}// eğer kurucu fonksiyonun değer atamakatan başka işlevi yoksa {} içi boş bırakılabillir "x(a)" da yazılabilridi
    void yaz(){cout<<x<<" "<<y<<endl;}
    private:
        int x;
        const int y;
};

int main(){
    Nokta NoktaDizisi[5] ={10,20,Nokta(20,40), 0, Nokta(9)};//10,20,0 bilgisi ile 
    for(int i= 0; i<5;i++)
        NoktaDizisi[i].yaz();
    return 0;
}