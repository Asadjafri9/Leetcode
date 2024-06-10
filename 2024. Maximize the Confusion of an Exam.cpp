https://leetcode.com/problems/maximize-the-confusion-of-an-exam/submissions/1282082337
class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int i = 0, n = answerKey.size(), ans = 0;
        int T = 0, F = 0;

        // Subarray with maximum F's
        for (int j = 0; j < n; j++) {
            if (answerKey[j] == 'T') {
                T++;
            }
            while (T > k) {
                if (answerKey[i] == 'T') {
                    T--;
                }
                i++;
            }
            ans = max(ans, j - i + 1);
        }

        // Subarray with maximum T's
        i = 0;
        for (int j = 0; j < n; j++) {
            if (answerKey[j] == 'F') {
                F++;
            }
            while (F > k) {
                if (answerKey[i] == 'F') {
                    F--;
                }
                i++;
            }
            ans = max(ans, j - i + 1);
        }

        return ans;
    }
};
