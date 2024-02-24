/*A ticket is a string consisting of six digits. A ticket is considered lucky if the sum of the first three digits is equal to the sum of the last three digits. Given a ticket, output if it is lucky or not. Note that a ticket can have leading zeroes.*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int a;
    string b;
    cin>>a;
    for (int i=0; i<a; i++){
        cin>>b;
        int z= b[0] + b[1] + b[2];
        int y= b[3] + b[4] + b[5];
        if (z==y){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
