#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    printf("Personalized text encryption tool\n");
    printf("Github : github.com/themain-parsa-dev\n");
    printf("Telegram Profile : https://t.me/theparsadev\n");
    printf("Telegram Channel : https://t.me/themainparsadev\n");

    char abc[] = "abcdefghijklmnopqrstuvwxyz";
    char *abc_replace[] = {
        "🔥asdssdwxxxxasd", "2sdasd", "__💀__", "Xsdf", ":/sssf🙂s", "@1212", "h3ggbnZ", "🚀re34tyy", "9rty5", "$weree", 
        "wwwwwwwwG", "&sadasd", "Mewrew3", "ewrr3❤️ewr3er", "72hfikkamvkmsmfkjW", "#mainm", "qwqqqQ", "!dfff", "T742222", "+", 
        "xUeer3rew3x", "asdasdV", "Y.;ree3sad;", "7771", "eeeK", "*sdaas22"
    };

    char vorodi[100];
    printf("Enter text to encrypt: ");
    fgets(vorodi, sizeof(vorodi), stdin);
    vorodi[strcspn(vorodi, "\n")] = 0;

    printf("Encrypted text: ");
    for (int i = 0; i < strlen(vorodi); i++) {
        char c = tolower(vorodi[i]);
        int found = 0;
        for (int j = 0; j < 26; j++) {
            if (c == abc[j]) {
                printf("%s", abc_replace[j]);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%c", vorodi[i]);
        }
    }

    printf("\n");
    return 0;
}
