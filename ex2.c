
#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */


#define NUM 25   /* number of strings */
#define LEN 1000  /* max length of each string */



int my_compare_strings(char string1[], char string2[]) {

  for(int x = 0; x < LEN; x++) {

    if(string1[x] != string2[x]) {

      if(string1[x] < string2[x]) {

        return -1;

      } if(string1[x] > string2[x]) {

          return 1;

      }

    }else {

      return 0;

    }

  }



/* Write code here to compare string1 and string2, character by character.
     WITHOUT USING ANY C STRING LIBRARY FUNCTIONS.

     The max length of the strings is LEN, though they may be shorter so look
     for the string terminators.

     This function should return:
      -1 if string1 comes before string2 in alphabetical order
       0 if string1 is the same as string2
      +1 if string1 comes after string2 in alphabetical order

      Here, alphabetical order is defined simply by the numerical value
      of the characters in the string, from left to right.  See the writeup
      for more details.
  */
}


void my_swap_strings(char string1[], char string2[]) {
  char temp;    // char variable used in swapping one character at a time

  /* Write code here to swap the contents of string1 and string2, one
     character at a time, WITHOUT USING ANY C STRING LIBRARY FUNCTIONS.

     The max length of the strings is LEN, though they may be shorter, so look
     for the string terminators.
  */

  for(int i = 0; i < LEN; i++) {

    char str1 = string1[i];
    char str2 = string2[i];

  //  if(str1 == NULL char && str2 == NULL char) {

    //  return;

    //}

    temp = string1[i];
    string1[i] = string2[i];
    string2[i] = temp;

  }

}


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


  puts("\nIn alphabetical order, the strings are:");
  /* Write a for loop here to print all the strings. Feel free to use puts/printf
     etc. for printing each string.
  */

  for(int i = 0; i < NUM; i++) {

    if(my_compare_strings(Strings[i], Strings[i+1]) == 1 || my_compare_strings(Strings[i], Strings[i+1]) == 0) {

      i = i;

    } else {

  for(int i = 0; i < NUM; i++) {

    if(my_compare_strings(Strings[i], Strings[i+1]) == -1) {

      my_swap_strings(Strings[i], Strings[i+1]);

    }

    }

  }

  }

  for(int i = 0; i < NUM; i++) {

    printf("%s\n", Strings[i]);

  }

}
