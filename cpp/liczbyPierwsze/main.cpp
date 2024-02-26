#include <iostream>

using namespace std;
bool czy_pierwsza(int liczba){
if (liczba<=1){
return false;
}
for(int i=2;i*i<=liczba;++i){
if(liczba %i==0){
return false;
}
}
return true;
}
int main(){
cout<<" liczby pierwsze:"<<endl;
int liczba=2;
int licznik=0;
while(licznik<200){
if(czy_pierwsza(liczba)){
cout<<liczba<<"";
++licznik;
}
++liczba;
}cout <<endl;
return 0;
}
