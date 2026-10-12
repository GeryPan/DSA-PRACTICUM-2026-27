#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    char current = str[0];
    size_t cnt = 1;
    for(size_t i = 1; i < str.size(); i++)
    {
        if(str[i] == current)
        {
            cnt++;
        }
        else
        {
            cout << cnt;
            cout << current;
            current = str[i];
            cnt = 1;
        }
    }
    
    cout << cnt;
    cout << current;
}
