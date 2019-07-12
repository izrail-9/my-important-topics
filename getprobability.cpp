double GetProb(double r,double g,double t)
{
double ans = r/t;
if(g>2)
ans += (g/t)*((g-1)/(t-1))*GetProb(r,g-2,t-2);
return ans;
}
