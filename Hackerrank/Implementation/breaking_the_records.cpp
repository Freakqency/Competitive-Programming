vector<int> breakingRecords(vector<int> scores) {
    int low = scores[0];
    int low_count = 0;
    int high = scores[0];
    int high_count = 0;
    for (int i = 1; i < scores.size(); i++){
        if (scores[i] < low){
            low = scores[i];
            low_count++;
        }
        if (scores[i] > high){
            high = scores[i];
            high_count++;
        }
    }
    vector<int> result;
    result.push_back(high_count);
    result.push_back(low_count);
    
    return result;
}
