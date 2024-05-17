class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        int i = 0;
        int max = sandwiches.size();
        while (i < max){
            if (students[0] == sandwiches[0]){
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                max--;
                i = 0;
            }else{
                int s = students[0];
                students.erase(students.begin());
                students.push_back(s);
                i++;
            }
        }
        return students.size();
        
    }
};