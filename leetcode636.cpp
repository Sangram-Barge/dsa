#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Solution {
private:

  vector<string> split(string s) {
    vector<string> result;
    stringstream ss(s);
    string token;
    while(getline(ss, token, ':')) {
      result.push_back(token);
    }
    return result;
  }

public:
  vector<int> exclusiveTime(int n, vector<string>& logs) {
    vector<int> result(n, 0);
    stack<int> st;
    int prev_time = 0;
    for (const string& log : logs) {
      vector<string> tokens = split(log);
      int id = stoi(tokens[0]);
      string action = tokens[1];
      int time = stoi(tokens[2]);
      if (action == "start") {
        if (!st.empty()) result[st.top()] += time - prev_time;
        st.push(id);
        prev_time = time;
      } else {
        result[st.top()] += time - prev_time + 1;
        st.pop();
        prev_time = time + 1;
      }
    }
    return result;
  }
};

int main() {
  return 0;
}
