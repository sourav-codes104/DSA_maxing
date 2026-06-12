//Reverse a number
//Time Complexity : O(log10(n))
//Space Complexity : O(1)

#include <bits/stdc++.h>
using namespace std;

void reverse_num(int num){
    int rev = 0;
    while(num){
        rev = (num%10)+rev*10;
        num/=10;
    }
    cout<<"Reverse -> "<<rev<<'\n';
}

int main() {

    int num;
    cin>>num;

    reverse_num(num);

    return 0;
}