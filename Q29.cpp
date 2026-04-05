#include<iostream>
using namespace std;
class Temp{
    int a , min;
    public:
    void minTemp(){
        int arr[30];
        for(int i=0 ; i<30 ; i++){
            cout<<"Enter the Temperature of Day "<<i+1;
            cin>>arr[i];
        }
        a=arr[0];
        for(int i=0 ; i<30 ; i++){
            if(a>arr[i]){
                a=arr[i];
                min=a;
            }
            else{
                min=a;
            }
        }
        cout<<"Minimum Temperature is : "<<min;
    }
};
int main(){
    Temp t;
    t.minTemp();
    return 0;
}