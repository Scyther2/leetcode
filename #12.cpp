class Solution {
public:
    string intToRoman(int num) {
        string ans="";
        
        int t1=num%10;
        
        num/=10;
        
        int t2=num%10;
        
        num/=10;
        
        int t3=num%10;
        
        num/=10;
        
        int t4=num;
        
        
        
        //----------------------
        
        if(t4==1)
        {
            ans+="M";
        }
        else if(t4==2)
        {
            ans+="MM";
        }
        else if(t4==3)
        {
            ans+="MMM";
        }
        
        //----------------------
        
        if(t3==1)
        {
            ans+="C";
        }
        else if(t3==2)
        {
            ans+="CC";
        }
        else if(t3==3)
        {
            ans+="CCC";
        }
        else if(t3==4)
        {
            ans+="CD";
        }
        else if(t3==5)
        {
            ans+="D";
        }
        else if(t3==6)
        {
            ans+="DC";
        }
        else if(t3==7)
        {
            ans+="DCC";
        }
        else if(t3==8)
        {
            ans+="DCCC";
        }
        else if(t3==9)
        {
            ans+="CM";
        }
        
        //----------------------
        
        if(t2==1)
        {
            ans+="X";
        }
        else if(t2==2)
        {
            ans+="XX";
        }
        else if(t2==3)
        {
            ans+="XXX";
        }
        else if(t2==4)
        {
            ans+="XL";
        }
        else if(t2==5)
        {
            ans+="L";
        }
        else if(t2==6)
        {
            ans+="LX";
        }
        else if(t2==7)
        {
            ans+="LXX";
        }
        else if(t2==8)
        {
            ans+="LXXX";
        }
        else if(t2==9)
        {
            ans+="XC";
        }
        
        //----------------------
        
        if(t1==1)
        {
            ans+="I";
        }
        else if(t1==2)
        {
            ans+="II";
        }
        else if(t1==3)
        {
            ans+="III";
        }
        else if(t1==4)
        {
            ans+="IV";
        }
        else if(t1==5)
        {
            ans+="V";
        }
        else if(t1==6)
        {
            ans+="VI";
        }
        else if(t1==7)
        {
            ans+="VII";
        }
        else if(t1==8)
        {
            ans+="VIII";
        }
        else if(t1==9)
        {
            ans+="IX";
        }
        
        
        
        return ans;
    }
};
