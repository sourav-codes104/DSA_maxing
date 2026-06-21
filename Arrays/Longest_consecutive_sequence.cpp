//Longest Consecutive Sequence
//TC: O(n) average
//SC: O(n) 


#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size;
    cin >> size;
    vector<int> arr;
    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    unordered_set<int> st(arr.begin(), arr.end());
    int maxLen = 0;
    for(auto x : st){
        if(st.find(x-1)==st.end()){
            int current = x;
            int length = 1;
            while(st.find(current+1)!=st.end()){
                current++;
                length++;
            }
            maxLen = max(maxLen,length);
        }
    }
    cout<<maxLen<<" "<<'\n';

    return 0;
}