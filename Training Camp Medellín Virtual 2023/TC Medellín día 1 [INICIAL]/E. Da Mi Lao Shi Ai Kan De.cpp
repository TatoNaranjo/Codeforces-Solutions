#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_set<string> forwarded_messages;

    for (int i = 0; i < n; i++) {
        int mi;
        cin >> mi;

        if (mi == 0) {
            cout << "Time to play Genshin Impact, Teacher Rice!" << endl;
            continue;
        }
        int a = 0;
         int ans = 0;
        for (int j = 0; j < mi; j++) {
            a++;

            string message;
            cin >> message;

            if (message.find("bie") != string::npos && forwarded_messages.find(message) == forwarded_messages.end()) {
                cout << message << endl;
                forwarded_messages.insert(message);
            } else{
            ans++;
            }
        }
        if(ans==a)cout<<"Time to play Genshin Impact, Teacher Rice!"<<endl;
    }

    return 0;
}
