#include <iostream>

using namespace std;

int main() {

    long long first=1;
    long long second=2;
    long long sum;
    long long even_valued_sum=2;
    long long maximum=4e6;

    while (first<maximum){

        sum=first+second;
        if (sum%2==0) {
            even_valued_sum=even_valued_sum+sum;
        }
        first=second;
        second=sum;
    }

    cout<<even_valued_sum<<endl;





}

