#include <bits/stdc++.h>
using namespace std;

int sum_N(int n, int sum = 0)
{
    if (n == 0)
        return sum;

    return sum_N(n - 1, sum += n);
}


int sum_P(int n){
    if(n==0)return 0;
    return n+sum_P(n-1);
}
int main()
{

    int n;
    cin>>n;
    int sum = 0;
    int ans = sum_N(n, sum);
    cout << ans<<'\n';
    int ans2 = sum_N(n);
    cout<<ans2<<'\n';

}