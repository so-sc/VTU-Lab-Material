
#include<stdio.h>
#include<stdlib.h>
int st[10],top = -1,v[10],a[10][10],u[10],n,q[10],front = 0,rear = -1;
void dfs(int s)
{
    int i;
    v[s]= 1;
    st[++top] = s;
    for(i =1;i<=n;i++)
    {
        if(a[s][i] == 1&& v[i]==0)
        {
            printf("%d->%d\n",s,i);
            dfs(i);
        }
    }
}
void bfs(int s)
{
    int m,i;
    u[s] = 1;
    q[++rear] = s;
    printf("Nodes reachable from %d are\n",s);
    while(front<= rear)
    {
        m = q[front++];
        for(i=1;i<=n;i++)
        {
            if(a[m][i] == 1&&u[i]==0)
            {
                q[++rear] = i;
                printf("%d\n",i);
                u[i] = 1;
            }
        }
    }
}
void main()
{
    int s,i,j,ch;
    while(1)
    {
        printf("1.Create\n2.DFS\n3.BFS\n4.Exit");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter number of vertices\n");
            scanf("%d",&n);
            printf("Adjacency matrix representation\n");
            for(i = 1;i<=n;i++)
            {
                for(j=1;j<=n;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }
            break;
            case 2:printf("print reachable node using DFS method\n");
            printf("Enter the source\n");
            scanf("%d",&s);
            printf("Nodes reachable from %d\n",s);
            dfs(s);
            for(i=1;i<=n;i++)
            {
                if(v[i] == 0)
                {
                    printf("%d is not visited and it is disconnected graph\n",i);
                }
            }
            break;
            case 3:printf("Print reachable node using BFS method\n");
            printf("Enter the source\n");
            scanf("%d",&s);
            bfs(s);
            for(i=1;i<=n;i++)
            {
                if(u[i]==0)
                {
                    printf("%d is not visited and it is disconnected graph\n",i);
                }
            }
            break;
            case 4: exit(0);
            
        }
    }    
}
