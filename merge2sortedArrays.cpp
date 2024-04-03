vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n1=a.size();
    int n2=b.size();
    int i=0,j=0;
    vector<int> unionArr;
    // while(i<n1 && j<n2){    //2 pointers approach
    //     if(a[i]<=b[j]){
    //         if(unionArr.size()==0 || unionArr.back()!=a[i]){
    //             unionArr.push_back(a[i]);
    //         }
    //         i++;
    //     }
    //     else{
    //         if(unionArr.size()==0 || unionArr.back()!=b[j]){
    //             unionArr.push_back(b[j]);
    //         }
    //         j++;
    //     }
    // }
    // while(i<n1){
    //     if(a[i]<=b[j]){
    //         if(unionArr.size()==0 || unionArr.back()!=a[i]){
    //             unionArr.push_back(a[i]);
    //         }
    //         i++;
    //     }
    // }
    // while(j<n2){
    //     if (unionArr.size() == 0 || unionArr.back() != b[j]) {
    //         unionArr.push_back(b[j]);
    //     }
    //     j++;
    // }


set<int> s;                 //using SET
for(int i=0;i<n1;i++){
    s.insert(a[i]);
}
for(int j=0;j<n2;j++){
    s.insert(b[j]);
}
for(auto it:s){
    unionArr.push_back(it);
}



return unionArr;
}

