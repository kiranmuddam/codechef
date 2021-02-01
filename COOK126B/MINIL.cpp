#include <bits/stdc++.h> 
using namespace std; 

#pragma GCC optimize ("O2")
#pragma GCC optimize ("unroll-loops")


void solveProblem() {
    vector< vector<char> > matrix;
    int N, M;
    cin >> N >> M;

    int even = 0;
    int odd = 0;

    for (int i = 0; i < N; i++) {
        vector<char> v1;
        for (int j = 0; j < M; j++) {
            char curr;
            cin >> curr;
            if (i % 2 == 0 && j % 2 == 0 && curr == '*') {
                even++;
            } else if (i % 2 != 0 && j % 2 != 0 && curr == '*') {
                even++;
            } else if (i % 2 == 0 && j % 2 != 0 && curr == '*') {
                odd++;
            } else if (i % 2 != 0 && j % 2 == 0 && curr == '*') {
                odd++;
            }

            v1.push_back(curr);
        }

        matrix.push_back(v1);
    }

    if (even >= odd) {
        if (N % 2 == 0 && M % 2 == 0) {
            cout << (N * (M / 2)) - max(even, odd) + min(even, odd) << endl;
        } else if (N % 2 == 0 && M % 2 != 0) {
            cout << ((N  / 2)* (M / 2)) + (N / 2 * (M / 2)) - max(even, odd) + min(even, odd) << endl; 
        } else if (N % 2 != 0 && M % 2 == 0) {
            cout << ((((N / 2) + 1) * (M / 2)) + ((N / 2) * (M / 2))) - max(even, odd) + min(even, odd) << endl; 
        } else {
            cout << ((((N / 2) + 1) * ((M / 2) + 1)) + ((N / 2) * (M / 2))) - max(even, odd) + min(even, odd) << endl; 
        }
    } else {
        if (N % 2 == 0 && M % 2 == 0) {
            cout << (N * (M / 2)) - max(even, odd) + min(even, odd) << endl; 
        } else if (N % 2 == 0 && M % 2 != 0) {
            cout << ((N / 2) * (M / 2)) + (N / 2 * ((M / 2) + 1)) - max(even, odd) + min(even, odd) << endl; 
        } else if (N % 2 != 0 && M % 2 == 0) {
            cout << ((((N / 2) + 1) * (M / 2)) + ((N / 2) * (M / 2))) - max(even, odd) + min(even, odd) << endl; 
        } else {
            cout << ((((N / 2) + 1) * ((M / 2))) + ((N / 2) * ((M / 2) + 1))) - max(even, odd) + min(even, odd) << endl; 
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
}