class Solution {
public:
    string intToRoman(int num) {
    int ans=0;
    string s;
    if(num>=1000)
    {
        ans=num/1000;
        num%=1000;
        while(ans--)
        {
            s+="M";
        }
        ans=0;
        
    }
    if(num>=900 && num<1000)
    {
        s+="CM";
        num-=900;
    }

    if(num>=500)
    {
     ans=num/500;
     num%=500;
     while(ans--)
     {
        s+="D";
     }
     ans=0;
    }

    if(num>=400)
    {
        s+="CD";
        num-=400;
    }
    if(num>=100)
    {
        ans=num/100;
        num%=100;
        while(ans--)
        {
            s+="C";
        }
        ans=0;
    }
    if(num>=90)
    {
        s+="XC";
        num-=90;
    }

    if(num>=50)
    {
        ans=num/50;
        num%=50;
        while(ans--)
        {
            s+="L";
        }
        ans=0;
    }
    if(num>=40)
    {
        s+="XL";
        num-=40;
    }
    if(num>=10)
    {
        ans=num/10;
        num%=10;
        while(ans--)
        {
            s+="X";
        }
        ans=0;
    }

    if(num==9)
    {
        s+="IX";
        num-=9;
    }
    if(num>=5)
    {
        s+="V";
        num-=5;
    }
    if(num==4)
    {
        s+="IV";
        num-=4;
    }
    while(num--)
    {
        s+="I";
    }
    return s;
    }
};