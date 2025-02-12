#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> parseInts(string str) {
    vector<int> vec;
    int sum = 0;
    bool isNegative = false;
    
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        
        if (ch == '-') {
            isNegative = true;
        } else if (ch >= '0' && ch <= '9') {
            sum = sum * 10 + (ch - '0');  // Convert character to integer
        }
        
        // Push sum to vector when encountering a comma or reaching the end
        if (ch == ',' || i == str.length() - 1) {
            if (isNegative) sum = -sum;
            vec.push_back(sum);
            sum = 0;
            isNegative = false;
        }
    }
    
    return vec;   
}

int main() {
    string input;
    getline(cin,input);
    vector<int> result = parseInts(input);
    
    for (int num : result) {
        cout << num << " ";
    }
    
    return 0;
}
