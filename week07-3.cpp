///week07-3 LeetCode
///682. Baseball Game 點數計算
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>a; ///part4: 要把資料放到陣列a裡面
        for(string op:operations){ ///part1: C++進階迴圈
            cout<< "現在讀到了:"<<op<<"\n"; ///part2: 要看他是誰，等一下刪掉
            ///part3: 一堆if判斷要怎麼模擬
            if(op[0]=='C'){ ///clear 清理掉最後一位
                a.pop_back(); ///丟掉最後一個 part6: pop_back()
            }else if(op[0]=='D'){
                a.push_back(a.back()*2);
            }else if(op[0]=='+'){
                int temp=a.back();///把最後2個加起來，再加到最後面
                a.pop_back();
                int temp2=a.back();
                a.push_back(temp);
                a.push_back(temp+temp2);
            }else{
                a.push_back(stoi(op) ); ///part4: .push_back()
            }
        }
        int ans=0;
        for(int now:a){ ///part5: C++進階迴圈 要看陣列裡的值
           ans+=now;
        }
        return ans;
    }
};
