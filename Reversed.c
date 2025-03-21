#include <stdio.h>
#include <string.h>

int main() {
    printf("Personalized text decryption tool\n");
    printf("Github : github.com/themain-parsa-dev\n");
    printf("Telegram Profile : https://t.me/theparsadev\n");
    printf("Telegram Channel : https://t.me/themainparsadev\n");

    char *abc_replace[] = {
        "🔥asdssdwxxxxasd", "2sdasd", "__💀__", "Xsdf", ":/sssf🙂s", "@1212", "h3ggbnZ", "🚀re34tyy", "9rty5", "$weree", 
        "wwwwwwwwG", "&sadasd", "Mewrew3", "ewrr3❤️ewr3er", "72hfikkamvkmsmfkjW", "#mainm", "qwqqqQ", "!dfff", "T742222", "+", 
        "xUeer3rew3x", "asdasdV", "Y.;ree3sad;", "7771", "eeeK", "*sdaas22"
    };

    char abc[] = "abcdefghijklmnopqrstuvwxyz";
    char vorodi[500];
    printf("Enter encrypted text: ");
    fgets(vorodi, sizeof(vorodi), stdin);
    vorodi[strcspn(vorodi, "\n")] = 0;

    printf("Decrypted text: ");
    int i = 0;
    while (i < strlen(vorodi)) {
        int found = 0;
        for (int j = 0; j < 26; j++) {
            int len = strlen(abc_replace[j]);
            if (strncmp(&vorodi[i], abc_replace[j], len) == 0) {
                printf("%c", abc[j]);
                i += len;
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%c", vorodi[i]);
            i++;
        }
    }

    printf("\n");
    return 0;
}
