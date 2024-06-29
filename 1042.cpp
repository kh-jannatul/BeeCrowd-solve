
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[3],arr[3],i;
    cin>>ar[0]>>ar[1]>>ar[2];
    arr[0]=ar[0];
    arr[1]=ar[1];
    arr[2]=ar[2];
    sort(arr,arr+3);
    for(i=0;i<3;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"\n";
    for(i=0;i<3;i++)
    {
        cout<<ar[i]<<endl;
    }


    return 0;
}


