/*
 * Author : Kiran Babu Muddam | Zirus
 * Email : kiraniiitn@gmail.com
 * LinkedIn Profile : https://www.linkedin.com/in/kiranbabu-muddam/
 * CodeChef Profile : https://www.codechef.com/users/zirus
 * CodeForces Profile : https://codeforces.com/profile/zirus
 * Github Profile: https://github.com/Kiranbabu-Muddam
 * Description : A competitive programming contest problem submission
 */
#include<bits/stdc++.h>
#pragma GCC optimize ("O2")
#pragma GCC optimize ("unroll-loops")
using namespace std;
int solveProblem(){
    int s,w1,w2,w3;
    cin>>s>>w1>>w2>>w3;
    if((w1+w2+w3)<=s){
        cout<<1<<endl;
    }
    else if((w1+w2)<=s || (w2+w3)<=s){
        cout<<2<<endl;
    }
    else{
        cout<<3<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testCasesCount;
    cin>>testCasesCount;
    while(testCasesCount--){
        solveProblem();
    }
}