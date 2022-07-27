#include<bits/stdc++.h>
using namespace std;
 
int main(){
int t;
cin>>t;
for(int g=0;g<t;g++){
long int a,b,n;
cin>>a>>b>>n;
if(a%b==0)
cout<<-1<<endl;
/*{for(int i=n;;i++)
{
    if(i%b!=0&&i%a==0)
    {
        cout<<i<<endl;
        break;
    }
}
}
}*/

else
{
    if(n%a!=0)
    n=(n/a+1)*a;
    while(n%b==0)
    n=n+a;
    cout<<n<<endl;
}
}

return 0;
}