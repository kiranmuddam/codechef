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
    long long int N,M;
    int pairsCount=N*M;
    cin>>N>>M;
    vector<vector< int > > Arr(N,vector< int >(M,1));
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            long long int temp=0;
            cin>>temp;
            Arr[i][j]=temp;
        }
    }
    long long int oddNumber=3,minElement;
    minElement=min(N,M);
    if(minElement<2){
        cout<<pairsCount<<endl;
        return 0;
    }
    int tempI=2;
    int tempJ=2;
    for(int i=0;i<tempI-1;i++){
        for(int j=0;j<tempJ-1;j++){
            
        }
        oddNumber=oddNumber+2;
        if(oddNumber>minElement){
        cout<<pairsCount<<endl;
        return 0;
    }
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testCasesCount;
    cin>>testCasesCount;
    while(testCasesCount--){
        solveProblem();
    }
    return 0;
}