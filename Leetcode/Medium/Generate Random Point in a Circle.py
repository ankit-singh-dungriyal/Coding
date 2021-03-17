class Solution(object):

    x=0;
    y=0;
    xl=0;
    xr=0;
    yl=0;
    yr=0;
    def __init__(self, radius, x_center, y_center):
        """
        :type radius: float
        :type x_center: float
        :type y_center: float
        """
        self.x=x_center;
        self.y=y_center;
        self.xl=x_center-radius
        self.xr=x_center+radius
        self.yl=y_center-radius
        self.yr=y_center+radius
        self.r=radius;
        

    def randPoint(self):
        """
        :rtype: List[float]
        """

        while True:
            x1=random.uniform(self.xl,self.xr);
            y1=random.uniform(self.yl,self.yr);
            if((self.x-x1)**2+(self.y-y1)**2<=self.r*self.r):
                return [x1,y1]
            
        # y1=math.sqrt(self.r*self.r-(self.x-x1)*(self.x-x1))+self.y;
        # return [x1,y1];


# Your Solution object will be instantiated and called as such:
# obj = Solution(radius, x_center, y_center)
# param_1 = obj.randPoint()
