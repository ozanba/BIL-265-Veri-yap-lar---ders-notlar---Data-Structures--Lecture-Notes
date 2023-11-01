#include <iostream>
#include <string>

using namespace std;


//kopyalama kruucusu:
/*kopyalam kurucusu özel  bir fonksiyondur. nesne yaratırken kendiliğinden canlanır.var olan nesney in kopyasınını çıkartır
parametre olarak eski nesneyi alır
 Eğer programcılar sınıflarının içine bir kopyalama kurucusu koymazlarsa,
derleyici standart bir kurucuyu sınıfa yerleştirir.
▰ Standart kopyalama kurucusu bir nesnenin elemanlarını bire bir yeni nesnenin
veri alanlarına kopalar.
pointe'ların işaret erriği nesneleri kopyalamaz.
*/
class String{//örnek karakter katarı) string sınfıı
    int boy; //katarın boyru
    char *icerik; //katarın genişliği
public:
    String(const char *);//kruucu
    String(const String &);//kopyalama kurucusu
    ~String();//yok edici fonksiyon
    void goster();
};
String::String(const char *gelen_veri){
    cout<<"Kurucu çalıştı"<<endl;
    boy = strlen(gelen_veri);
    icerik = new char[boy+1]; //+1 nul için
    strcpy(icerik,gelen_veri);//gelen veri icerik'in gosterdiği yere
}
void String::goster(){
cout<<icerik<<endl;
}
String::~String() { //yok edici
        cout<<"Yok edici çalıştı"<<endl;
        delete []icerik;
    }

String::String(const String &gelen_nesne){ // kopyalama kurucusu{
    cout<<"Kopyalama kurucusu çalıştı"<<endl;
    boy = gelen_nesne.boy;
    icerik = new char[boy+1];
    strcpy(icerik, gelen_nesne.icerik);
    }   


int main(){
    String string1("Katar 1");
    string1.goster();
    String diger = string1;
    String baska(string1);
    diger.goster();
    
    //baska.goster();
    cout<<"-----------Program Bitişi--------"<<endl;
    return 0;
}