#include <bits/stdc++.h> 
using namespace std; 

#pragma GCC optimize ("O2")
#pragma GCC optimize ("unroll-loops")

const int numMax = 1000000; 

vector<int> sieve (numMax + 1, 0);
void buildsieve() 
{ 
	bool prime[numMax + 1]; 
	memset(prime, true, sizeof(prime)); 
    prime[0] = prime[1] = false;
	for (int p = 2; p * p <= numMax; p++) { 
		if (prime[p] == true) { 
			for (int i = p * 2; i <= numMax; i += p) 
				prime[i] = false; 
		} 
	}
sieve[5] = 1;
int lastValue = 1;

for (int i = 6; i <= numMax; i++) {
    if (prime[i] && prime[i - 2]) {
        lastValue++;
        sieve[i] = lastValue;
    } else {
        sieve[i] = lastValue;
    }
}

} 

int query(int maxnum) 
{ 
	return sieve[maxnum]; 
} 

void solveProblem() {
    
    int N;
    cin >> N;

    int totalPrimeCount = query(N);

    cout << totalPrimeCount << endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testCasesCount;
    buildsieve();
    cin>>testCasesCount;
    while(testCasesCount--){
        solveProblem();
    }
}