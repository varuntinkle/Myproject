ll  dfs(ll x)
{//printf("%d\n",x);
   stack <ll> s;
   s.push(x);
   ll c1=0;
   while(!s.empty())
   {++c1;
       y=s.top();
       s.pop();
       b[y]=1;
       f(i,0,g[y].size())
       {
           if (b[g[y][i]]==0)
               {s.push(g[y][i]); b[g[y][i]]=1;}
       }
   }
   return c1;
 
}
