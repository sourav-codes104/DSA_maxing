// Code to find max and second max element in an arry
// Time Complexity: O(n)
// Space Complexity: O(1).

#include <bits/stdc++.h>
using namespace std;

pair<int,int>max_element(vector<int>&arr){
    int maxElement = arr[0];
    int secmaxElement = INT_MIN;
    for(int i =0; i<arr.size(); i++){
        if(arr[i] > maxElement){
            secmaxElement = maxElement;
            maxElement = arr[i];
        }
        if(arr[i]>secmaxElement and arr[i]!=maxElement){
            secmaxElement=arr[i];
        }
    }
    return {maxElement,secmaxElement};
}

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

   pair<int,int>ans = max_element(arr);
   cout<<"MAX ELEMENT -> "<<ans.first<<'\n';
   cout<<"SECOND MAX ELEMENT -> "<<ans.second<<'\n';


    return 0;
}