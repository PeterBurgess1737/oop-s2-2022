#include <string>

void string_2d_copy(std::string first[][2], std::string second[][2], int n)
{
    for (int i = 0; i < n; i++)
    {
        second[i][0] = first[i][0];
        second[i][1] = first[i][1];
    }
}
