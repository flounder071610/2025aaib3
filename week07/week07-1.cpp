///week07-1.cpp
///��j�q���t�����Ҳ�6�D
///Input:1-9�ӼƦr Output:¶��骺�Ʀr
///ex: Input:3
///3 3 3 3 3
///3 2 2 2 3
///3 2 1 2 3
///3 2 2 2 3
///3 3 3 3 3  �`�@5�h��
///Input 2 ��3�h��
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n; ///step1:Input
    for(int i=1;i<2*n;i++){ ///step2:for�j��
        for(int j=1;j<2*n;j++){ ///�ĴX��
            if(j>1) cout<<" "; ///step5:�����Y+���[+���[
            int d=max(abs(i-n),abs(j-n));
            cout<<d+1;
        }
        ///cout<<"�{�b�O��i��,i:"<<i; ///step4:�Ӽh�N�[
        cout<<endl; ///step2:Output,����
    }
}

