#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int small_list[3];
int cnt=0;
int DupCount(int ar[],int sz){
    for(int i = 0; i < sz; i++){
        for(int j = i+1; j < sz; j++){
            if(ar[i] == ar[j]){
                cnt++;
                break;
            }
        }
    }
    return cnt;
}
int primeCount(int arr[], int n) 
{ 
    int max_val = *max_element(arr, arr+n); 
    vector<bool> prime(max_val + 1, true); 
    prime[0] = false; 
    prime[1] = false; 
    for (int p = 2; p * p <= max_val; p++) { 
        if (prime[p] == true) { 
            for (int i = p * 2; i <= max_val; i += p) 
                prime[i] = false; 
        } 
    }
    int count = 0; 
    for (int i = 0; i < n; i++)  
        if (prime[arr[i]]) 
            count++;     
  
    return count; 
     }
void smalls(int arr[], int arr_size) 
{ 
    int i, first, second, third; 
    third = first = second = INT_MAX; 
    for (i = 0; i < arr_size ; i ++) 
    { 
        if (arr[i] < first) 
        { 
            third = second; 
            second = first; 
            first = arr[i]; 
        } 
        else if (arr[i] < second) 
        { 
            third = second; 
            second = arr[i]; 
        } 
   
        else if (arr[i] < third) 
            third = arr[i]; 
    } 
    small_list[0]=first;
    small_list[1]=second;
    small_list[2]=third;     
} 
int main(){
    int n;
    cin>>n;
    int arr[n]{0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    smalls(arr,n);
    int primes=primeCount(arr,n);
    int dupcount = DupCount(arr,n);
    cout<<"Prime count is "<<primes<<endl;

}