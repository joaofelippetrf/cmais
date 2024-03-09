#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
int n;
cin >> n;
int i=0;
vector<int> vet(n);
while(i<n)
{
    cin >> vet[i];
    i++;
}
sort(vet.begin(),vet.end());
i=1;
if(vet[0]==vet[1])
{
    while (vet[i]==vet[i+1] && i<n-2)
    {
        i++;
    }
    i++;
}
if(vet[i]==vet[i-1]){
    cout << "NO";
}
else{
cout << vet[i];
}
}