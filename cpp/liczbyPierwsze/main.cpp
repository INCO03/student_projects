#include <iostream>

using namespace std;
bool czy_pierwsza(int n)
{
if(n<2)
return false;
for(int i=2;i*i;i++)
if(n%i==0)
return false;
return true;
}
int main()
{
int n;
cout<<"podaj liczbe:";
cin>>n;
if(czy_pierwsza(n))
cout<<"liczba"<<n<<"jest pierwsza"<<endl;
else
cout<<"liczba"<<n<<"nie jest pierwsza"<<endl;

return 0;
}
