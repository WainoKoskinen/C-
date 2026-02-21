#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        
        for(int i = 0; i < haystack.size(); i++){
            for(int j=0; j < needle.size(); j++){
                if(haystack[i] == needle[j]){
                    return i;
                }
            }
        }
         return -1;
        
        
        
  /*    std::string result;

        for(int i = 0; i < haystack.size(); i++){
          for(int j=0; j < needle.size(); j++){
            if(haystack[i] == needle[j]){
                result += haystack[i];
                i++;
            }
          }
            
  */  }

};



int main() {
    Solution sol;

    string haystack = "hello";
    string needle = "ll";

    int result = sol.strStr(haystack, needle);

    cout << "Index: " << result << endl;

    return 0;
}