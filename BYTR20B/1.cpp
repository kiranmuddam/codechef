#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N, K;
    cin >> N >> K;

    if (N > K) {
        cout << -1 << endl;
        return;
    }

    int tempK = K;

    unordered_map<char, int> frequencyMap;
    vector<char> charsMap;

    for (int i = 0; i < 26; i++) {
        char currChar = 97 + i;
        frequencyMap[currChar] = pow(2, i);
    }

    for (int i = 0; i < N; i++) {
        char currentChar = 97 + 0;
        charsMap.push_back(currentChar);
    }
    
    int currentValue = K - N;

    int residual = N;

    for (int i = 0; i < N; i++) {
        if (currentValue > 0) {
            int someValue = frequencyMap[charsMap[i]] + currentValue;
            int maxValue = floor(log2(someValue));
            currentValue = currentValue - pow(2, maxValue) + frequencyMap[charsMap[i]];
            charsMap[i] = 97 + maxValue;
        } else {
            break;
        }
    }

 string sequence;
    
        for (int i = 0; i < N; i++) {
            sequence += charsMap[i];
        }

        cout << sequence << endl;

}

int main(int argv, char *argc[]) {
	int testCases;
	cin >>  testCases;
	while (testCases--) {
		solve();
	}
}
