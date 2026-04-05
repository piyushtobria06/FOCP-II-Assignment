#include<iostream>
using namespace std;
class TempConv{
    private:
    float Ftemp,Ctemp;
    public:
    void ConvTemperature();
};
void TempConv ::ConvTemperature(){
    cout<<"Enter Farenheit Temperature : ";
    cin>>Ftemp;
    Ctemp=(Ftemp-32)*(5.0/9.0);
    cout<<"The Temperature in Celsius : "<<Ctemp;
}
int main(){
    TempConv a1;
    a1.ConvTemperature();
    return 0;
}