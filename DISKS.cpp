#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    long double vo, v, count;
    long double d, maxDistance;
    long double previous = 0;
    cin>>v;
    cin>>vo;
    while (v != 0 && vo != 0){
        previous=0;
        for (int i=1; i<v+1; i++){
            long double vtemporal=v/(i*i);
            d = 0.3*sqrt(vtemporal-vo);
            maxDistance = d*i*i;
            if (maxDistance > previous){
                previous = maxDistance;
            }else{
                int answer = i-1;
                if (answer>1000){
                    answer = answer % 1000;
                }
                cout<<answer;
                break;
            }
        }
        cin>>v;
        cin>>vo;
    }
}
