/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long int l=1,r=n;
        long long int ans;
        
        
        while(1)
        {
            long long int x=(l+r)/2;
            if(guess(x)==0)
            {
                ans=x;
                break;
            }
            else if(guess(x)==-1)
            {
                r=x-1;
            }
            else if(guess(x)==1)
            {
                l=x+1;
            }
            
            
        }
        
        return ans;
        
    }
};
