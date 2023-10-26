int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char* bytePtr = (unsigned char*)&num;

	return (bytePtr[0] == 1) ? 1 : 0;
}
