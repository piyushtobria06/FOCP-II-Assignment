#include<iostream>
using namespace std;
class Prime{
    private:
    int startlim , endlim , temp;
    public:
    void primeinrange(){
        cout<<"Enter Start Limit : ";
        cin>>startlim;
        cout<<"Enter End Limit : ";
        cin>>endlim;
        for(int i=startlim ; i<=endlim ; i++){
            temp=0;
            for(int j=2 ; j<i ; j++){
                if(i%j==0){
                    temp=1;
                break;
                }
            }
        if(temp==0){
            cout<<i<<endl;
        }    
        }
    }
};
int main(){
    Prime p;
    p.primeinrange();
    return 0;
}