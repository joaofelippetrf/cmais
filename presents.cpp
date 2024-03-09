#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i=0;
    vector<int> vet(n);
    vector<int> vet1(n);
    while(i<n){
        cin >> vet[i];
        i++;
    }
    vet1=vet;
    i=0;
    
    while(i<n){
        vet[vet1[i]-1]=i+1;
        i++;

    }
    i=0;
    while(i<n){
        cout << vet[i] << " ";
        i++;
    }
}