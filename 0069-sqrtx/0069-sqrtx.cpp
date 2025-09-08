class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;
        if(x == 1) return 1;

        int beg = 1;
        int end = x;
        int mid = -1;

        while(beg <= end)
        {
            mid = beg + (end - beg) / 2;

            long long  square = static_cast<long long>(mid) * mid;
            if(square > x)
            {
                end = mid - 1;
            }
            else if ( square == x)
            {
                return mid;
            }
            else
            {
                beg = mid + 1;
            }
        }

        return static_cast<int>(std :: round(end));
        }
};