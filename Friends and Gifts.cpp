#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=0;
    vector <int> vet(n);
    vector <int> nums(n);
    while (i<n){
        cin >> vet[i];
        i++;
    }
    i=0;
    while(i<n){
        nums[i]=i+1;
        i++;
    }
    i=0;
    int t=0;
    while(i<n){
        if(vet[i]!=0){
            while(vet[i]!=nums[t]){
                t++;}
            nums.erase(nums.begin()+t);
        }
        t=0;
        i++;
    }
    
    i=0;
    while (i<n){
        if(vet[i]==0){
            vet[i]=nums[0];
            nums.erase(nums.begin());
        }
        i++;
    }
    i=0;
    while (i<n){
        cout << vet[i] << " ";
        i++;
    }
}