#include <iostream>
#include <cmath> 
using namespace std;

float dist(float x1, float y1, float x2, float y2){
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)); 
}

int main(){
    int n;
    float cx, cy, r;
    cin >> n >> cx >> cy >> r;
    int i = 0;
    float vet[n][2];

    while(i < n){
        cin >> vet[i][0] >> vet[i][1];
        i++;
    }

    i = 0;
    int suc = 0;

    while(i < n){
        if(dist(vet[i][0], vet[i][1], cx, cy) <= r){
            suc++;
        }
        i++;
    }

    cout << "\n" << suc << "\n";
}