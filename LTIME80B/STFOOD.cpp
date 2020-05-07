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
    int Number,maxiumumNum = 0;
		cin>>Number;
		int pi,vi,si;
		for(int i=0;i<Number;i++){
			int currentMax = 0;
			cin>>si>>pi>>vi;
			si +=1;
			currentMax = pi/si;
			currentMax = currentMax*vi;
			if (currentMax>maxiumumNum){
				maxiumumNum = currentMax;
			}
		}
		cout<<maxiumumNum<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testCasesCount;
    cin>>testCasesCount;
    while(testCasesCount--){
        solveProblem();
    }
}