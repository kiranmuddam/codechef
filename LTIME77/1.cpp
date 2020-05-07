#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        vector<int> arr;
        cin>>n;
        for(int j=0;j<n;j++){
            int s=0;
            cin>>s;
            arr.push_back(s);
        }
        sort(arr.begin(), arr.end());
        int c=0;
        int arrs[3]={0,0,0};
        for(int j=(n/4);j<n;j=j+(n/4)){
            if(arr[j]==arr[j-1]){
                printf("%d",-1);
                printf("\n");
                break;
            }
            arrs[c++]=arr[j];
        }
        if(arrs[2]!=0){
            printf("%d %d %d",arrs[0],arrs[1],arrs[2]);
            printf("\n");
        }
   
    }
}