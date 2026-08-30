#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
 
        vector<int>arr;
 
        arr.push_back(a);
        arr.push_back(b);
        arr.push_back(c);
 
        sort(arr.begin(),arr.end());
 
        int ans=arr[2]-arr[0];
 
        arr[2]=arr[1]+arr[0];
 
        ans=min(ans,arr[2]-arr[0]);
 
        cout<<ans<<endl;
    }
}