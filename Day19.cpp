//Next Greater Permutation CodingNinjas
vector<int> nextGreaterPermutation(vector<int> &A) {
  
  int pivot = -1;
  for(int i=A.size()-1; i>0; i--){
    if(A[i] > A[i-1]){
      pivot = i-1;
      break;
    }
  }

  if(pivot == -1){
    reverse(A.begin(), A.end());
    return A;
  }

  for(int i= A.size()-1; i>pivot; i--){
    if(A[i]>A[pivot]){
      swap(A[i], A[pivot]);
      break;
    }
  }
  int sortafter = pivot+1;
  sort(A.begin()+sortafter, A.end());

  return A;
}


