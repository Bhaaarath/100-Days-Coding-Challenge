//Optimised solution for "Maximum Of All Subarrays Of Size K" using Dequeue in GFG

vector <int> max_of_subarrays(int *arr, int n, int k){
    vector<int>res;
    deque<int>deq;
    
    for(int i=0; i<k; i++){
        while(!deq.empty() && arr[i]>=arr[deq.back()]){
            deq.pop_back();
        }
        deq.push_back(i);
    }
    
    for(int i=k; i<n; i++){
        res.push_back(arr[deq.front()]);
        while(!deq.empty() && deq.front() <= i-k){
            deq.pop_front();
        }
        while(!deq.empty() && arr[i]>=arr[deq.back()]){
            deq.pop_back();
        }
        deq.push_back(i);
    }
    res.push_back(arr[deq.front()]);
    return res;
}
