#include <string>

float add_op(float left, float right)
{
    return left + right;
}

float subtract_op(float left, float right)
{
    return left - right;
}

float arithmetic_ops(float left, float right, std::string op)
{
    if (op == "+")
    {
        return add_op(left, right);
    }
    else if (op == "-")
    {
        return subtract_op(left, right);
    }

    return -0.0;
}