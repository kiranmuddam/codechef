/*
 * Author : Kiran Babu Muddam | Zirus
 * Email : kiraniiitn@gmail.com
 * LinkedIn Profile : https://www.linkedin.com/in/kiranbabumuddam/
 * CodeChef Profile : https://www.codechef.com/users/zirus
 * CodeForces Profile : https://codeforces.com/profile/zirus
 * Github Profile: https://github.com/kiranbabumuddam
 * Description : A competitive programming contest problem submission
 */
#include<bits/stdc++.h>
#pragma GCC optimize ("O2")
#pragma GCC optimize ("unroll-loops")
using namespace std;
int solveProblem(){
long long N,A,B,C,minDistance,friendPosition,distance;
minDistance=INT_MAX;
cin >> N >> A >> B >> C;
while(N--){
    cin >> friendPosition;
	distance=abs(friendPosition-A)+abs(friendPosition-B);
    minDistance=min(minDistance,distance);
    }
    cout << minDistance+C << endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testCasesCount;
    cin>>testCasesCount;
    while(testCasesCount--){
        solveProblem();
    }
}