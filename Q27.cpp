#include<iostream>
using namespace std;
class Price{
    int a , max;
    public:
    void maxPrice(){
        int arr[10];
        for(int i=0 ; i<10 ; i++){
            cout<<"Enter the cost of the "<<i<<" item";
            cin>>arr[i];
        }
        a=arr[0];
        for(int i=0 ; i<10 ; i++){
            if(a>arr[i]){
                max=a;
            }
            else{
                a=arr[i];
                max=a;
            }
        }
        cout<<"Max Amount is : "<<max;
    }
};
int main(){
    Price p;
    p.maxPrice();
    return 0;
}