class Solution {
public:
    bool detectCapitalUse(string word) {
        bool case1 = true, case2 = true, case3 = true;
        
        // Case 1: All Uppercase
        for(int i=0; i<word.size(); i++)
            if(!isupper(word[i]))
            {
                case1 = false;
                break;
            }
        if(case1)
            return true;
        
        // Case 2: All Lowercase
        for(int i=0; i<word.size(); i++)
            if(!islower(word[i]))
            {
                case2 = false;
                break;
            }
        if(case2)
            return true;
        
        // case 3: Only first letter capital
        if (!isupper(word[0])) 
            case3 = false;
        
        if (case3) {
            for (int i = 1; i < word.size(); i++)
            {
                if (!islower(word[i]))
                {
                    case3 = false;
                    break;
                }
            }
        }
        if (case3)
            return true;
        
        return false;
    }
};
