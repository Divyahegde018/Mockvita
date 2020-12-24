#include<iostream>
using namespace std;
int f(int x,int y){
    if(x<y){
        x=y;
 	y=x;}
    if(x==0||y==0)
        return 0;
    if(x==y)
        return 1;
    else
        return(f(x-y,y)+1);
}
int main()
{
 int maxl,minl,maxw,minw,res=0;
 cin>>maxl>>minl>>maxw>>minw;
 for(int i=minl;i<=maxl;i++)
{
 for(int j=minw;j<=maxw;j++)
    res=res+f(i,j);
}
cout<<res;
return 0;
}
