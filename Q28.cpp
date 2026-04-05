#include<iostream>
using namespace std;
class Sum{
    int odd =0, even =0;
    public:
    void oddneven(){
        int arr[5];
        for(int i=0 ; i<=4 ; i++){
            cout<<"Enter "<<i+1<<" number";
            cin>>arr[i];
        }
        for(int i=0 ; i<=4 ; i++){
            if(arr[i]%2==0){
                even=even + arr[i];
            }
            else{
                odd=odd+arr[i];
            }
        }
        cout<<"ODD sum = "<<odd<<"\n";
        cout<<"Even sum = "<<even;
    }
};
int main(){
    Sum s;
    s.oddneven();
    return 0;
}