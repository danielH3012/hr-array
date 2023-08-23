#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    int x = 0;
    cin>>n;
    int number[n];
    for(int i =0;i<=n-1;i++){
        cin>>x;
        number[i]=x;     
    }  
    for(int i = n-1; i >= 0; i--){
        cout<< number[i]<<" ";
    }
    
}
