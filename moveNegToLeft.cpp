pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
    int cnt(0);
    vector<int> vect;
	for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
               ++cnt;
               arr1[i]=-1;
               arr2[j]=-1;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(arr1[i]!=-1){
            vect.push_back(arr1[i]);
        }
    }
    for(int i=0;i<m;i++){
        if(arr2[i]!=-1){
            vect.push_back(arr2[i]);
        }
    }
return cnt,vect;
}