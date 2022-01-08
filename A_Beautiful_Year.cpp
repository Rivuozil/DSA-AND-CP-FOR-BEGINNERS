#include<bits/stdc++.h>
using namespace std;
 
int main(){
int y;
cin>>y;

for(int i=y+1;i<2*y;i++)
{   
    int flag=0,z=i;
    int a[10]={0};
     while(z!=0)
    {
        
        int digit=z%10;
        z=z/10;
        a[digit]++;
    }
    
    for(int j=0;j<10;j++)
    {
        if(a[j]>1)
        flag++;
    }

    if(flag==0)
    {cout<<i<<endl;
     break;}
    

}


return 0;
}