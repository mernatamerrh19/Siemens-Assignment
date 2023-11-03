#include <iostream>
#include <vector>
#include <cstdint>

using namespace std;

int getVectorSum(vector<int>v){
    int sum = 0;
    for (int i =0; i <v.size(); i++){
        sum += v[i];
    }
    return sum;
}

int getMinimum(vector<int>v){
    int min=INT16_MAX;
    for (int i =0; i<v.size(); i++){
        if (v[i]<min){
            min=v[i];
        }
    }
    return min;
}

int main() {
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    cout<< getVectorSum(v)<< endl;
    cout<< getMinimum(v)<<endl;
    return 0;
}
