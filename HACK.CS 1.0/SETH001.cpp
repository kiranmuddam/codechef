#include<iostream>
#include<math.h>
using namespace std;
long int incre_count(long int n,int count,int c){
    int diff=c-count;
    for(int i=0;i<diff;i++){
        n=n*10;
    }
   return n;
}
int get_count(long int n){
    long int temp=n;
    int count=0;
    while(temp>0){
    temp=temp/10;
    count++;
}
 return count;
}
int sum_nums(int n,int count){
    int sum=0,rem=0;
    long int temp=n;
    for(int i=0;i<count;i++){
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    return sum;

}
int sum_num(long int n,int c){
    int sum=0,rem=0;
    long int temp=n;
    for(int i=0;i<c;i++){
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    if(get_count(sum)!=1){
    return sum_nums(sum,get_count(sum));
    }
}
long int replace(long int n,int c,int d){
    int sum=0,rem=0;
    long int temp=n;
    for(int i=0;i<c;i++){
        rem=temp%10;
        temp=temp/10;
    }
    
    temp=temp*10+d;
    return temp;

}
long int replaces(long int n,int c,int d){
    int sum=0,rem=0;
    long int temp=n;
    for(int i=0;i<c;i++){
        rem=temp%10;
        temp=temp/10;
    }
    return incre_count(temp,get_count(temp),c);

}
int main(){
long int n,c {0};
long int num{0};
cin>>num;
for(int i=0;i<num;i++){
cin>>n>>c;
int count;
count=get_count(n);
if(c>count){
    n=incre_count(n,count,c);
    cout<<n<<endl;
    exit(0);
}
while(get_count(n)>c){
if(c>count){
    n=incre_count(n,count,c);
    cout<<n<<endl;
    exit(0);
}
int d=sum_num(n,c);
if(d>=5 and d<=9){
    n=replace(n,c,d);

}
if(d<5){
    n=replaces(n,c,d);
}
}
cout<<n<<endl;
}
}