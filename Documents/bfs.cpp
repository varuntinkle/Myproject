ll bfs(ll x)
{
   queue <ll> q;
   q.push(x);
   b[x]=1;
   ll c1=0;
//printf("1 %lld\n",x);
   while(!q.empty())
   {    ++c1;
   ll y=q.front();
   //printf("2 %lld\n",y);
       q.pop();
       f(i,0,g[y].size())
       {
           if (b[g[y][i]]==0)
               {q.push(g[y][i]);b[g[y][i]]=1;}   //Important line
       }
   }
