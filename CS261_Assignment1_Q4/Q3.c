/* CS261- Assignment 1 - Q.3*/
/* Name: Kyle Johnson
 * Date: 06/28/2018
 * Solution description: Program that takes a string from the user, validates
 * the input, and converts it into lower camel case
 */

#include <stdio.h>
#include <stdlib.h>

// Function that takes a lowercase character and returns it as uppercase
char toUpperCase(char ch){
    /*Convert ch to upper case, assuming it is in lower case currently*/
    return (ch-'a'+'A');
}

// Function that takes an uppercase character and returns it as lowercase
char toLowerCase(char ch){
    /*Convert ch to lower case, assuming it is in upper case currently*/
    return (ch-'A'+'a');
}

// Function that takes a C string (array) and returns its length
int stringLength(char s[]) {
    /*Return the length of the string*/
    int length = 0;
    while(s[length]!='\0'){
        length++;
    }
    return length;
}

// Function that takes a series of words, composed of lowercase characters
// and separated by underscores, and removes the underscores and capitalizes
// the character following the underscore
void camelCase(char* word){
    /*Convert to camelCase*/
    int i = 0;
    int j = 0;
    int k = 0;

    while(word[i] != '\0'){
        if(word[i] != '_'){             // if it's an alpha
            word[j++] = word[i];        // copy letter to same place, unless an underscore
        }
        else{                           // is an underscore
            word[j] = word[i+1];
            word[j++] = toUpperCase(word[j]);

            // Shift the rest of the string down one index
            k = j;
            while(word[k] != '\0'){
                word[k] = word[k+1];
                k++;
            }
        }
        i++;
    }
    printf("Revised string: %s\n", word);

}

// Main function of the program
int main(){
    char str[100];
    int length = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int m = 0;
    int n = 0;

    /*Read the string from the keyboard */
    printf("\nEnter a string of words: \n");
    scanf("%[^\n]", &str);

    printf("\nEntered string: %s\n", str);
    length = stringLength(str);

    // Replace non-alphas with underscores
    while(str[i] != '\0'){
        if(str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122){
            str[i] = 95;    // underscore
        }
        i++;
    }

    // Validate input before camelCase is called
    // The function expects all lowercase input, with words single-underscore-separated, only
    // At this point, the string is composed of all alphas (invalid), all underscores (invalid),
    // or a combination of alphas and underscores (valid, unless an underscore is at the end)
    // If the last character is an underscore, the string is invalid
    // Otherwise, check the string for both an alpha and an underscore
    int goodString = 0;
    if(str[length-1] == 95){
        goodString = 0;
    }
    else if(str[0] == 95){                   // if underscore
        while(str[j] != '\0') {
            if (str[j] != 95) {             // if alpha
//                printf("Good string!\n\n");
                goodString = 1;
                break;
            }
            j++;
        }
    }
    else{                                   // if alpha
        while(str[j] != '\0') {
            if (str[j] == 95) {             // if underscore
//                printf("Good string!\n\n");
                goodString = 1;
                break;
            }
            j++;
        }
    }

    // If the string is invalid, print that to the console and return with an error value (1)
    if(!goodString){
        printf("Invalid input string!\n\n");
        return 1;
    }

    // Remove leading underscores
    while(str[0] == 95){
        j = 0;
        k = j+1;
        while (str[j] != '\0') {
            str[j++] = str[k++];
        }
    }

    // Reduce multiple underscores down to just one
    i = 0;
    while(str[i] != '\0'){
        j = i;
        k = j+1;
        while(str[j] == 95 && str[k] == 95){
            m = j;
            n = j+1;
            while (str[m] != '\0') {
                str[m++] = str[n++];
            }
        }
        i++;
    }

    // Call toLowerCase() on all capital alphas
    i = 0;
    while(str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = toLowerCase(str[i]);
        }
        i++;
    }

    /*Call camelCase*/
    camelCase(str);

    return 0;
}