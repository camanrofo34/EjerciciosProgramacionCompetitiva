/* Ashish has n
 elements arranged in a line.

These elements are represented by two integers ai
 — the value of the element and bi
 — the type of the element (there are only two possible types: 0
 and 1
). He wants to sort the elements in non-decreasing values of ai
.

He can perform the following operation any number of times:

Select any two elements i
 and j
 such that bi≠bj
 and swap them. That is, he can only swap two elements of different types in one move.
Tell him if he can sort the elements in non-decreasing values of ai
 after performing any number of operations.

Input
The first line contains one integer t
 (1≤t≤100)
 — the number of test cases. The description of the test cases follows.

The first line of each test case contains one integer n
 (1≤n≤500)
 — the size of the arrays.

The second line contains n
 integers ai
 (1≤ai≤105)
  — the value of the i
-th element.

The third line containts n
 integers bi
 (bi∈{0,1})
  — the type of the i
-th element.

Output
For each test case, print "Yes" or "No" (without quotes) depending on whether it is possible to sort elements in non-decreasing order of their value.

You may print each letter in any case (upper or lower).*/

#include <bits/stdc++.h>
using namespace std;

bool isSorted(int array[], int valor[], int n) {
    bool sorted; //Determinar si el arreglo se encuentra ordenado
    while (true) {
        sorted = true;
        for (int i = 0; i != n - 1; i++) {
            if (array[i] > array[i + 1] && valor[i] != valor[i+1]) { //Comparar valores consecutivos
                swap(array[i], array[i + 1]);
                swap(valor[i], valor[i + 1]);//Intercambiar valores
                sorted = false; //Se realizó un intercambio, se debe iterar de nuevo
            }
        }
        if (sorted) break; //Si no se realizan intercambios en el proceso, el array está ordenado
    }
        for (int i = 0; i != n - 1; i++) {
            if (array[i] > array[i + 1]) { //Comparar valores consecutivos
                sorted = false; //Se realizó un intercambio, se debe iterar de nuevo
            }
        }
    return sorted;
}

int main() {
    int a;
    cin >> a;
    for (int j = 0; j < a; j++) {
        int n;
        cin >> n;
        int array[n];
        int valor[n];
        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> valor[i];
        }
        if (isSorted(array, valor, n)) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
