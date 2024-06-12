vector<int> majorityElement(vector<int> v) {
	int cnt = 0, n=v.size(), curele = v[0];
	vector<int>res; 
	sort(v.begin(), v.end());
	for(int i=0; i<n; i++){
		if(v[i] == curele){
			cnt+=1;
		}
		else{
			cnt = 1;
			curele = v[i];
		}

		if(cnt> (n/3) && find(res.begin(), res.end(), curele) == res.end()){
            res.push_back(curele);    
        }
	}

	return res;
}
