#include<iostream>
#include<cstring>
#include<queue>
using namespace std;


const int N=6;
bool graph[N+1][N+1];
enum
{
	WHITE=0,GREY,BLACK	
};
void bfs(int visited[],int start)
{
	queue<int> q;
	q.push(start);
	
	while(!q.empty())
	{
		cout<<q.front()+1<<" ";
		int ele=q.front();
		visited[ele]=GREY;
		q.pop();
		for(int i=0;i<N;i++)
		{
			if(graph[ele][i] == 1 && visited[i] == WHITE)
			{
				q.push(i);	
			}			
		}
		visited[ele]=BLACK;
	}
	cout<<endl;	
}
int main()
{
    int i;
	for(i=0;i<8;i++)
	{
	 	graph[0][1]=1;//1,2
	 	graph[0][3]=1;//1,4
	 	graph[3][1]=1;//4,2
	 	graph[1][4]=1;//2,5
	 	graph[4][3]=1;//5,4
	 	graph[2][4]=1;//3,5
	 	graph[2][5]=1;//3,6
	 	graph[5][5]=1;//5,5
	}
	int visited[N];
	memset(visited,WHITE,sizeof(visited));
	for(i=0;i<N;i++)
	{
		if(visited[i]==WHITE)
			bfs(visited,i);
    }
	return 0;
}
