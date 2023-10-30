#include <stdio.h>

int main() {
    printf("Heart Anatomy:\n");
    char* parts[] = {
            "1. Right Atrium (Atrium Dexter)",
            "2. Left Atrium (Atrium Sinistrum)",
            "3. Right Ventricle (Ventriculus Dexter)",
            "4. Left Ventricle (Ventriculus Sinister)",
            "5. Mitral Valve (Valva Mitralis)",
            "6. Tricuspid Valve (Valva Tricuspidalis)"
    };
    char* descriptions[] = {
            "Receives deoxygenated blood from the body.",
            "Receives oxygenated blood from the lungs.",
            "Pumps blood to the lungs for oxygenation.",
            "Pumps oxygenated blood to the rest of the body.",
            "Separates the left atrium from the left ventricle.",
            "Separates the right atrium from the right ventricle."
    };
    for (int i = 0; i < 6; i++) {
        printf("%s\n", parts[i]);
    }

    int choice;

    printf("Select a part of the heart (1-6): ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 6) {
        printf("%s\n", parts[choice - 1]);
        printf("   - %s\n", descriptions[choice - 1]);
    } else {
        printf("Invalid choice. Please select a number between 1 and 6.\n");
    }

    return 0;
}
