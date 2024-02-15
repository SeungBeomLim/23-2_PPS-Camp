//#include <iostream>
//#include <vector>
//#include <stdio.h>
//
//using namespace std;
//
//int main() {
//    int testCase = 0, studentNum = 0, score = 0;
//    vector<int> scoreBoard;
//
//
//    cin >> testCase;
//    for (int i = 0; i < testCase; i++) {
//        int cnt = 0;
//        float aver = 0.0f, answer = 0.0f;
//        cin >> studentNum;
//        for (int j = 0; j < studentNum; j++) {
//            cin >> score;
//            aver += score;
//            scoreBoard.push_back(score);
//        }
//        aver /= studentNum;
//        for (int k = 0; k < studentNum; k++) {
//            if (scoreBoard.at(k) > aver) {
//                cnt++;
//            }
//        }
//        answer = cnt * 100 / (float)studentNum;
//        printf("%.3f", answer);
//        cout << "%" << endl;
//        scoreBoard.clear();
//    }
//}