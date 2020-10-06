//You are provided with a vector of N integers. Then, you are given 2 queries. For the first query, you are provided with 1 integer, which denotes a position in the vector. The value at this position in the vector needs to be erased. The next query consists of 2 integers denoting a range of the positions in the vector. The elements which fall under that range should be removed. The second query is performed on the updated vector which we get after performing the first query.

/* Input Format
The first line of the input contains an integer N .The next line contains N space separated integers(1-based index).The third line contains a single integer x ,denoting the position of an element that should be removed from the vector.The fourth line contains two integers a and b denoting the range that should be erased from the vector inclusive of a and exclusive of b.*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> v;
    int size;
    int n;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>n;
        v.push_back(n);
    } 
    int c,d,e;
    cin>>c;
    int cn =c-1;
    v.erase(v.begin()+cn);
    cin>>d>>e;
    int dn=d-1;
    int en=e-1;
    v.erase(v.begin()+dn,v.begin()+en);
    cout<<v.size()<<endl;
    for(int x:v)
        cout<<x<<" ";
    return 0;
}



/*Sample Input

6
1 4 6 2 8 9
2
2 4
*/



/*Sample Output

3
1 8 9
*/


/*

Explanation

The first query is to erase the 2nd element in the vector, which is 4. Then, modifed vector is {1 6 2 8 9}, we want to remove the range of 2~4, which means the 2nd and 3rd elements should be removed. Then 6 and 2 in the modified vector are removed and we finally get {1 8 9}
*/