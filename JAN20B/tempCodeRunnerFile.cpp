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
    unsigned long long int N,A,B,C,D,E,S,myLimit;
    cin>>N>>A;
    myLimit=pow(10,N);
    S=(3*(pow(10,N))+2)-(myLimit-A);
    cout<<S<<endl;
    fflush(stdout);
    cin>>B;
    C=(myLimit+1)-B;
    cout<<C<<endl;
    fflush(stdout);
    cin>>D;
    E=(myLimit+1)-D;
    cout<<E<<endl;
    fflush(stdout);
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testCasesCount;
    cin>>testCasesCount;
    while(testCasesCount--){
        solveProblem();
    }
}