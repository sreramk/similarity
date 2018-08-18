#include<iostream>

using namespace std;

void cal(long int a[],long int b[],long int ll)
{long int n=1;
for(n=1;n<ll;n++)
b[n]=a[n+1]-a[n];
}
int main()
{
long int lim;
cout<<"type limit";cin>>lim;
long int i,j,r[100],w[100][100],b=0,t;
for(i=1;i<lim;i++)
for(j=1;j<lim+1;j++)
w[i][j]=0;
for(i=1;i<lim+1;i++)
cin>>r[i];
cal(r,w[1],lim);
for(i=1;i<lim-1;i++)
cal(w[i],w[i+1],lim);
long int g[100];
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
g[1]=r[lim];
for(i=2;i<lim+1;i++)
g[i]=w[i-1][lim+1-i];
cout<<"\n\ntype the no. of series to seek forward:";cin>>t;
for(i=1;i<t;i++)
      {for(j=1;j<lim;j++)
      g[lim-j]=g[lim+1-j]+g[lim-j];}
cout<<"\np:"<< g[1];
}



