/*Scrivere una funzione che ricevuta una lettera determini se essa è minuscola o maiuscola e restituisca poi il suo valore
maiuscolo se essa è minuscola, o minuscolo se essa è mmaiuscola. Chiedere all’utente di inserire un valore nel main e
stampi poi nel main il valore restituito dalla funzione */

#include <stdio.h>          //dichiaro le librerie
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define VAL1_MAIUSC 'A'        //dichiaro le macro per non avere magic numbers
#define VAL2_MAIUSC 'Z'
#define VAL1_MIN 'a'
#define VAL2_MIN 'z'
#define DIFF_CASE 32           //differenza fra Maiuscolo e minuscolo


char funzioneCase(char lett1);                 //non è funzione ma procedura, non restituisce nulla ma stampa a video




int main() {
    char lett1;
    char risultato;

    printf("Inserisci una lettera\n");                          //mettere sempre andare a capo alla fine
    scanf("%c", &lett1);
    getchar();

    risultato = funzioneCase(lett1);                            //invochi la funzione con variabile
    return 0;

}

char funzioneCase(char lett1) {
    if ((lett1 >= VAL1_MAIUSC) && (lett1 <= VAL2_MAIUSC)) {

        char valore = lett1 + DIFF_CASE;
        printf("\nIn minuscolo il suo valore e\' %c", valore);
        return valore;                                                                  //in realtà si cerca di mantenere una sola return


    } else if ((lett1 >= VAL1_MIN) && (lett1 <= VAL2_MIN)) {
        char valore = lett1 - DIFF_CASE;
        printf("\nIn maiuscolo il suo valore e\' %c", valore);
        return valore;

    } else {                                                      //Non esiste if senza else
        printf("\nLettera inserita non corretta");//mettere sempre un terzo messaggio per gestire casi di errrore (anche per lo switch case)
          exit(1);                                             //qui mettevo lo spazio e saltava la procedure perché non era fra i caratteri consentiti
    }                                                   // in tutti gli altri casi
}
