#include "hashing.hpp"

int hash_string(string s) {
    // implement hashing function here
    int m = 7,sum = 0,p=97;
    for(int i = 0;i< s.size();i++){
        sum = (sum*p + s[i])%m;
    }
    int hash = sum%m;
    return hash;
}