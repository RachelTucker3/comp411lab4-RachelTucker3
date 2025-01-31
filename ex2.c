/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */


#define NUM 25   /* number of strings */
#define LEN 1000  /* max length of each string */




int main()
{
  char Strings[NUM][LEN];

  printf("Please enter %d strings, one per line:\n", NUM);

  for (int i = 0; i < NUM; i++) {

    fgets(Strings[i], LEN, stdin);

  }

  /* Write a for loop here to read NUM strings.

     Use fgets(), with LEN as an argument to ensure that an input line that is too
     long does not exceed the bounds imposed by the string's length.  Note that the
     newline and NULL characters will be included in LEN.
  */



  puts("\nHere are the strings in the order you entered:");

  for(int i = 0; i < NUM; i++) {

    printf("%s\n", Strings[i]);

  }

  /* Write a for loop here to print all the strings. */
  /* Bubble sort */
  /* Write code here to bubble sort the strings in ascending alphabetical order

     Use the function my_compare_strings() to compare two strings.  If they are out of order,
     use the function my_swap_strings() to swap their contents.

  */

	for( int i = 0; i < NUM; i++) {

		for(int j = 0; j < NUM - 1; j++) {

			if(strcmp(Strings[j], Strings[j +1]) > 0) {
				char tempstring[LEN];

				strcpy(tempstring, Strings[j]);
				strcpy(Strings[j], Strings[j+1]);
				strcpy(Strings[j+1], tempstring);
			}

		}

	}
  
  /* Output sorted list */
  
  puts("\nIn alphabetical order, the strings are:");
  /* Write a for loop here to print all the strings. Feel free to use puts/printf
     etc. for printing each string.
  */

  for(int i = 0; i < NUM; i++) {

    printf("%s\n", Strings[i]);

  }


}
