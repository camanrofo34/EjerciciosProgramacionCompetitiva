/*You have an array a
 of n
 integers.

You can no more than once apply the following operation: select three integers i
, j
, x
 (1≤i≤j≤n
) and assign all elements of the array with indexes from i
 to j
 the value x
. The price of this operation depends on the selected indices and is equal to (j−i+1)
 burles.

For example, the array is equal to [1,2,3,4,5,1]
. If we choose i=2,j=4,x=8
, then after applying this operation, the array will be equal to [1,8,8,8,5,1]
.

What is the least amount of burles you need to spend to make all the elements of the array equal?*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin>>a;
    int n;
    int contador;
    for(int y=0; y<a; y++){
        cin>>n;
        vector<int> array(n);
        for (int m=0; m<n; m++){
            cin>>array[m];
        }
        int i=0; 
        int j=n-1;
        if (array[i]==array[j]){
            do{
                i+=1;
                n-=1;
            } while (array[i-1]==array[i]);
            do{
                j-=1;
                n-=1;
            }while (array[j+1]==array[j]);
        }else{
            int entrada1=0;
            int entrada2=0;
            do{
                entrada1+=1;
                i+=1;
            }while (array[i-1]==array[i]);
            do{
                entrada2+=1;
                j-=1;
            }while (array[j+1]==array[j]);
            if (entrada2>entrada1) entrada1=entrada2;
            n=n-entrada1;
        }
        if (n<=0) n=0;
        cout<<n<<endl;
    }
    return 0;
}
