#include<iostream>
#include<string.h>
using namespace std;
class Pass{
    public:
    void PassChk(){
        string pass;
        cout<<"Enter Password : ";
        cin>>pass;
        int a = 0 , b = 0 , c = 0 , d = 0;
        for(int i= 0 ; i<= pass.length() ; i++){
            char ch = pass[i];
            if(ch>='A' && ch<='Z'){
                 a=1;
            }
            else if (ch>='a' && ch<='z'){
                 b=1;
            }
            else if(ch>='0' && ch<='9'){
                 c=1;
            }
            else if(ch=='!' || ch=='@' || ch=='#' || ch=='$' || ch=='&' || ch=='*' || ch=='%'){
                 d=1;
            }
        }
        if(a==1 && b==1 && c==1 && d==1){
            cout<<"Password is valid";
        }
        else{
            cout<<"Password Invalid";
        }
    }
};
int  main(){
    Pass p;
    p.PassChk();
    return 0;
}