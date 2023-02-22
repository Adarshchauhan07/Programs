    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int size1;cin>>size1;
        vector<int>vtr1[size1];
        for(int i=0;i<size1;i++){
            int x;cin>>x;
            vtr1.push_back(x);
        }

        int size2;cin>>size2;
        vector<int>vtr2;
        for(int i=0;i<size2;i++){
            int x;cin>>x;
            vtr2.push_back(x);
        }


        int cnt(0);
        vector<int>vtr3;
        for(int i=0;i<size1;i++){
            for(int j=0;j<size2;j++){
                if(vtr1[i]==vtr2[j] && vtr1[i]!=-1 && vtr2[j]!=-1){
                    cnt++;
                    vtr1[i]=-1;
                    vtr2[j]=-1;
                }
            }
        }
        cout<<"Total count is"<<cnt;
        return 0;
    }