class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";                 // To store only alphanumeric characters
        for(char ch:s)
        {
            if(isalpha(ch))             // Check if character is alphabet 
            {
                ch = tolower(ch);       // Convert char to lower case
                temp += ch;
            }
            else if(isdigit(ch))
                temp += ch;
        }
            
        if(temp.size()<=1)
            return true;
        int i=0, j=temp.size()-1;
        while(i<=j)                     // Checking for Palindrome
        {
            if(temp[i]!=temp[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};
