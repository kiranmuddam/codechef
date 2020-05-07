#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,h,y1,y2,l,x,test;
    cin>>test;
    for(int i=0;i<test;i++){
        int b=0;
        cin>>n>>h>>y1>>y2>>l;
        for(int j=0;j<n;j++){
            cin>>t>>x;
            if(l>=2){
            if(t==1 && (h-y1)<=x && l>0){
                b++;
            }
            if(t==1 && (h-y1)>x && l>0){
                l--;
                b++;
            }
            if(t==2 && (y2>=x) && l>0){
                b++;
            }
            if(t==2 && (y2<x) && l>0){
                l--;
                b++;
            }
        }else if(l==1){
            if(t==1 && (h-y1)<=x){
                b++;
            }
            if(t==1 && (h-y1)>x){
                l--;
            }
            if(t==2 && y2>=x){
                b++;
            }
            if(t==2 && y2<x){
                l--;
            }
        }
        
    }
    cout<<b<<endl;
    }
}