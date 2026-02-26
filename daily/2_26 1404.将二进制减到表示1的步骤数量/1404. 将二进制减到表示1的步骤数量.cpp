class Solution {
public:
    int numSteps(string s) {
        int steps = 0;
        while (s.size()!=1) {
            steps++;
            if (s.back() == '0') {
                s.pop_back();
            } else {
int i = s.size() - 1;
                while(i>=0) {
                    if (s[i] == '1') {
                        s[i] = '0';
                        if (i == 0) {
                            s = "1" + s;
                            break;
                        }
                    }
                    else {
                        s[i] = '1';
                        break;
                    }
                    i--;
                }
            }
        }
        return steps;
    }
};
