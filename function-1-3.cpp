void copy_integers(int old_array[], int new_array[], int length)
{
    for (int offset = 0; offset < length; offset++)
    {
        *(new_array + offset) = *(old_array + offset);
    }
}
