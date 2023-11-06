#include <iostream>
// şablan fonksiyon
/* şblon fonksiyon; fonksiyonun ütrden bağımsız çalışmasıdır.
fonksiyona gelen ya ad giden parametre genelleştirilmiş(şablonlaştırılmış) olabilir.

*/


using namespace std;
template <typename T,typename U>
// T U  farklı türlere karşılık gelecek isimlerdir
void foo( T a, U b)
{
cout<< 2*a << endl;
cout<< 3.0 * b;
}
int main(){
    int a=4; 
    float x=1.1;
    foo(a,x);
    return 0; 
}