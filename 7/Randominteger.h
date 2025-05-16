class RandomInteger
{
    private:
        int low;
        int high;
        int value;
    public:
        RandomInteger(int low, int high);
        RandomInteger(const RandomInteger &random);
        ~RandomInteger();
        void print() const;
};