#include<iostream>
#include<math.h>
using namespace std;
int main(){
long int a,b,c {0};
long int num{0};
cin>>num;
for(int i=0;i<num;i++){
cin>>a>>b>>c;
int nums=a*1+b*2+c*3;
num%2==0 ? cout<<"YES"<<endl:cout<<"NO"<<endl;
}
}