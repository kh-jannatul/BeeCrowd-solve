#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,majorab,greatest;
    cin>>a>>b>>c;
    majorab=(a+b+abs(a-b))/2;
    cout<<majorab<<endl;
    greatest=(majorab+c+abs(majorab-c))/2;

    cout<<greatest<<" eh o maior"<<endl;
    return 0;
}

