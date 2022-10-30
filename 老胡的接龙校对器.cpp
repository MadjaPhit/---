

#include<bits/stdc++.h>

using namespace std;

map<string, bool> mapp;
map<string, bool> map2;
string nam;
const int n = 45;
int ans = 0;
string nmlist[50] = {"yee", "唐紫芯紫仪", "唐紫芯紫仪", "韦茹宁", "张皓博", "邵乐言", "张彧", "王子卓", "徐泽霖", "向星翰", "李悦萌", "梁恬毓", "李乐妍", "李琳悦", "李瑞雪", "张一帆", "李欣蕊", "陈梓宜", "关宇宸", "李一非", "李赫琛", "郭仲埙", "李佳航", "张雅甜", "刘君鹏", "昌靖凯", "司澍衡", "陈佳诺", "王子莘", "陈思含", "陈钰铜", "袁晨熤", "毕芷萱", "蒋松泽", "殷铭悦", "宋垚臻", "任子萱", "张秦玉", "白莹洁", "陈雨萱", "李文树", "姜乐欣", "赵钰涵赵钰轩", "赵钰涵赵钰轩", "贾怡萱", "吴浩宇"};

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
			cout << ans << "." << nmlist[i] << "未接龙" << endl;
		}
	}
	
	cout << "共有" << ans << "名学生未接龙";
	
	return 0;
}
