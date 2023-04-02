#include "Finder.h"

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
  vector<int> result;

  for (size_t i = 1; i <= s2.size(); i++) {
    if(i>1 && result[i-1] == -1){
        result.push_back(-1);
    }
    else{
        size_t found = s1.find(s2.substr(0, i));
            if (found != string::npos) {
            result.push_back(found);
            } else {
                result.push_back(-1);
            }
    }
    
  }

  return result;
}
/*for(size_t i = 0; i <= s1.size(); i++) {
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
for (int j = 0; j < returnNotFound; j++){
result.push_back(-1);
}
return result;
}*/
