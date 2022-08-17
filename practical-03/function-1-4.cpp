void copy_doubles(double *old_array, double *new_array, int length)
{
    for (int offset = 0; offset < length; offset++)
    {
        *(new_array + offset) = *(old_array + offset);
    }
}
