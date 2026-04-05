#include<iostream>
using namespace std;
class Sal{
    int tot=0;
    float avg;
    int arr[10];
    public:
    void getData(){
        for(int i=0 ; i<10 ;i++){
            cout<<"Enter Employee "<<i+1<<" Salary : ";
            cin>>arr[i];
        }
    }
    void Totsal(){
        for(int i=0 ; i<10 ; i++){
            tot+=arr[i];
        }
        cout<<"Total Salary is "<<tot<<endl;
    }
    void Avgsal(){
        cout<<"Average Salary is "<<tot/10;
    }
};
int main(){
    Sal s;
    s.getData();
    s.Totsal();
    s.Avgsal();
    return 0;
}