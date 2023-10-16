#include<bits/stdc++.h>
using namespace std;
int MAX=0x7fffffff;
struct edge{
	int u,v,w;
}e[500005];
int fa[5001];
int cont=1;
bool cmp(edge a,edge b)
{
	return a.w<b.w;
}

int find(int a)
{
	while(fa[a]!=a) 
	{
		a=fa[a]=fa[fa[a]];  //路径压缩 
	}
	return a;
}

int main()
{
	int n,m,eu,ev;
	scanf("%d %d",&n,&m);
	bool isset[n+1];
	int i,u,v,w;
	memset(isset,false,(n+1)*sizeof(bool));
	for(i=1;i<=m;i++)
	{
		scanf("%d %d %d",&e[i].u,&e[i].v,&e[i].w);
	}
	
	for(i=1;i<=n;i++)
	fa[i]=i; 
	sort(e,e+m,cmp);  //对边按权值从小到大排序 
	int distance=0,min;
	i=n;
	for(int j=1;j<=m;j++)
	{
		eu=find(e[j].u);
		ev=find(e[j].v);
		if(eu==ev)
		continue;
		fa[ev]=eu;//并查集的合并 
		i--;
		distance+=e[j].w;
		if(i==1)
		break;
	}
	if(i!=1)
	printf("orz");
	else
	printf("%d",distance);
}
