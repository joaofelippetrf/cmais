#include <iostream>
#include <vector>
using namespace std;

int main(){

    long int a;
    cin >> a;
    int i=0;
    int t=0;
    vector<int> vet;
    
    while(a!=0){
        vet.push_back(a%10);
        i++;
        a=a/10;
        
    }
    
    
    while(i>0){
       
       
        if (vet[i-1]==0){
            vet.erase(vet.begin()+i-1);
            t=1;
            break;
        }
        
    i=i-1;
    }   
    
    if(t==0){
        vet.erase(vet.begin());}
        i=0;
    while(i<vet.size())
        {
            cout <<vet[vet.size()-i-1];
            i++;
        }
        
        }