#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2,a,b,ans;
    cin>>x1>>y1;
    cin>>x2>>y2;

    a=(x2-x1)*(x2-x1);
    b=(y2-y1)*(y2-y1);
    ans=sqrt(a+b);

    cout<<fixed<<setprecision(4)<<ans<<endl;
    return 0;

}
