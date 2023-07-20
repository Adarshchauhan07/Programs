        int st=0;
        int end=dividend;
        int mid;
        int ans(0);
        
        while(st<=end){
            mid=(st+(end-st))/2;
            if(mid*abs(divisor)==abs(dividend)){
                ans=mid;
            }
            else if(mid*abs(divisor)>abs(dividend)){
                end=mid-1;
            }
            else{
                ans=mid;
                st=mid+1;
            }
        }
        if((divisor<0 && dividend>0) || (divisor>0 && dividend <0)){
            ans/=-1;
        }
        return ans;