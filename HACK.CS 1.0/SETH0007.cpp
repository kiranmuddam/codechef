#include<iostream>
#include<bits/stdc++.h> 
#include<cmath>
using namespace std; 
int exout=1;
int return_prime_product(int prime,int n){
    for(int i=4;i>=0;i--){
        int pows=pow(prime,i);
        if((n%pows)==0){
            return pow(prime,i);
        }
    }
    
}
void sieveOfEratosthenes(int N, int s[]) 
{ 
    vector <bool> prime(N+1, false); 
    for (int i=2; i<=N; i+=2) 
        s[i] = 2; 
    for (int i=3; i<=N; i+=2) 
    { 
        if (prime[i] == false) 
        { 
            s[i] = i; 
            for (int j=i; j*i<=N; j+=2) 
            { 
                if (prime[i*j] == false) 
                { 
                    prime[i*j] = true; 
                    s[i*j] = i; 
                } 
            } 
        } 
    } 
} 
void generatePrimeFactors(int N,int n) 
{ 
    int s[N+1]; 
    sieveOfEratosthenes(N, s); 
  
    int curr = s[N];  
    int cnt = 1;
    while (N > 1) 
    { 
        N /= s[N]; 
        if (curr == s[N]) 
        { 
            cnt++; 
            continue; 
        } 
  
        //printf("%d ", curr); 
        exout=exout*return_prime_product(curr,n);
        curr = s[N]; 
        cnt = 1; 
    } 

} 

int main() 
{ 
    int c,n={0};
    cin>>c>>n;
    int N = c; 
    generatePrimeFactors(N,n); 
    cout<<exout<<endl;
    return 0; 
} 