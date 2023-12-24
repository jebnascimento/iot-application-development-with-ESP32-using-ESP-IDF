#if !defined UTILS_H_
#define UTILS_H_


/**
 * split the string of an RGB color representation into an array of integers
 * @param const char* inputString -> string to split
 * @param char delimitar -> character delimiter that will be used to split the string, default is ','(comma)
 * @param int **resultArray -> array of integers that will be set by reference
 * 
 * example: rgb_string_to_int_array("128, 56, 255") results in resultArray = [128, 56, 255]
 * resultArray[0] = 128
 * resultArray[1] = 255
 * resultArray[2] = 128
*/
void rgb_string_to_int_array(const char *inputString, char delimiter, int **resultArray);

#endif