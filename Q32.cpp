#include<iostream>
#include<climits>
using namespace std;
class largnseclarg{
    int a , max , arr[5];
    int secmax=INT_MIN;
    public:
    void largest(){
        for(int i=0 ; i<5 ; i++){
            cout<<"Enter "<<i+1<<" number : ";
            cin>>arr[i];
        }
        a=arr[0];
        for(int i=0 ; i<5 ; i++){
            if(a>arr[i]){
                max=a;
            }
            else{
                a=arr[i];
                max=a;
            }
        }
        cout<<"Largest Number is : "<<max<<endl;
    }
    void seclargest(){
         for(int i=0 ; i<5 ; i++){
            if(arr[i]<max && arr[i]>secmax){
                secmax=arr[i];
            }
         }
         if(secmax==INT_MIN){
            cout<<"No Second Largest Element";
         }
         else{
            cout<<"Second Largest Element is "<<secmax;
         }
    }
};
int main(){
    largnseclarg lnl;
    lnl.largest();
    lnl.seclargest();
    return 0;
}