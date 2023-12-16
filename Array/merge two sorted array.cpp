vector < int > sortedArray(vector < int > a, vector < int > b) {

   for(int i = 0; i < b.size(); i++){
      a.push_back(b[i]);
    }
   sort(a.begin(), a.end());

    vector<int>sorted;

    for(int i = 0; i < a.size(); i++){

    if(a[i] != a[i+1]){

    sorted.push_back(a[i]);

       }

      }

       return sorted;

    }
