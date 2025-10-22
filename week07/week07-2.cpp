///week07-2.cpp Leetode
///657. Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0; ///開始位置在(0,0)
        ///for(int n=0;i<moves.length();i++){
        ///    char c=moves[i];
        for(char c:moves){
            if(c=='U'){ ///up
                y++;
            }else if(c=='D'){ ///down
                y--;
            }else if(c=='L'){ ///left
                x--;
            }else if(c=='R'){ ///right
                x++;
            }
        }
        if(x==0 && y==0) return true;
        else return false;
    }
};
