#include "Finder.h"

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
  vector<int> result;

for(size_t i = 0; i <= s1.size(); i++) {
    int indexS1 = i;
    int indexS2 = 0;
    bool allFound = false;
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
// result.insert(result.end(), returnNotFound, -1);
fill_n(back_inserter(result), returnNotFound, -1);
return result;
}
