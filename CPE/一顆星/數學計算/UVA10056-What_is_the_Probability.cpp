//Author: Jinyulink
//https://zerojudge.tw/ShowProblem?problemid=e510
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t,w;
        double p,ans;
        cin>>t>>p>>w;
        double q=1-p;
        ans=pow(q,w-1)*p/(1-pow(q,t));
        cout<<fixed<<setprecision(4)<<ans<<endl;
    }
    return 0;
}

/*
�o�D�ݭn�Ψ�@�I�ƾǡC�����A�ڭ̥��ӤF�Ѥ@�U�D�ت��N��A�o�N�O�@�Ӧ������v���C���A�D�ط|�i�D�A���X�Ӫ��a�A�Ӳv�h�֡A�M��n�A�D�X��x�Ӫ��a��Ӫ����v�C�����aplay�����ǬO�q�Ĥ@�Ө�̫�@�ӡA�Y�S���H��ӡA�N��ĤG���A�Y�ĤG���٨S���H��ӡA�N��ĤT���A���즳�H��Ӭ���C
��k�j�P�W�N�O���D�X�Ĥ@��x���a��Ӫ����v�A�A�[�W�ĤG��x���a��Ӫ����v...�@���[��L�a�j�C�ڭ̥���⦡�C�X��:

�]p = ��Ӫ����v, q = �S����Ӫ����v = 1 - p, n = �`�@�����a��, x = �ĴX�Ӫ��a�nĹ
�⦡�N�O�o��:

p * q ^ (x - 1) + p * q ^ (n + x - 1) + p * q ^ (2 * n + x - 1)...

���U�ӧڭ̥i�H�� p * q ^ (x - 1)���X��:

( p * q ^ (x - 1) ) * ( 1 + q ^ n + q ^ (2 * n)... )

1 + q ^ n + q ^ (2 * n)...�ܩ���O�ӵL�a����żơA�ҥH�Q�εL�a����żƤ����N����A�|�ܦ��H�U���l:

( p * q ^ (x - 1) ) * ( 1 / (1 - q ^ n) )

��z�@�U:

( p * q ^ (x - 1) ) / (1 - q ^ n)

�o�N�O�̫᪺�����A�u�n��input�N�i�h�N�i�H�D�X�ѤF�C
*/