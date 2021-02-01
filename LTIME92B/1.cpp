#include<bits/stdc++.h>
#pragma GCC optimize ("O2")
#pragma GCC optimize ("unroll-loops")
using namespace std;

void solveProblem() {
    int N;
    cin >> N;
    vector<int> nums;

    for (int i = 0; i < N; i++) {
        int curr;
        cin >> curr;
        nums.push_back(curr);
    }

    int count = 0;
    int count1 = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] % 2 != 0) {
            count++;
        } else {
            count1++;
        }
    }
    cout << min(count, count1) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testCasesCount;
    cin >> testCasesCount;
    while (testCasesCount--) {
         solveProblem();
    }
    
}