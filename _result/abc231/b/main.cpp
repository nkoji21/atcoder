    int max_value = INT_MIN;
    string ans;

    for (auto& entry : s) {
        if (max_value < entry.second) {
            max_value = entry.second;
            ans = entry.first;
        }
    }
    
    cout << ans << endl;