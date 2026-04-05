#include<iostream>
#include<string.h>
using namespace std;
class User{
    string username ; 
    int a=0;
    public:
    void chkName(){
        cout<<"Enter Username : ";
        getline(cin,username);
        for(int i=0 ; i<username.length() ; i++){
            if(!((username[i]>='A'&& username[i]<='Z')||(username[i]>='a' && username[i]<='z')||(username[i]>='0' && username[i]<='9'))){
                a=1;
                break;
            }
            
        }
        if(a==1){
            cout<<"Username is Invalid";
        }
        else{
            cout<<"Username is Valid";
        }
    }
};
int main(){
    User u;
    u.chkName();
    return 0;
}