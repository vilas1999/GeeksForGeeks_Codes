#include <bits/stdc++.h>
using namespace std;
#define int long long
int arr[10000000];
pair<int, int> findRepeating(int n){
    
    if(n == 0){
        return {0, 0};
    }
    
    
    if(n-(arr[n-1]-arr[0]) == 1){
        return {-1, -1};
    }
    int lo = 0, hi = n-1;
    int mid = 0;
    
    while(lo < hi){
        mid = (lo+hi)/2;
        if(arr[mid] >= mid + arr[0]){
            lo = mid+1;
        }
        else{
            hi = mid;
        }
    }
    return {arr[mid], n-(arr[n-1]-arr[0])};
}
signed main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    pair<int, int> ans = findRepeating(n);
	    cout << ans.first << " " << ans.second << endl;
	}
	return 0;
}
