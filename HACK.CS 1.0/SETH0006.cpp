#include <bits/stdc++.h> 
using namespace std; 
int get_count(int n){
    int temp=n;
    int count=0;
    while(temp>0){
    temp=temp/10;
    count++;
}
 return count;
}
void replaceElements(int arr[], int n) 
{ 
	unordered_set<int> s; 

	for (int i = 0; i < n; i++) { 
		if (s.find(arr[i]) == s.end()) 
			s.insert(arr[i]); 

		else { 
			for (int j = arr[i] + 1; j < INT_MAX; j++) { 
				if (s.find(j) == s.end()) { 
					arr[i] = j; 
					s.insert(j); 
					break; 
				} 
			} 
		} 
	} 
} 

int main() 
{  
    int a,b={0};
    cin>>a>>b;
    int lens=get_count(a);
	int array[lens];
    a=a+1;
    int number=a;
    for (int i = lens-1; i >= 0; i--) {
    array[i] = number % 10;
    number /= 10;
    } 
    replaceElements(array,lens); 

    int latest=0;
    for(int i=0;i<lens;i++){
        latest*=10;
        latest+=array[i];
    }
    if(b>latest){
        cout<<latest<<endl;
    }
    else{
        cout<<-1<<endl;
    }
} 
