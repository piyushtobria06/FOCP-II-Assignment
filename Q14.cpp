#include<iostream>
using namespace std;
class Arithmetic{
    private:
    int num1 , num2 ;
    float num3 , num4;
    public:
    void addition();
    void subtraction();
    void multiplication();
    void division();
};
void Arithmetic :: addition(){
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout<<"The addition of these two numbers is : "<<num1+num2<<endl;
}
void Arithmetic :: subtraction(){
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout<<"The subtraction of these two numbers is : "<<num1-num2<<endl;
}
void Arithmetic :: multiplication(){
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout<<"The multiplication of these two numbers is : "<<num1*num2<<endl;
}
void Arithmetic :: division(){
    cout<<"Enter the first number : ";
    cin>>num3;
    cout<<"Enter the second number : ";
    cin>>num4;
    cout<<"The quotient of these two numbers is : "<<float(num3/num4)<<endl;
}
int main(){
    int x;
    Arithmetic a;
    while(1){
        cout<<"1:Addition"<<endl<<"2:Subtraction"<<endl<<"3:Multiplication"<<endl<<"4:Division"<<endl<<"Exit"<<endl;
        cout<<"Enter choice : ";
        cin>>x;
        if(x==1){
            a.addition();
        }
        else if(x==2){
            a.subtraction();
        }
        else if(x==3){
            a.multiplication();
        }
        else if(x==4){
            a.division();
        }
        else{
            break;
        }
    }
    return 0;
}