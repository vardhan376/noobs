#include <iostream>

using namespace std;
   
   int insertatposarray(int arr[],int n,int key,int pos)
   { 
       for(int i=n-1;i>=pos;i--)
       {
           arr[i+1]=arr[i];
           arr[pos]=key;
       }
   }  
       

int main()
{
     int arr[20]={12,34,56,23,54,16};
     int capacity=sizeof(arr)/sizeof(arr[0]);
     int n=6;
     int key=26;
     int pos=2;
     cout<<"before insertion"<<endl;
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
         
     }
     insertatposarray(arr,n,key,pos);
      n++;
      cout<<"after sorting"<<endl;
   
 for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
         
     }


    return 0;
}
