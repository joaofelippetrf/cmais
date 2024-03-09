#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    int dias;
    cin >> n;
    vector<int> preco(n);
    
    int i=0;
    while(i<n){
        cin >> preco[i];
        i++;
    }
    cin >> dias;
    vector<int> moedas(dias);
    i=0;
    while(i<dias){
        cin >> moedas[i];
        i++;
    }
    i=0;
    int k=0;
    int j=0;
   
    while(i<dias){
        while(j<n){
            
            if (moedas[i]>=preco[j])
            {
                k++;   
            }
            j++;
        }
        cout << k << "\n";
        k=0;
        j=0;
        i++;

    }

}