vector<int> gradingStudents(vector<int> grades) {
    vector<int> result;

    for (int i = 0; i < grades.size(); i++){
        if (grades[i] < 38)
            result.push_back(grades[i]);
        else{
            int rem = grades[i]%5;
            int rounded = grades[i]+5-rem;
            if (rounded-grades[i] < 3)
                result.push_back(rounded);
            else
                result.push_back(grades[i]);
        }
    }

    return result;
}
