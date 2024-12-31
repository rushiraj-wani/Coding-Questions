#include<iostream>
#include<vector> 
using namespace std;

/* Logic:
    use xor opertor, 0^0 = 0, 1^1 = 0, 1^0 = 1, 0^1 = 1;
    therefore: n^n = 0 and n^0 = n.
    so, loop entire array with ^ and the one left out is the answer.
    eg: 4^1^2^1^2 = 4^0 = 4.
*/

int main() {

    // this code takes input from user.
    cout << "Enter n: ";
    int n; 
    cin >> n;

    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    int ans = 0;
    for(int val: nums){
        ans ^= val;
    }
    cout << ans << "\n";

    return 0;
}