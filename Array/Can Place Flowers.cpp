//link to problem https://leetcode.com/problems/can-place-flowers/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
            int l = flowerbed.size();
            int count = 0;
            for (int i = 0; i < l; i++) {
                if (flowerbed[i] == 0) {
                    int prev = i == 0 ? 0 : flowerbed[i - 1];
                    int next = i == l - 1 ? 0 : flowerbed[i + 1];
                    if ((prev | next) == 0) { // if(prev == 0 &&  next == 0) {
                        flowerbed[i] = 1;
                        count++;
                    }
                }
            }

            return count >= n;
        }
};
