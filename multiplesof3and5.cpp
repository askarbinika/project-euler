#include <iostream>

using namespace std;

int main(){

    int num1=3;
    int num2=5;
    int sum=0;
    int maxvalue=1000;

    for (int i=0; i<maxvalue; i++){

        if ((i%3==0) || (i%5==0)) {
            sum=sum+i;
            }
    }
    cout<<sum<<endl;



}
