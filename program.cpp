#include<iostream>
using namespace std;
int main()
{
  int a[50],n,sum,j,i;
  cout<<"enter the size of the array"<<endl;
  scanf("%d",&n);
  cout<<"enter the elements of an array"<<endl;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<"enter the any number to find its equivalent sum in an array"<<endl;
  cin>>sum;
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(sum==(a[i]+a[j]))
      {
      cout<<"sum is found in an array"<<endl<<a[i]<<"\t"<<a[j]<<endl;
      exit(0);
      }
    }
  }
  cout<<"sum is found in an array"<<endl;
  return 0;
  }
