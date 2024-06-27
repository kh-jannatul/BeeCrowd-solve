#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,h,ft,tw,t,f,to,o;
    cin>>a;
    cout<<a<<endl;

    h=a/100;
    a=a-h*100;
    ft=a/50;
    a=a-ft*50;
    tw=a/20;
    a=a-tw*20;
    t=a/10;
    a=a-t*10;
    f=a/5;
    a=a-f*5;
    to=a  /2;
    a=a-to*2;
    o=a;
    cout<<h<<" nota(s) de R$ 100,00"<<endl;
    cout<<ft<<" nota(s) de R$ 50,00"<<endl;
    cout<<tw<<" nota(s) de R$ 20,00"<<endl;
    cout<<t<<" nota(s) de R$ 10,00"<<endl;
    cout<<f<<" nota(s) de R$ 5,00"<<endl;
    cout<<to<<" nota(s) de R$ 2,00"<<endl;
    cout<<o<<" nota(s) de R$ 1,00"<<endl;

    return 0;
}

