#include<bits/stdc++.h>
#pragma GCC optimize ("O2")
#pragma GCC optimize ("unroll-loops")
using namespace std;

void solveProblem() {
    int N;
    cin >> N;
    string curr;
    cin >> curr;
    int ops = 0;
    int start = 0;
    int end = curr.size() - 1;
    while (start < end) {
        while (curr[start] > curr[end]) {
            ops++;
            start++;
        }

        
        while (start < end) {
            while (curr[start - 1] > curr[start]) {
                start++;
                ops++;
            }

            while (curr[end + 1] < curr[end]) {
                end--;
                ops++;
            }
        } 
    }

    if ((curr.size() - ops) % 2 != 0) {
         if (curr[start - 1] > curr[start] || curr[end + 1] < curr[end]) {
                ops++;
            }
    }

    cout << ops << endl;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testCasesCount;
    cin >> testCasesCount;
    while (testCasesCount--) {
         solveProblem();
    }
    
}