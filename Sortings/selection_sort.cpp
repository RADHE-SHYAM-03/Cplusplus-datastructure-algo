#include <iostream>
using namespace std;

int main()
{
    int arr[5]={56,23,11,78,561};
    int n=5;
    for(int i=0;i<n;i++){
       int min=i;
       for(int j=i+1;j<n;j++){
           if(arr[j]<arr[min]){
               min=j;
           }
       }
       swap(arr[i],arr[min]);
    }
    for(int z=0;z<n;z++){
        cout<<arr[z]<<" ";
    }
}
