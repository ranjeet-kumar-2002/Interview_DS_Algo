// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//      int vertex,edges;cin>>vertex>>edges;
//      vector<vector<bool>>adjMat(vertex,vector<bool>(vertex,false));
//      int v,u;
//      for(int i = 0;i<edges;i++){
//           cin>>u>>v;
//           adjMat[u][v]=1;
//           adjMat[v][u]=1;
//      }
//       for(int i =0;i<vertex;i++){
//           for(int j = 0;j<vertex;j++){
//               cout<<adjMat[i][j]<<" ";
//           }
//           cout<<endl;
//      }
//      return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//      int vertex,edges;cin>>vertex>>edges;
//      vector<vector<int>>adjMat(vertex,vector<int>(vertex,0));
//      int v,u,w;
//      for(int i = 0;i<edges;i++){
//           cin>>u>>v>>w;
//           adjMat[u][v]=w;
//           adjMat[v][u]=w;
//      }
//       for(int i =0;i<vertex;i++){
//           for(int j = 0;j<vertex;j++){
//               cout<<adjMat[i][j]<<" ";
//           }
//           cout<<endl;
//      }
//      return 0;
// }





// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//      int vertex,edges;cin>>vertex>>edges;
//      vector<vector<int>>adjMat(vertex,vector<int>(vertex,0));
//      int v,u;
//      for(int i = 0;i<edges;i++){
//           cin>>u>>v;
//           adjMat[u][v]=1;
//      }
//       for(int i =0;i<vertex;i++){
//           for(int j = 0;j<vertex;j++){
//               cout<<adjMat[i][j]<<" ";
//           }
//           cout<<endl;
//      }
//      return 0;
// }



#include<iostream>
#include<vector>
using namespace std;
int main(){
     int vertex,edges;cin>>vertex>>edges;
     vector<vector<int>>adjMat(vertex,vector<int>(vertex,0));
     int v,u,w;
     for(int i = 0;i<edges;i++){
          cin>>u>>v>>w;
          adjMat[u][v]=w;
     }
       for(int i =0;i<vertex;i++){
          for(int j = 0;j<vertex;j++){
               cout<<adjMat[i][j]<<" ";
          }
          cout<<endl;
     }
     return 0;
}
