/**
 * @input dividend : Integer
 * @input divisor : Integer
 * 
 * @Output Integer
 */
int divide(int dividend, int divisor){
    int i =0,new_dividend,diff,m1=1,m2=1;
    double p,percent,inc;
    
    if(dividend < 0)
        m1 = -1;
    if(divisor < 0)
        m2 = -1;
   
    
   
   if(divisor == 0 || (dividend == INT_MIN&& divisor == -1))
        return INT_MAX;
   
    else if(divisor == dividend || divisor == m1*dividend || dividend == m2*divisor)
        return 1*m1*m2;
    else
    {
           
        dividend = dividend*m1;
        divisor = divisor*m2;
        //time to find
        while(divisor > pow(2,i))
            i++;
            
        p = pow(2,i);
        diff = p - divisor;
        percent = (diff/divisor)*100;
        inc = (percent*dividend)/100 ;
        new_dividend = dividend + inc;
        
        while(i>0)
            {
            new_dividend = new_dividend>>1;
            i--;
            }
    }
    return new_dividend*m1*m2;
    
}

