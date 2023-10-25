#include <iostream>

//veri yapiları
/*

SINIFLARDA HEM ÖZELLİK HEM DE METHODLAR BULUNUR.
bu değişken özelliklere attributes denir. 
fonsiyonlara da method denir.
sınıflar, pascal euler algol BCPL, c gibi yapısal dillerdeki yapı kavramının bir genellemesidir.

-> yapılar yanlızca değişkenler içerebilir. sınıflar Fonsiyonların dışında kalır
-> sınıflar ise değişkenler yanında fonsiyonları içeren daha genel bir forma sahiptir.
bir sınıf içindeki fonsiyonlar o sınıfın değişkenlerine erişebildiği gibi farklı sınıflar arasında da iletişim çeşitki erişim yetkilieri ile sağlanır.


*****YAPISAL PROGRAMLAMA******
kod, modul veya fonsiyonlara ayrolır
programı fonksiyon kmelerine ayırma ve her fonsiyonun alt program gibi çalışmasına odaklanır
türe bağlı tanımlanan fonsiyonlar mevcuttur.
modifiye etmek zordur
ana metot ana programdan başka fonsiyonları çağırarak iletişim kurar
erişim yerki sınırılaması yoktuyr. güvenlği tehlikeye sokar
kodu yeniden kullanmak zordur.

****NESNE YÖNELİMLİ PROGRAMLA için önemli 4 tanım

ENCAPSULATİON(KAPSILLEME YA DA SARMALAMA): Özellikleri ve fonsiyonları birbirine sıkı bir şekilde bağlamak anlamına gelir.
 Bu da sınıfa air değişkenlerin ancak o sınıfa ait metotlar tarafından okunabilmesi ve 
 dğeiştirilebilmesi ilkesine dayanır(private, protected etiketleri)

Katılım ya da Miras Alma(inheritance): 
Bir sınıfın özelliklerimi ve yöntemlerinin, o sınıftan türetilen başka bir sınıfa aktarılabilir olmasına izin verilmesi durumudur
Türetilen sınıf, üst sınıftan bu özellik ve yöntemleri miras alır. Telefon sınıfıntan türetilen akıllı ve tuşlu telefonlardan aakıllı olanın fotoğrafÇek fonsiyınun olup türetilen  tuışlu modeliln buna sahip olmaması ama her iki telefınunda aramaYap() fonksiyonlarının olması

Polimorfisim ya da Çok biçimlilik(polimorphism): Methohgların birden çok şekilde .alışmasına izin verilmesi  durumudur. aşırı yükleme foplimorfizime en güzel örnektir.
mesela canlılar sınıfı için SesÇıkar() fonksiyonu o sınıftan  türetilen bir kedi için miyavlar bir köpek için hablar bir salyangöz için sesiiz kalır.

Soyutlama(abstraction): dahili ayrıntıları gizler ve yanlızcı kullanıcıya gösterir. Mesela bir programcının yazıdğı cout fonskiyonun arka planda nasıl çalıştığını bşlmeden bunu kullanması gibi.

nesne yüleri:
    Değişkenler: örn basit dğeişkenlşer diziler ya da diğer yapılar veya sınıflar gibi karışık modeller.
    Methondalar
        yapıcılar(constructor)/nesne yaratmakta kullanılan  spesifik fonsiyonlar
        yıkıcılar(destructor) nesne silinirken kullanılan spesifik fonksiyonlar
        diğer fonskiyonlar : nesne ile iletişim yapan fonksiyonlar,


sınıf nesneler için bir şablon görevi görmektedir.
ortak özellikler sınıf içinde tanımlanır.
bir sınıf üye bileşenler;
    üye fonsiyonları(member functions)
    üye verileri v(member data)
ve bu üyelere erişim beliryeçleri:
    gizlenebilir, private
    gizlenmeyebilir, public
    korunabilir, protected.

public üye er,ş,m belirteci: sonra bildirilen data ya da fonsiyonprogram sınıfın bir nesnesine eriştiği zaman erişebilir.
private sonra herhangi bir data ya da üye fonksiyon o sınıfın üye fonskiyonları tarafından erişilebilir
proteccted: sonra sadece miras/kalıtım işlemleri sırasında aktarmak istediğimiz üye veri ya da fonksiyonların tamlandığı etikettir.

sınıfların üye fonsiyonlarının tanımlanamasının genel yazım kuralı:
geri dönüş değeri Sınıf İsimi::Üyen fonksiyonun isimi(parametreler){
    işlermler buraya yazılır
}
sınıfınn ara yüzünde bulunun public, private, protected etiketi altındana belirtilmiş olan tüm fonksiyon protototipleri içi tek tek yazılmalıdır.

sınıfın ara yüzü ve üye fonksiyonları ayrı ayrı dosyalar içinde yanımlanabilir.
-> sınıfın ara yüzü dosyası .h ve ya .hpp uzantılıdır.
üye fonksiyonların yazılı olduğpu .cpp uzantılıdır.
her iki dostyanın ismi, sınıf ismi ile aynı olmalıdır
üye fonksiyonlalrı nın başına
inclıdeSınıfismi.h


****KURUCU FONKSİYONLAR (constuctors) ******

 bir nesne yaratılırken kendiliğinden canlanır. otomatik çalışır
 biz tanımlamasak bile her sınıfının kurucu fonksiyonu vardır.
 bu tür fonksiyon  bir nesnenin kurulması esnasında 
 üyesi oldukları sınıf ile aynı ismi çalışır
 bir yada birden falza olabilir.(over load)
    parametre alabilir ya da almayabilir
geri dönüş değeri yoktur.
geri dönüş tipi olarak void bile yazılmaz
kurucu fonksiyonlar nesne yaratılırken otomatik olarak çağırılacağı iççin public etiketi altında yapılmalıdır.
krucu fonksiyonlar bazı alt yapılara ayrılır:
    parametresiz kurucu fonksiyon: ya parametresizdir. ya da başlangıc değeri yoktur.
    parametrelidiğer üye fonskiyonlar giibi gerektiğinde parametre alacak şekilde tanımlanabilir.
*/
using namespace std;


