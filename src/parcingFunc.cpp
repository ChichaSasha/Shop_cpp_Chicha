/***
 *
 * Project name: Shop
 * File: parcingFunc.cpp
 * Project was created by Chicha Olexandr on 15.12.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: sashachicha13@gmail.com
 * phone number: +380957519417
 *
***/

#include <vector>
#include <string>

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

