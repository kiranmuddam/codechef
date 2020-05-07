/*
 * Author : Kiran Babu Muddam | Zirus
 * Email : kiraniiitn@gmail.com
 * LinkedIn Profile : https://www.linkedin.com/in/kiranbabumuddam/
 * CodeChef Profile : https://www.codechef.com/users/zirus
 * CodeForces Profile : https://codeforces.com/profile/zirus
 * Github Profile: https://github.com/kiranbabumuddam
 * Description : A competitive programming contest problem submission
 */
// used stackoverflow code for NCR implementation : https://stackoverflow.com/questions/11809502/which-is-better-way-to-calculate-ncr
#include<bits/stdc++.h>
#pragma GCC optimize ("O2")
#pragma GCC optimize ("unroll-loops")
using namespace std;
unsigned long long int C(unsigned long long n, unsigned long long int r) {
    if(r > n - r) r = n - r;
    unsigned long long ans = 1;
    unsigned long long int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
int solveProblem(){
unsigned long long int N,M,NCR;
cin>>N>>M;
NCR=C(M,N);
unsigned long long int value=pow(M,N)-NCR;
cout<<value%1000000007<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testCasesCount;
    cin>>testCasesCount;
    while(testCasesCount--){
        solveProblem();
    }
}