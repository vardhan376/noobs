#include <iostream>

using namespace std;
   
   int insortedarray(int arr[],int n,int key,int capacity)
   {
       if(n>=capacity)
       {
           return n;
       }
      arr[n]=key;
      return(n+1);
   }

int main()
{
     int arr[20]={12,34,56,23,54,16};
     int capacity=sizeof(arr)/sizeof(arr[0]);
     int n=6;
     int key=26;
     cout<<"before insertion"<<endl;
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
         
     }
   int ans=  insortedarray(arr,n,key,capacity);
     
      cout<<"after sorting"<<endl;
   
 for(int i=0;i<ans;i++)
     {
         cout<<arr[i]<<" ";
         
     }


    return 0;
}
