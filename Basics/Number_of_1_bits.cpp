class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int a = 0;
        while (n > 0)
        {
            a += (n % 2);
            n = n >> 1;
        }
        return a;
    }
};