class Rectangle {
    //eğer başında bir şey yazmıyorsa private olarak algılar.
    int width, height;
    public:
    void set_values(int,int); //eğer defult bir paremaetre atanacaksa int =3 ile atanır. herhangi bir isim verilmez.
    int area(void);//{ return width*height;}
} rect; //----->> global bir nesne 

void Rectangle::set_values(int x, int y){ 
    // bir şetyleri kuran fonksiyonların adlarına genellikle set ile başlaması tercih ederiz
    //bir şeyleri alacaksak ise get ile isimlendirmeyi tercih ederiz.1
    width = x;
    height = y;
}
int Rectangle::area(void){
    return width*height;
}
class Circle{
    int radius;
    public:
    Circle (int);
    Circle();
    
    int area() {return {(radius*radius)};}
};
Circle::Circle(){
    radius = 10;
}
Circle::Circle(int a){
    radius = a;
}
#include <iostream>
int main(){
    
    Rectangle rect2, rectb; // defualt contructor yapıcıdır. rect nesnesini yaratmıştır.nesnleri çalıştırıken bir şeylerin otomatik yerleştirmesini / tanımlamasını istiyorsak kurucu fonksiyonu kullanırız.
    rect2.set_values (3,4);
    rectb.set_values (5,6);
    cout<<" rect2 area: "<<rect2.area()<<endl;
    cout<<" rectb area: "<<rectb.area()<<endl;
    
    Circle circ (3);
    cout<<"Circle area: "<<circ.area()<<endl;
    Circle circb ();
    cout<<"Circleb area: "<<circb.area()<<"pi"<<endl;



    return 0;
}
