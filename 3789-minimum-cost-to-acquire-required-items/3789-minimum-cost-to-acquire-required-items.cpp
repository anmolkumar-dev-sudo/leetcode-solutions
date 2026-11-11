
#define ll long long
class Solution {
public:
    long long minimumCost(int cost1,int cost2,int costBoth,int need1,int need2) {
        ll n1=need1,n2=need2;
        ll c1=cost1,c2=cost2;
        ll cb=costBoth;
        if(cost1+cost2<=costBoth)return n1*c1+n2*c2;
        else{
            ll b=min(n1,n2);
            n1-=b,n2-=b;
            if(n1>0)return b*cb+n1*min(c1,cb);
            if(n2>=0)return b*cb+n2*min(c2,cb);
        } 
        return 0;
    }
};
