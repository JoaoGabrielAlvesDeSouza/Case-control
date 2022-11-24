#include <stdio.h>
#include <string.h>

// em todas as funções as variáveis inteiras recebem as letras pois essa é uma forma de
// captar o codigo ascii em decimal de cada uma

int isupper (int letter) {
	
	if (letter >= 65 && letter <= 90) {
			
		return 1;
			
	} else {
		
		return 0;
		
	}
	
}

int islower (int letter) {
	
	if (letter >= 97 && letter <= 122) {
			
		return 1;
			
	} else {
		
		return 0;
		
	}
	
}

int lowercase (char * word) {
	
	int letter, i;
	
	if (word != NULL && strlen (word) != 0) {
	
	    for (i = 0; i <= strlen (word); i ++) {
		
		    letter = word [i];
		
		    if (isupper (letter)) {
			
			    letter = letter + 32;
		    	word [i] = letter;
			
	    	}
		
     	}
     	
     	return 1;
	
	} else {
	
	    return 0;
	
	}
	
}


int uppercase (char * word) {
	
	int letter, i;
	
	if (word != NULL && strlen (word) != 0) {
	
    	for (i = 0; i < strlen (word); i ++) {
		
    		letter = word [i];
		
	    	if (islower (letter)) {
			
    			letter = letter - 32;
	    		word [i] = letter;
			
    		}
		
    	}
    	
    	return 1;
	
	} else {
		
		return 0;
		
	}
	
}

int main ( ) {
	
	char word [100];
	
	printf ("digite uma frase : ");
	scanf ("%s" , word);
	
	lowercase (word);
	printf ("%s \n" , word);
	
	uppercase (word);
	printf ("%s" , word);
	
}
