//Consider an n-element array,a, where each index (i) in the array contains a reference to an array of{ki}  integers (where the value of {ki} varies from array to array).

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int x,y,s=0;
    cin>>x>>y;
    int* arr[x];
    while(x--){
        int n;
        cin>>n;

        arr[s] =new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[s][i];
        }
        s++;
    }
    while(y--){
        int a,b;
        cin>>a>>b;
        cout<<arr[a][b]<<endl;
    }
    
    return 0;
}


// Sample Input

// 2 2
// 3 1 5 4
// 5 1 2 8 9 3
// 0 1
// 1 3


// Sample Output

// 5
// 9


// Explanation

// The diagram below depicts our assembled Sample Input:

// Find the array located at index {i=0}, which corresponds to a[0] = [1,5,4] . We must print the value at index [j=1]  of this array which, as you can see, is 5.