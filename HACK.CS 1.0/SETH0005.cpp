#include<iostream>
#include<stdlib.h>
using namespace std;
int least_lcm=10000;
int lcm(int x, int y)
{
    int a;
    a = (x > y) ? x : y;
    while (true)
    {
        if (a % x == 0 && a % y == 0)
            return a;
        ++a;
    }
}
int main(int argc, char **argv)
{
    int x, y;
    cin >> x >> y;
    for(int i=1;i<109;i++){
    int cal_lcm=lcm(x+i,y+i);
    if(cal_lcm<least_lcm){
        least_lcm=cal_lcm;
    }
    }
    cout<<least_lcm<<endl;

}