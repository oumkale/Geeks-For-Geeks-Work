void dfs(int s, vector<int> g[], bool vis[])
{
    cout<< s<<" ";
     vis[s]=true;
     vector<int>::iterator it;
     
     for(auto it=g[s].begin();it!=g[s].end();it++)
     {
       if(!vis[*it])
          dfs(*it,g,vis);
      //dfs();
     }
    // Your code here

}
