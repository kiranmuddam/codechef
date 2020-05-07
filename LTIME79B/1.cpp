#include<bits/stdc++.h>
using namespace std;
void solveProblem(){
    string stringOfAlphabets;
    cin>>stringOfAlphabets;
    int count=2,actualStringLength=0,alphabetCountDuplicate=1,revs=0;
    actualStringLength=stringOfAlphabets.size();
    char prev=stringOfAlphabets[0];
    for(int i=1;i<stringOfAlphabets.size();i++){
        if(stringOfAlphabets[i]==prev){
            alphabetCountDuplicate++;
            if(alphabetCountDuplicate>=10 and alphabetCountDuplicate<=99){
                revs=1;
            }
            else if(alphabetCountDuplicate>=100 and alphabetCountDuplicate<=999){
                revs=2;
            }
            else if(alphabetCountDuplicate>=1000 and alphabetCountDuplicate<=9999){
                revs=3;
            }
            if(i==actualStringLength-1){
                count=count+revs;
            }
        }
        else{
            count=count+revs;
            revs=0;
            alphabetCountDuplicate=1;
            count=count+2;
        }
        prev=stringOfAlphabets[i];
        }
        if(count<actualStringLength){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
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