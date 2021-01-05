#include <iostream>

using namespace std;

int main()
{   float w,h,B;
    cout << "enter your weight"<<endl;
    cin>>w;
    cout<<"enter your height"<<endl;
    cin>>h;
    B=w/(h*h);
    cout<<"the BMI of the person is "<<B<<endl;
    return 0;
}
