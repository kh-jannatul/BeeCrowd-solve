#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,n,r1,r2;
    cin>>a>>b>>c;
    n=b*b-4*a*c;
    if(a!=0 && n>=0)
    {
      n=sqrt(n);
      r1=(-b+n)/(2*a);
      r2=(-b-n)/(2*a);
      cout<<fixed<<setprecision(5)<<"R1 = "<<r1<<"\nR2 = "<<r2<<endl;
      }
      else cout<<"Impossivel calcular"<<endl;
    return 0;
}
