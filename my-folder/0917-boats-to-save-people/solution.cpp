class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int l = 0, boats = 0;
        int h = people.size()-1;
        while(l<=h){
            if(people[l]+people[h]<=limit){
                l++;
            } 
            h--;
            boats+=1;
        }
        return boats;
    }
};
