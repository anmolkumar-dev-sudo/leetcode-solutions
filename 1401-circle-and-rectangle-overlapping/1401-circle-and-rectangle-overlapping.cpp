class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        bool a=false;
        for(int i=x1;i<=x2;i++){
            for(int j=y1;j<=y2;j++){
                int x=(i-xCenter)*(i-xCenter)+(j-yCenter)*(j-yCenter)-radius*radius;
                if(x<=0)a=true;
            }
            if(a==true)break;
        }
        return a;
    }
};