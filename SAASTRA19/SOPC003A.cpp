#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int Tests;
    cin>>Tests;
    while(Tests--){
        int count=0;
        int n;
        cin>>n;
        vector<long double> Arr;
        for(int i=0;i<n;i++){
            long double num;
            cin>>num;
            Arr.push_back(num);
        }
        sort(Arr.begin(),Arr.end());
       int current=0;
            for(int i=0;i<n;i++){
                if(Arr[i+1]/2<=Arr[current]){
                    cout<<"im in 1"<<endl;
                    count++;
                    current++;
                            }                
                else{
                    cout<<"im in 2"<<endl;
                    current++;
                }
            }
        cout<<count<<endl;
    }
}