#include<iostream>
#include<string.h>
using namespace std;
class Stringchange{
    string str, chngd;
    public:
    void changes(){
        cout<<"Enter String : ";
        getline(cin,str);
        int words = 0 , special = 0 , digits = 0 ;
        int space = 1;
        int valid = 1;
        for(int i=0 ; i<str.length() ; i++){
            if(str[i]==' '){
                if(space == 0){
                    chngd+=' ';
                    space = 1;
                }
            }
            else{
                chngd+=str[i];
                space = 0;
            }
        }
        for(int i=0;i<chngd.length();i++){
            if(i==0){
                if(chngd[i]>='a' && chngd[i]<='z')
                    chngd[i] = chngd[i]-32;
            }
            else{
                if(chngd[i]>='A' && chngd[i]<='Z')
                    chngd[i] = chngd[i]+32;
            }
        }
        for(int i=0; i<chngd.length();i++){

            if(chngd[i]>='0' && chngd[i]<='9')
                digits++;

            if(!((chngd[i]>='A' && chngd[i]<='Z') ||
                 (chngd[i]>='a' && chngd[i]<='z') ||
                 (chngd[i]>='0' && chngd[i]<='9') ||
                 chngd[i]==' ')){
                     special++;
                     valid=0;
                 }
        }
        if(chngd.length()>0)
            words=1;

        for(int i=0;i<chngd.length();i++){
            if(chngd[i]==' ')
                words++;
        }
        cout<<"\nNormalized String: "<<chngd<<endl;
        cout<<"Total Words: "<<words<<endl;
        cout<<"Total Digits: "<<digits<<endl;
        cout<<"Total Special Characters: "<<special<<endl;

        if(valid==1)
            cout<<"String is VALID"<<endl;
        else
            cout<<"String is INVALID"<<endl;
    }
};
int main(){
    Stringchange sc;
    sc.changes();
    return 0;
}