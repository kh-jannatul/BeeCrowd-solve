#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,year,month,days;
    cin>>a;
    year=a/365;
    month=(a%365)/30;
    days=(a%365)%30;
    cout<<year<<" ano(s)\n"<<month<<" mes(es)\n"<<days<<" dia(s)"<<endl;
    return 0;

}
