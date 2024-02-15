#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> basket;

    for (int move : moves) {
        for (int i = 0; i < board.size(); i++) {
            if (board[i][move - 1] != 0) {
                if (!basket.empty() && basket.back() == board[i][move - 1]) {
                    basket.pop_back();
                    answer += 2;
                }
                else {
                    basket.push_back(board[i][move - 1]);
                }
                board[i][move - 1] = 0;
                break;
            }
        }
    }

    return answer;
}