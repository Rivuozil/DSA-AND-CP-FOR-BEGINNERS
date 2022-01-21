#include<bits/stdc++.h>
using namespace std;
 
int main(){
int t;
cin>>t;
for(int g=0;g<t;g++){
int m1,m2,m3,m4,m5,m6;
cin>>m1>>m2>>m3;
cin>>m4>>m5>>m6;
int sum1=m1+m2+m3;
int sum2=m4+m5+m6;

if(sum1>sum2)
cout<<"DRAGON\n";
else if(sum1<sum2)
cout<<"SLOTH\n";
else
{
    if(m1>m4)
    cout<<"DRAGON\n";
    else if(m1<m4)
    cout<<"SLOTH\n";
    else
    {
        if(m2>m5)
        cout<<"DRAGON\n";
        else if(m2<m5)
        cout<<"SLOTH\n";
        else
        cout<<"TIE\n";
    }
}
}
return 0;
}