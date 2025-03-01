#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& vec){
    int start = 0;
    int end = vec.size() - 1;
    int i = 0;

    while(i <= end){
        if(vec[i] == 0){
            swap(vec[i], vec[start]);
            start++;
            i++;
        }
        else if(vec[i] == 1){
            i++;
        }
        else if(vec[i] == 2){
            swap(vec[i], vec[end]);
            end--;
        }
    }

    // print 
    for(int num : vec){
        cout << num << " ";
    }
    cout << endl;
}

int main(){
    vector<int> vec = {1,1,2,0,0,1,1,2,2,2,0};

    sortColors(vec);

    return 0;
}