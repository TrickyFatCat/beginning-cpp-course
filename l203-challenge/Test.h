#ifndef _TEST_H_
#define _TEST_H_

class Test
{
private:
    int data;
public:
    Test();
    Test(int data);
    int get_data() const;
    ~Test();
};

#endif