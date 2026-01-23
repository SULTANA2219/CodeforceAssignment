/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: O
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-09-27
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O
*/


#include <iostream>
using namespace std;

int main() {
    int A, B;
    char S;

    cin >> A >> S >> B;

    if (S == '+') cout << A + B;
    else if (S == '-') cout << A - B;
    else if (S == '*') cout << A * B;
    else if (S == '/') cout << A / B;

    return 0;
}
