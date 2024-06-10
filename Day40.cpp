int speedup = []{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
    	return 0;
}();
#include<vector>

void rotateMatrix(vector<vector<int>> &mat){
	int n = mat[0].size();
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			if(i != j){
				swap(mat[i][j], mat[j][i]);
			}
		}
	}
	
	for(int i=0; i<n; i++){
		reverse(mat[i].begin(), mat[i].end());
	}
	
}
