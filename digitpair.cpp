#include<iostream>
using namespace std;
int bitscore(int n){
 int a,b,c,score,smallest,largest;
 a=n%10;
 n/=10;
 b=n%10;
 n/=10;
 c=n%10;
 n/=10;
 smallest=(a<b)?a:b;
 smallest=(smallest<c)?smallest:c;
 largest=(a>b)?a:b;
 largest=(largest>c)?largest:c;
 score=largest*11+smallest*7;
 return (score%100);
}
 
int pairs(int s[],int n){
 int sig[500],i,j,msb,count=0;
 for(i=0;i<n;i++)
  sig[i]=0;
 for(i=0;i<n;i=i+2)
 {
 	msb=s[i]/10; 
	for(j=i+2;j<n;j=j+2)
	{
		if(msb==s[j]/10){
			if(sig[msb]<2){ 
			sig[msb]++;
			}
		    }
		}
	}
for(i=1;i<n;i=i+2)
 {
 	msb=s[i]/10; 
	for(j=i+2;j<n;j=j+2)
	{
		if(msb==s[j]/10){
			if(sig[msb]<2){ 
			sig[msb]++;
			}
		    }
		}
	}
for(i=0;i<n;i++)
{
 count+=sig[i];
}
return count;
}
int main()
{
 int n,a[500],s[500],pair,i;
 cin>>n;
 for(i=0;i<n;i++)
 {
 cin>>a[i];
 s[i]=bitscore(a[i]);
 }
 for(i=0;i<n;i++)
  cout<<s[i]<<" "<<endl;

 pair=pairs(s,n);
 cout<<pair;
return 0;
}
