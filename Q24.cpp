#include<iostream>
using namespace std;
class Loop{
    public:
    void pattern(){
        for(int i=1 ;i<=5; i++){
            char a='A';
            for(int j=1 ; j<=i ; j++){
                cout<<a++;
            }
            cout<<"\n";
        }
    }
};
int main(){
    Loop l;
    l.pattern();
    return 0;
}