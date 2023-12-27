int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    int n = a.size();
    sort(a.begin(), a.end());
    int count = 0;
    int maxi = 0;

    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] - a[i] == 1) {
            count++;
            maxi = max(maxi, count);
        } 
        else if (a[i + 1] - a[i] != 1&& a[i + 1] != a[i]) {
            count = 0;
        }
    }

    return maxi + 1;
}



// maxi +1 esliye kara h humara count 0 index se count karega 
// jaise elemet 1 2 3 4 5 index se 4 tk chilage lekin consitive 5 tk h esliye maxi+1 kara h
// count 1 se esliye nhi kara wo zero se count nhi karta fir esliye maxi mein +1 kara h

// else if (a[i + 1] - a[i] != 1&& a[i + 1] != a[i]) es ka matbl ager mere i+1- i elemt not equl
// yani ke  1 ka diffent nhi to unhe zero kardo and and ager meraa i+1 and i same nhi h tab zero kardena 
  // kiyo ki wo pahle hi count ho chuka h
