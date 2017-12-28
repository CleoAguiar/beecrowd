#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

void ordenar_sort(int v[], int esq, int dir){
    int i, j, x, y;
    i = esq;
    j = dir;
    x = v[(esq+dir)/2];
    while(i<=j){
        while(v[i]<x && i<dir){
            i++;
        }
        while(v[j]>x && j>esq){
            j--;
        }
        if (i<=j){
            y = v[i];
            v[i] = v[j];
            v[j] = y;
            i++;
            j--;
        }
    }
    if (j > esq){
        ordenar_sort(v, esq, j);
    }
    if (i < dir){
        ordenar_sort(v, i, dir);
    }
}

int main()
{
    int n, i, m, j, p[2000], r[2000], mudar, k, l;
    //freopen("Entrada.txt", "r", stdin);
    cin >> n;
    for(i=0; i<n; i++){
        cin >> m;
        for(j=0; j<m; j++){
            cin >> p[j];
            r[j] = p[j];
        }
        ordenar_sort(r, 0, m-1);

        mudar=0;
        for(j=0, k=m-1; j<m, k>=0; j++, k--){
            if (p[j] == r[k]) mudar++;
        }
        cout << mudar << endl;

    }
    return 0;
}