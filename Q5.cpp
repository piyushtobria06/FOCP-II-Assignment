#include<iostream>
using namespace std;
class Swap{
    private:
    int first , second;
    public:
    void swapnum();
};
void Swap :: swapnum(){
    cout<<"Enter First Number : ";
    cin>>first;
    cout<<"Enter Second Number : ";
    cin>>second;
    cout<<"Numbers After Swap"<< endl;
    first = first * second;
    second = first/second;
    first = first/second;
    cout<<"First Number After Swap : "<<first<<endl;
    cout<<"Second Number After Swap : "<<second;
}
int main(){
    Swap s;
    s.swapnum();
    return 0;
}
