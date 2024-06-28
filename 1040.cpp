#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n1,n2,n3,n4,n5,avg,sum;
    cin>>n1>>n2>>n3>>n4;
    avg =(2*n1+3*n2+4*n3+n4)/10.0;
    cout<<"Media: "<<avg<<endl;

    if(avg>=7.0) cout<<"Aluno aprovado."<<endl;
    else if(avg>=5.0)
    {
        cin>>n5;
        cout<<"Nota do exame: "<<n5<<endl;

        sum = (avg+n5)/2.0;

        if(sum>=5.0) cout<<"Aluno aprovado."<<endl;
        else cout<<"Aluno reprovado."<<endl;

        cout<<"Media final: "<<sum<<endl;
    }
    else
    {
        cout<<"Aluno reprovado."<<endl;
    }
    return 0;
}
