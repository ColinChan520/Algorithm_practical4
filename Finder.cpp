#include "Finder.h"

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
  vector<int> result;
  int lastVector = 0;
  for (size_t i = 1; i <= s2.size(); i++) {
    size_t found = s1.find(s2.substr(0, i));
    if (found != string::npos) {
        s1.erase(0,found);
        found = found + lastVector;
        result.push_back(found);
        lastVector = found;
    } else {
        int returnNotFound = s2.length() - result.size();
        fill_n(back_inserter(result), returnNotFound, -1);
        return result;
    }
  }
  return result;
}
