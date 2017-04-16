#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
    {
int N,Q;
cin >> N >> Q;

int *array[N];    

for(int i = 0;i<N;++i)
{
    int size;
    cin >> size;
    array[i] = (int *)malloc(size * sizeof(int));
    for(int j = 0;j< size;++j)
    {
        int num;
        cin >> num;
        array[i][j] = num;
    }
}

for(int i=0 ; i<Q;++i)
{
    int nth,index; 
    cin >> nth >>index;
    cout << array[nth][index]<<endl;
}


return 0;
}

