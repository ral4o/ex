#include<iostream>
using namespace std;
int main()
{
   int i,n=7,j,buf,counter=0;
   int a[7]={10,-15,12,-6,4,3,155};
   for(i=0;i<7 ;i++)
   {
       if(a[i]>0 && a[i]<=100 )
       {
           counter++;
       }
   }
   for(i=0;i< n;i++)
   for(j=n-1;j >i;j--)
      if(a[j-1] >a[j])
       {
          buf=a[j-1];
          a[j-1]=a[j];
          a[j]=buf;
       }

    cout<<"Total  numbers: "<<counter<<endl;
 return 0;
}
