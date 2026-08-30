#include <stdio.h>

int main() {
    int rage;

    printf("Enter your rage level: ");
    scanf("%d", &rage);

    if (rage >= 100) {
        printf("💀 BRO IS COOKED.\n");
    }
    else if (rage >= 50) {
        printf("🔥 Ragebait successful!\n");
    }
    else {
        printf("😐 Nice try. I didn't fall for it.\n");
    }

    printf("\nRagebait status: ");
    for (int i = 0; i < 5; i++) {
        printf("💀 ");
    }

    printf("\n");

    return 0;
}