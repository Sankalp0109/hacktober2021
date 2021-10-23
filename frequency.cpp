#include<iostream>
using namespace std;
void fun(int arr[],int n){
    int curr_val=arr[0];
    int count=1,i;
    for( i=1;i<n;i++){
        if(arr[i]==curr_val){
            count++;
        }
       
        else{
            cout<<curr_val<<" "<<count<<endl;
            count=1;
            curr_val=arr[i];
        }
        

    }
      if(i==n){
           cout<<curr_val<<" "<<count<<endl;
       }

}
int main(){
    int arr[]={10,10,10,20,20,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    fun(arr,n);
    return 0;
}
