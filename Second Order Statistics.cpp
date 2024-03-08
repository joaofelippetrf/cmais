#include <iostream>
#include <algorithm>
using namespace std;

int main(){
int n;
cin >> n;
int i=0;
int vet[n];
while(i<n)
{
    cin >> vet[i];
    i++;
}
sort(vet,vet+n);
i=1;
if(vet[0]==vet[1])
{
    while (vet[i]==vet[i+1] && i<n-2)
    {
        i++;
    }
    i++;
}
cout << vet[i];
}