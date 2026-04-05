#include<iostream>
using namespace std;
class Maximum{
    private:
    int n , temp=0 , num;
    public:
    void maxnum();
};
void Maximum :: maxnum(){
    cout<<"Enter N Number : ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        cout<<"Enter "<< i <<" Number : ";
        cin>>num;
        if(temp<num){
            temp=num;
        }
    }
    cout<<"The MAX Number is : "<<temp;
}
int main(){
    Maximum m;
    m.maxnum();
    return 0;
}