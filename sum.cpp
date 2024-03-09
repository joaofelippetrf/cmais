#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int sum;
    int n;
    cin >> n >> sum;
    vector<int> vet(n);
    int i =0;
    int j=1;
    
    while(i<n){
        cin >> vet[i];
        i++;
    }
    
    i=0;
    int s;
    while(i<n){
        while(j<n)
        {
            s=vet[i]+vet[j];
            if(s==sum)
            {
                break;
            }
            j++;
        }
        if(s==sum)
            {break;}
        i++;
        j=i+1;    
    }
    if(i==n){
        cout << -1;
    }
    else{cout << i +1 <<" "<<j+1;}
}