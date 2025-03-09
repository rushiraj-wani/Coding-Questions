#include<iostream>
#include<vector>
using namespace std;    


int uniqueElement(vector<int> &vec){
    int ans = 0;
    for(int i=0; i<vec.size(); i++){
        ans = ans ^ vec[i];
    }

    return ans;
}

int main(){
    vector<int> vec = {1, 2, 3, 4, 1, 2, 3};
    cout<<uniqueElement(vec)<<endl;

    return 0;
}