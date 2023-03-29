/**
 * get_unsigned_integer_string - Get the string representation of an unsigned integer in the specified base
 * @value: The value to convert to a string
 * @buffer: The buffer to write the string to
 * @size: The size of the buffer
 * @base: The base to use (8 for octal, 10 for decimal, 16 for hexadecimal)
 * @uppercase: Whether to use uppercase letters for hexadecimal (0 for lowercase, non-zero for uppercase)
 *
 * Return: The number of characters written to the buffer
 */
int get_unsigned_integer_string(unsigned int value, char *buffer, int size, int base, int uppercase)
{
    static const char *digits_lower = "0123456789abcdef";
    static const char *digits_upper = "0123456789ABCDEF";
    const char *digits = uppercase ? digits_upper : digits_lower;
    int i = size - 1;
    int len = 0;

    do {
        buffer[i--] = digits[value % base];
        value /= base;
        len++;
    } while (value > 0 && i >= 0);

    return len;
}
