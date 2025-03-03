#include<iostream>
#include<vector>
using namespace std;

vector<int> pivotArray(vector<int>& vec, int pivotValue){
    vector<int> less, equal, greater;
        
        // Step 1: Categorize elements
        for(int num : vec) {
            if(num < pivotValue) 
                less.push_back(num);
            else if(num == pivotValue) 
                equal.push_back(num);
            else 
                greater.push_back(num);
        }
        
        // Step 2: Merge using loops
        vector<int> result;
        
        // Add elements smaller than pivot
        for(int num : less) 
            result.push_back(num);
        
        // Add elements equal to pivot
        for(int num : equal) 
            result.push_back(num);
        
        // Add elements greater than pivot
        for(int num : greater) 
            result.push_back(num);

        return result;
}


int main(){
    vector<int> vec = {9,12,5,10,14,3,10};
    int pivot = 10;

    vector<int> result = pivotArray(vec, pivot);

    // print
    cout << "Rearranged Array: ";
    for(int num : result) 
        cout << num << " ";

    cout << "\n";
    return 0;
}