#include <bits/stdc++.h>

using namespace std;

struct stu
{
	string kh;
	int cj;
	int pm;
	int kdbh;
	int kdpm;
};
stu f[100010];

bool cmp(stu a, stu b)
{
	if (a.cj != b.cj)
		return a.cj > b.cj;
	else
		return a.kh < b.kh;
}

int main()
{
	int n;
	cin >> n;
	int k;
	int zongshu = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> k;
		for (int j = zongshu; j < zongshu + k; j++)
		{
			cin >> f[j].kh >> f[j].cj;
			f[j].kdbh = i;
		}
		sort(f + zongshu, f + zongshu + k, cmp);
		f[zongshu].kdpm = 1;
		for (int j = zongshu + 1; j < zongshu + k; j++)
		{
			if (f[j].cj == f[j - 1].cj)
				f[j].kdpm = f[j - 1].kdpm;
			else
				f[j].kdpm = j + 1 - zongshu;
		}
		zongshu += k;
	}
	cout << zongshu << endl;
	sort(f, f + zongshu, cmp);
	f[0].pm = 1;
	for (int i = 1; i < zongshu; i++)
	{
		if (f[i].cj == f[i - 1].cj)
			f[i].pm = f[i - 1].pm;
		else
			f[i].pm = i + 1;
	}
	for (int i = 0; i < zongshu; i++)
	{
		cout << f[i].kh << " " << f[i].pm << " " << f[i].kdbh << " " << f[i].kdpm << endl;
	}
	return 0;
}