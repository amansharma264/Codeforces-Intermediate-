#include <bits/stdc++.h>
using namespace std;

class JudgeAnalytics {
private:
    int run = 0;
    int submit = 0;

public:
    void countRun() {
        run++;
    }

    void countSubmit() {
        submit++;
    }

    int getRunCount() {
        return run;
    }

    int getSubmitCount() {
        return submit;
    }
};

int main() {

    JudgeAnalytics judgeAnalytics = JudgeAnalytics();

    judgeAnalytics.countRun();
    judgeAnalytics.countSubmit();

    JudgeAnalytics judgeAnalytics2 = JudgeAnalytics();

    judgeAnalytics2.countRun();

    return 0;
}