#include <string>
#include <vector>

using namespace std;

vector<string> get_two_words(string s){
    string word;
    vector<string> ans;
    for (int i = 0;i < s.size();i++){
        if (s[i] == ':'){
            ans.push_back(word) ;
            word = "" ;
        }
        else {
            word += s[i] ;
        }
    }
    ans.push_back(word);
    return ans ;
}
