class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        for (auto b : bills){
            if (b == 5){
                five++;
            }
            else if (b == 10 && five > 0){
                ten++;
                five--;
            }
            else if (b == 20 && ten > 0 && five > 0){
                ten--;
                five--;
            }
            else if(b == 20 && five > 2){
                five -= 3;
            }
            else{
                return false;
            }
        }
        return true;
    }
};