///week07-3 LeetCode
///682. Baseball Game �I�ƭp��
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>a; ///part4: �n���Ʃ��}�Ca�̭�
        for(string op:operations){ ///part1: C++�i���j��
            cout<< "�{�bŪ��F:"<<op<<"\n"; ///part2: �n�ݥL�O�֡A���@�U�R��
            ///part3: �@��if�P�_�n������
            if(op[0]=='C'){ ///clear �M�z���̫�@��
                a.pop_back(); ///�ᱼ�̫�@�� part6: pop_back()
            }else if(op[0]=='D'){
                a.push_back(a.back()*2);
            }else if(op[0]=='+'){
                int temp=a.back();///��̫�2�ӥ[�_�ӡA�A�[��̫᭱
                a.pop_back();
                int temp2=a.back();
                a.push_back(temp);
                a.push_back(temp+temp2);
            }else{
                a.push_back(stoi(op) ); ///part4: .push_back()
            }
        }
        int ans=0;
        for(int now:a){ ///part5: C++�i���j�� �n�ݰ}�C�̪���
           ans+=now;
        }
        return ans;
    }
};
