#include "Finder.h"
#include <iostream>
#include <string>
#include <vector>
#include <chrono>

using namespace std;

int main(){
    string a = "4634554567";
    string b = "45689";
    Finder f;
    vector<int> result = f.findSubstrings(a,b);
    for (int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }
    return 0;
}