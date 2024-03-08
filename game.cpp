#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=0;
    int a;
    vector<int> numeros;
    while(i<n){
        cin >> a;
        numeros.push_back(a);
        i++;
    } 
    sort(numeros.begin(),numeros.end());

    while(numeros.size()>1)
    {
        numeros.pop_back();
        if(numeros.size()==1)
        {
            break;
        }
        else
        {
            numeros.erase(numeros.begin());
        }
    }

    cout << numeros[0];
    return 0;

}