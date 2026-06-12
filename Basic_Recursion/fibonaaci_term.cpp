//Time Complexity : O(2^n)
//Note : For large values like 40, 45, 50, this recursive version becomes very slow because the same Fibonacci terms are calculated repeatedly.
#include <bits/stdc++.h>
using namespace std;

int fib_term(int term){
    if(term==1)return 0;
    if(term==2)return 1;
    return fib_term(term-1)+fib_term(term-2);
}

int main() {

    int term;
    cin>>term;
    int ans = fib_term(term);
    cout<<ans;


    return 0;
}