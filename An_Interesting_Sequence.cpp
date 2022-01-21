#include<bits/stdc++.h>
using namespace std;
 
int main(){
int t;
cin>>t;
for(int g=0;g<t;g++){
long int k;
cin>>k;

long int i=0;
for(k;;k=k/2)
{
    if(k%2!=0)
    break;
    else
    i++;
}

cout<<i<<endl;
}
return 0;
}