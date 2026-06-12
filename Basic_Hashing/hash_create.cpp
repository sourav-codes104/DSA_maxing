#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin>>size;
    map<int,int>mp;
    for (int i = 0; i < size; i++)
    {
        int key,value;
        cin>>key>>value;
        mp[key] = value;
    }
    
    for(auto x : mp){
        cout<<x.first<<"->"<<x.second<<'\n';
    }

    return 0;
}