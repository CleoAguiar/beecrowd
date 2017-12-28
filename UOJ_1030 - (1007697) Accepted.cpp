#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    int i, nc, n, k, j, d=0;
    vector <int> vet;
    //freopen("Entrada.txt", "r", stdin);
    cin >> nc;
    for (i=0; i<nc; i++)
    {
        cin >> n >> k;
        for (j=0; j<n; j++)
        {
            vet.push_back(j+1);
        }

        while (vet.size()>1)
        {
            d = d+k-1;
            d = d%vet.size();
            vet.erase(vet.begin()+d);
        }
        vet.clear();
        d=0;
        cout << "Case " << i+1 << ": " << vet[0] << endl;
    }

    return 0;
}
