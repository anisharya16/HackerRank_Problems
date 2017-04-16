#include <iostream>
#include <cstdio>
using namespace std;
int max_of_four(int a, int b, int c, int d){
    int temp1, temp2;
    temp1 = (a > b) ? a : b;
    temp2 = (c > d) ? c : d;
    return ((temp1 > temp2) ? temp1 : temp2);
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
