

#include<bits/stdc++.h>

using namespace std;

map<string, bool> mapp;
map<string, bool> map2;
string nam;
const int n = 45;
int ans = 0;
string nmlist[50] = {"yee", "����о����", "����о����", "Τ����", "��𩲩", "������", "�ŏ�", "����׿", "������", "���Ǻ�", "������", "����ع", "������", "������", "����ѩ", "��һ��", "������", "������", "�����", "��һ��", "����", "������", "��Ѻ�", "������", "������", "������", "˾����", "�¼�ŵ", "����ݷ", "��˼��", "����ͭ", "Ԭ����", "������", "������", "������", "�Έ���", "������", "������", "��Ө��", "������", "������", "������", "���ں�������", "���ں�������", "������", "�����"};

void jiekou(){
	for (int i = 1; i <= n; i ++){
		mapp[nmlist[i]] = true;
	}
} 

int main(){
	freopen("laohu.in", "r", stdin);
	freopen("outfile.out", "w", stdout);
	jiekou();
	while (cin >> nam){
		for (int i = 1; i <= 45; i ++){
			int l = nam.find(nmlist[i]);
			int r = l + nmlist[i].length() - 1;
			if (l != -1){
				bool flag = true;
				for (int j = l; j <= r; j ++){
					if (nam[j] != nmlist[i][j]){
						flag = false;
					}
				}
				if (flag){
					string hx = nmlist[i];
					if (mapp[hx] == true){
						map2[hx] = true;
					}
				}
			}
		}
	}
	for (int i = 1; i <= 45; i ++){
		if (map2[nmlist[i]] == false){
			ans ++;
			cout << ans << "." << nmlist[i] << "δ����" << endl;
		}
	}
	
	cout << "����" << ans << "��ѧ��δ����";
	
	return 0;
}
