int solve(vector<int>& tasks, vector<int>& people) {
    sort(tasks.begin(), tasks.end());
    sort(people.begin(), people.end());

    int temp = 0, ans = 0;

    for(int i = 0; i < tasks.size(); i++){
        for(int j = temp; j < people.size(); j++){
            if(people[j] >= tasks[i]){
                ans++;
                temp++;
                break;
            }
            else if(j == people.size() - 1 && people[j] < tasks[i]) temp = -1;

            temp++; 
        }

        if(temp == -1) break;
    }

    return ans;
}