 int divide(int dividend, int divisor) {
        if(dividend==0)
            return 0;
        if(divisor==1)
            return dividend;
        if(dividend==INT_MIN && divisor==-1)
            return INT_MAX;//overflow
        int sign=1;
        if(dividend>0 && divisor<0 || dividend<0 && divisor>0){
            sign=-1;   
        }
        int a=dividend>0?-dividend:dividend;
        int b=divisor>0?-divisor:divisor;
        int res=div(a,b);
        return sign==-1?-res:res;
     }
    
    int div(int a, int b){
        if(a>b) return 0;
        int count=1;
        int tb=b;
        while(tb>=a-tb && tb<-tb){
            tb+=tb;
            count+=count;
        }
        return count+div(a-tb,b);
    }
