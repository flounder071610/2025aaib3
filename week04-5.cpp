///�q�k�����ݡA�˹L�Ӫ��j��
///1,9,9
///    0  �]�����i��A�ҥH�����٬O+1
///  0    �]�����i��A�ҥH�����٬O+1
///2      �S���i��A�������״N���F
///1,2,3
///    4  �S���i��A�������״N���F
///9,9,9
///1,0,0, 0  �p�G�@���i��A�S����쵪�סA�٭n�b�̫e����1
///week04-5.cpp
///LeetCode �ǲ߭p�e 66. Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size(); ///�����D�}�C�����סA�H�K��L�Ӫ��j��
        for(int i=N-1;i>=0;i--){
            if(digits[i]==9) digits[i]=0; ///�i��A�ܦ�0(�٧�쵪��)
            else{ ///�S���i��A�N�O��쵪�פF
            digits[i]++; ///�N+1��A�S���i��
            return digits; ///��쵪�סA�e�X�h
            }
        }
        ///���S��쵪�סA�]�N�O9,9,9
    digits.insert(digits.begin(),1);
        return digits;
    }

};
