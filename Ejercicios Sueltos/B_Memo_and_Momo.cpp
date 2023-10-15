#include <iostream>

using namespace std;

string game_winner(int a, int b, int k) {
    if (a % k == 0 && b % k == 0) {
        return "Both";
    } else if (a % k == 0) {
        return "Memo";
    } else if (b % k == 0) {
        return "Momo";
    } else {
        return "No One";
    }
}

int main() {
    long long a, b, k;
    
    cin >> a;
  
    cin >> b;
    cin >> k;

    string result = game_winner(a, b, k);
    cout << result << endl;

    return 0;
}
