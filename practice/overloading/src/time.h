class Time {
    private:
    unsigned hour, minute, second;
    bool sign;

    public:
    Time(unsigned h, unsigned m, unsigned s, bool is_negative);
    
    void print();

    long long get_total_second();

    Time operator + (Time rhs);
    Time operator - (Time rhs);
    
    void operator += (Time rhs);
    void operator -= (Time rhs);

    bool operator == (Time rhs);
    bool operator > (Time rhs);
    bool operator < (Time rhs);
    bool operator >= (Time rhs);
    bool operator <= (Time rhs);

    friend Time operator - (Time lhs, unsigned rhs);
    friend Time operator - (unsigned lhs, Time lhs);
    
};

Time second_to_time(long long s);
