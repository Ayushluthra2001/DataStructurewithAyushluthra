class Solution {
public:
    bool judgeCircle(string moves) {
        int countUp=0,countDown=0,countLeft=0,countRight=0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='U') countUp++;
            else if(moves[i]=='D') countDown++;
            else if(moves[i]=='L') countLeft++;
            else {
                countRight++;
            }

        }
        if(countUp==countDown && countLeft==countRight) return true;
        return false;
    }
};
