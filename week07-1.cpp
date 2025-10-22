///week07-1.cpp
///交大電機系期中考第6題
///Input:1-9個數字 Output:繞圈圈的數字
///ex: Input:3
///3 3 3 3 3
///3 2 2 2 3
///3 2 1 2 3
///3 2 2 2 3
///3 3 3 3 3  總共5層樓
///Input 2 有3層樓
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n; ///step1:Input
    for(int i=1;i<2*n;i++){ ///step2:for迴圈
        for(int j=1;j<2*n;j++){ ///第幾格
            if(j>1) cout<<" "; ///step5:火車頭+車廂+車廂
            int d=max(abs(i-n),abs(j-n));
            cout<<d+1;
        }
        ///cout<<"現在是第i樓,i:"<<i; ///step4:樓層鷹架
        cout<<endl; ///step2:Output,跳行
    }
}

