#include <stdio.h>
#include <stdlib.h>

void rgb_string_to_int_array(const char *inputString, char delimiter, int **resultArray)
{
  // Count the number of integers in the string
  int count = 1;
  for (const char *ptr = inputString; *ptr != '\0'; ++ptr)
  {
    if (*ptr == delimiter)
    {
      count++;
    }
  }

  // Allocate memory for the integer array
  *resultArray = (int *)malloc(count * sizeof(int));
  if (*resultArray == NULL)
  {
    fprintf(stderr, "Memory allocation failed\n");
    exit(EXIT_FAILURE);
  }

  // Use sscanf to parse the string and store the integers in the array
  int currentIndex = 0;
  sscanf(inputString, "%d", &(*resultArray)[currentIndex++]);
  for (const char *ptr = inputString; *ptr != '\0'; ++ptr)
  {
    if (*ptr == delimiter)
    {
      sscanf(ptr + 1, "%d", &(*resultArray)[currentIndex++]);
    }
  }
}