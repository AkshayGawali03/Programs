#include<iostream>
using namespace std;

float Calculate(float Marks, float Outof = 100)
{
    float Percantage = ((Marks / Outof) * 100);
    return Percantage;
}

int main()
{
    float Ans = 0.0f;

    Ans = Calculate(86,100);
    cout<<"Percantage : "<<Ans<<"\n";

    Ans = Calculate(86);
    cout<<"Percantage : "<<Ans<<"\n";

    Ans = Calculate(320,400);
    cout<<"Percantage : "<<Ans<<"\n";

    return 0;
}