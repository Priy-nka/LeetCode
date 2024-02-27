class Solution:
    def isPalindrome(self, s: str) -> bool:
        ans=""
        for i in s:
            if ((ord(i.lower()) >=97) and (ord(i.lower())<=122)) or (ord(i)>=48 and ord(i)<=57 ):
                ans+=i.lower();       
        rev=""        
        for j in ans:
            rev=j+rev;
        print(rev)
        if(ans==rev):
            return True
        return False