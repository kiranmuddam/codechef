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

    sort(nums.begin(), nums.end());

    int fsum = 0;
    int ssum = 0;


    for (int i = 0; i < nums.size(); i++) {
        if (i % 2 == 0) {
            fsum += nums[i];
        } else {
            ssum += nums[i];
        }
    }

    int pos  = 0;
    int neg = 0;

    
   int sums = fsum + ssum;


    if (sums % 2 == 0) {
        cout << "1" << endl;
    } else {
        cout << "2" << endl;
    }

}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testCasesCount;
    cin >> testCasesCount;
    while (testCasesCount--) {
         solveProblem();
    }
    
}