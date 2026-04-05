#include<iostream>
using namespace std;
class Divisible{
    int count=0;
    public:
    void chkDivisible(){
        int arr[5];
        for(int i=0 ; i<5 ; i++){
            cout<<"Enter "<<i+1<<" Element : ";
            cin>>arr[i];
        }
        for(int i=0 ; i<5 ; i++){
            if(arr[i]%3==0 && arr[i]%5==0){
                count++;
            }
        }
        cout<<"The number of elements divisible by both 3 & 5 is : "<<count;
    }
};
int main(){
    Divisible d;
    d.chkDivisible();
    return 0;
}