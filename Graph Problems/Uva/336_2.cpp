#include <bits/stdc++.h>
using namespace std;

vector <int> graph[1000];
int visit[1000];
int levelarr[1000];

struct info
{
    int givennode;
    int newnode;
} arr[1000];


struct input
{
    int one;
    int two;
    int check;
    int real_one;
    int real_two;
} pregraph[1000];



bool cmp(int a, int b)
{
    if(a < b) return true;
    else return false;
}


int bfs(int node, int limit)
{
    queue <int> use;
    int level = 0,variable,i;
    use.push(node);
    variable = use.front();
    visit[variable] = 1;
    levelarr[variable] = 0;
    while(use.empty() != 1)
    {
        variable = use.front();
        level = levelarr[variable];
        if(level > limit) {
            break;
        }
        for(i = 0; i < graph[variable].size(); i++)
        {
            int got = graph[variable][i];
            if(visit[got] == -1)
            {
                visit[got] = 1;
                levelarr[got] = levelarr[variable] + 1;
                use.push(got);
            }

        }
        use.pop();
    }

}

int main(void)
{
    int edge,i,a,b,j,k,t = 0;
    while(scanf("%d",&edge) == 1)
    {
        if(edge == 0)
        {
            break;
        }
        int numarr1[1000],numarr2[1000];
        j = -1;
        for(i = 1; i <= edge; i++)
        {
            scanf("%d %d",&a,&b);
            pregraph[i].one = a;
            pregraph[i].two = b;
            pregraph[i].check = 0;
            j++;
            numarr1[j] = a;
            j++;
            numarr1[j] = b;
        }
        sort(numarr1,numarr1+j+1,cmp);
        k = -1;
        for(i = 0; i <= j; i++)
        {
            k++;
            numarr2[k] = numarr1[i];

            while((numarr1[i] == numarr1[i+1]) && (i+1) <= j)
            {
                i++;
            }

        }
        for(i = 0; i <= k; i++)
        {
            for(j = 0; j <= edge; j++)
            {
                if(numarr2[i] == pregraph[j].one)
                {
                    pregraph[j].real_one = i;

                }
                if(numarr2[i] == pregraph[j].two)
                {
                    pregraph[j].real_two = i;

                }
            }
        }

        for(i = 1; i <= edge; i++)
        {
            int variable1,variable2;
            variable1 = pregraph[i].real_one;
            variable2 = pregraph[i].real_two;
            graph[variable1].push_back(variable2);
            graph[variable2].push_back(variable1);
        }
        int node = k;
        int test_node,span,dorkar;
        while((scanf("%d %d",&test_node,&span) == 2))
        {
            if(test_node == 0 && span == 0)
            {
                break;
            }
            dorkar = test_node;
            for(i = 1; i <= edge; i++)
            {
                if(pregraph[i].one == test_node)
                {
                    test_node = pregraph[i].real_one;
                    break;
                }
                else if(pregraph[i].two == test_node)
                {
                    test_node = pregraph[i].real_two;
                    break;
                }
            }
            for(i = 0; i < 1000; i++)
            {
                visit[i] = -1;
                levelarr[i] = -1;
            }
            bfs(test_node,span);
            int cnt = 0;
            for(i = 0; i <= node;i++) {
                if(visit[i] == 1 && levelarr[i] <= span) {
                   cnt++;
                }
            }
            t++;
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",t,node - cnt + 1,dorkar,span);

        }
       for(i = 0; i < 1000; i++) {
         graph[i].clear();
       }
    }
    return 0;

}
