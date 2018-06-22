#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char** argv){
//create Variabels
    char word[256], newword[256], backword[256];
    int i=0, j=0;

//ask user to enter a word
printf("Enter a word:  ");

//get word from user
fgets(word,sizeof(word),stdin);

//display the word to the user
printf("You Entered: %s \n", word);

//convert the inputed words all to lowercase and put into a new Char array

for (i=0; word[i] !='\0'; i++){

    //if the char is not an empty space, send to the new array
    if (word[i]!= ' '){
        newword[j] = tolower(word[i]);
        j++;
    }
}

// get the length of the new word
    int nwlen= strlen(newword)-1;
    int half= nwlen/2;
    int end = nwlen-1;

printf("It is: %i characters long \n",nwlen);

j=0;

//populate the backwords array that contain the word backwords

for(i=0; i<nwlen; i++){
    backword[i]=newword[end];
    //if the characters match, increment j by 1
    if(backword[i] == newword[i]) j++;
    //decrement end by 1
    end--;
}

if (j==nwlen){
    printf("The word is a Palindrome \n");
}
else{
    printf("The word is not a Palindrome \n");
}

    return(EXIT_SUCCESS);
}