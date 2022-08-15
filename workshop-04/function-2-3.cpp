// use a function pointer to call the appropriate operator function
// eg to add       arithmetic_ops(10,2,add_op)
// eg to subtract  arithmetic_ops(10,2,subtract_op)
float arithmetic_ops(float left, float right, float (*op)(float,float))
{
	return (*op)(left, right);
}