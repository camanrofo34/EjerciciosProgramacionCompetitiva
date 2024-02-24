/*A and B are preparing themselves for programming contests.

B loves to debug his code. But before he runs the solution and starts debugging, he has to first compile the code.

Initially, the compiler displayed n compilation errors, each of them is represented as a positive integer. After some effort, B managed to fix some mistake and then another one mistake.

However, despite the fact that B is sure that he corrected the two errors, he can not understand exactly what compilation errors disappeared — the compiler of the language which B uses shows errors in the new order every time! B is sure that unlike many other programming languages, compilation errors for his programming language do not depend on each other, that is, if you correct one error, the set of other error does not change.

Can you help B find out exactly what two errors he corrected?*/

#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    int b=0;
    int c=0;
    int d=0;
    int aux;
    for (int i=0; i<a; i++){
        cin>>aux;
        b+=aux;
    }
    for (int i=0; i<a-1; i++){
        cin>>aux;
        c+=aux;
    }
    for (int i=0; i<a-2; i++){
        cin>>aux;
        d+=aux;
    }
    cout<<b-c<<endl;
    cout<<c-d<<endl;
    return 0;
}
