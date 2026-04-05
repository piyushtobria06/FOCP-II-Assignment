#include<iostream>
using namespace std;
class Tag{
    private:
    int numID;
    int ID;
    public:
    void getData();
    void giveTag();
};
void Tag :: getData(){
    cout<<"Enter Number of ID's : ";
    cin>>numID;
}
void Tag :: giveTag(){
    for(int i=1 ; i<=numID ; i++){
        cout<<"Enter ID";
        cin>>ID;
        if(ID%3==0 && ID%5==0){
            cout<<"Buzz"<<endl<<"Fuzz"<<endl;
        }
        else if(ID%3==0){
            cout<<"Buzz"<<endl;
        }
        else if(ID%5==0){
            cout<<"Fuzz"<<endl;
        }
        else{
            cout<<"Error , not divisible by either 3 or 5"<<endl;
        }
    }
}
int main(){
    Tag tg;
    tg.getData();
    tg.giveTag();
    return 0;
}