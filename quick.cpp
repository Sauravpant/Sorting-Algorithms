#include<iostream>
using namespace std;
int partition(int arr[],int low,int high)
{
  int pivot=arr[low];
  int i=low;
  int j=high;
  while(i<j)
  {
   while(arr[i]<=pivot&&i<=high-1)
   {
      i++;
   }
    while(arr[j]>pivot&&j>=low+1)
   {
      j--;
   }
   if(i<j)
   swap(arr[i],arr[j]);
  }
  swap(arr[low],arr[j]);
  return j;
}
void qs(int arr[],int low,int  high)
{
   
   if(low<high)
   {
      int pt=partition(arr,low,high);
      qs(arr,low,pt-1);
      qs(arr,pt+1,high);
   }
}
int main()
{
   int arr[]={5,3,9,1,0,3,7,10};
    int n = sizeof(arr) / sizeof(arr[0]);
   qs(arr,0,n-1);
  
   for(int i=0;i<n;i++)
   {
      cout<<arr[i]<<endl;
   }
   return 0;
}
