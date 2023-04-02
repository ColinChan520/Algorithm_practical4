#include "Finder.h"

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
  vector<int> result;

for(size_t i = 0; i <= s1.size(); i++) {
    int indexS1 = i;
    int indexS2 = 0;
    bool allFound = false;
    if(s1[indexS1] == s2[indexS2] && result.size() > 0){
        string compareStr1 = s1.substr(i, result.size());
        string compareStr2 = s2.substr(0, result.size());
        if (compareStr1 != compareStr2){
            continue;
        }
        else{
            indexS1 = indexS1 + result.size();
            indexS2 = indexS2 + result.size();
        }
    }
    while(s1[indexS1] == s2[indexS2]){
        if(indexS2 + 1 > result.size()){
            result.push_back(i);
        }
        if(indexS1 + 1 == s1.length()){
            break;
        }
        else if (indexS2 + 1 == s2.length())
        {
            allFound = true;
            break;
        }
        else{
        indexS1++;
        indexS2++;
        }
    }
    if(allFound){
        break;
    }
}
int returnNotFound = s2.length() - result.size();
for (int j = 0; j < returnNotFound; j++){
result.push_back(-1);
}
return result;
}
