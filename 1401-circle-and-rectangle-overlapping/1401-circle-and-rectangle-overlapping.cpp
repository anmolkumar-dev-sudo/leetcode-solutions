class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        bool a=false;

        int x_overlap=max(x1,min(xCenter,x2));
        int y_overlap=max(y1,min(yCenter,y2));

        if((xCenter-x_overlap)*(xCenter-x_overlap)+(yCenter-y_overlap)*(yCenter-y_overlap)<=radius*radius)
            a=true;

        return a;
    }
};