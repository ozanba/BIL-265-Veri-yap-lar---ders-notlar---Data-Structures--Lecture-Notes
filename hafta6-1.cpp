#include <iostream>
using namespace std;
// const değerler ve const fonksiyonlar
/*
diğer veri tiplerinde olduğu gibi bir nersene const olarak tanımlanabilir
const Nokta A(10,20);
bunun anlakı nesnenin veri alanlarının program boyunca doğrudan ve ya dolaylı olarakdeğişmeyeceğidir
derleyiciler sabit tanımlanan nenelerin içerikerinin değişmemesi için bu nesnelerin sabit olmayan üye fonksiyonlarının çağırılmaasına izin vermezler
sınıfın 
*/
class Nokta{
    public:
        Nokta(int a, int b){
            x=a;
            y=b;

        }
        void yaz() const
            {cout<<x<<" "<<y<<endl;}
    //fonksiyio-yontnun yapısı uygunsa muhakkak const yapın.
    private:
        int x;
        int y;

};
int main(){
    //SABİT NESNELER SADECE SABİT FONKSİYONLARI ÇAĞIRABİLİR.
    // non-const nesneler const ve nonconst da çalıştırabilir.
    const Nokta Nesne1 (30,40);
    Nesne1.yaz();

    return 0;
}
//sınıfın verileri üzerinde dğişiklik yapmayan fonksiyonların sabit olarak çağırıl
//aksi olmadıkça nesnler fonksiyona referans operatörü ile aktarılmalıdır.
//nesnlererin fonksiyonlara değer olarak aktarılması programı yavaşlatır.