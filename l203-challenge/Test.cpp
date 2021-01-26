#include "Test.h"

Test::Test() : data {0} {}

Test::Test(int data) : data {data} {}

int Test::get_data() const
{
    return data;
}