#include<iostream>
using namespace std;
class typeChar{
    private:
    char chr;
    public:
    void type();
};
void typeChar :: type(){
    cout<<"Enter Character : ";
    cin>>chr;
    if(chr=='0' || chr=='1' || chr=='2' || chr=='3' || chr=='4' || chr=='5' || chr=='6' || chr=='7' || chr=='8' || chr=='9'){
        cout<<"Number";
    }
    else if(chr=='a' || chr=='e' || chr=='i' || chr=='o' ||chr=='u'){
        cout<<"Vowels";
    }
    else{
        cout<<"Consonants";
    }
}
int main(){
    typeChar tc;
    tc.type();
    return 0;
}