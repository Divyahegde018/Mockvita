#include<stdio.h>
int isequal(int a[],int n);
int main()
{
 int i,a[50],s[50],n,t;
 scanf("%d",&t);
while(t--)
{
 int count=1;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {	
	scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {	
   s[i]=a[i];
 }

 while(!isequal(a,n))
 {
	for(i=0;i<n;i++){
 		a[i]=s[a[i]-1];
	}
	count++;
 }
 printf("%d\n",count);
}
 return 0;
}
int isequal(int a[],int n)
{
 int i;
 for(i=0;i<n;i++){
   if(a[i]!=i+1)
	break;
  }
 if(i==n)
	return 1;
 else
 	return 0;
}
