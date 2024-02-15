#include <iostream>
#include <algorithm>

using namespace std;
const int N = 1e5 + 10;
int n;
int f[N];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> f[i];
    }
    int l = 0, r = n - 1;
    while(l < r){
        int mid = (l + r) / 2;
        if(f[mid] <= n - mid){
            l = mid;
        }
        else{
            r = mid - 1;
        }
    }

    cout << " l : " <<  l << " r: " << r;
}