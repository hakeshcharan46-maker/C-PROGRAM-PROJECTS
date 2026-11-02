#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *fp;
    char ch;

    // 1. CREATE AND WRITE TO THE FILE
    fp = fopen("data.txt", "w"); 
    if (fp == NULL) return 1;
    
    fprintf(fp, " TODAYS PROGRESS .\n"); 
    fprintf(fp, " FIRST WE LEARNT TO CREATE A TEXT FILE THROUGH.\n"); 
    fprintf(fp, " SECOND WE LEARNT HOW TO WRITE INTO A TEXT FILE THROUGH C .\n");
    fprintf(fp, " AND THEN WE LEARNT HOW TO READ A TEXT FILE THROUGH C .\n");  
    fprintf(fp, " FINALLY WE LEARNT TO APPEND INTO A TEXT FILE THROUGH C.\n"); 
    fclose(fp);

    // 2. READ THE FILE (After Writing)
    fp = fopen("data.txt", "r"); 
    if (fp == NULL) return 1;
    
    printf("\n--- READING AFTER WRITE ---\n");
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }
    fclose(fp);

    // 3. APPEND TO THE FILE
    fp = fopen("data.txt", "a"); 
    if (fp == NULL) return 1;
    
    fprintf(fp, " ------ FEEDBACK ------.\n"); 
    fprintf(fp, " 1) OUR C PROGRAM TEACHER IS A GOOD EXPLAINER .\n"); 
    fprintf(fp, " 2) HE EXPLAINS THE COMPLEX TOPICS IN A EAST MANNER.\n"); 
    fprintf(fp, " 3) LEARNING C IS REALLY HELPFUL FOR OUR ENGINEERING CAREER.\n"); 
    fprintf(fp, " 4) SINCE C LANGUAGE IS USED IN MANY REAL LIFE APPLICATIONS , ITS VERY USEFUL TO STUDY .\n"); 
    fprintf(fp, " 5) C LANGUAGE IS ONE THE MOST IMPORTANT SUBJECT IN OUR COLLEGE.\n");
    fclose(fp);

    // 4. READ THE FILE AGAIN (To see the final appended result)
    fp = fopen("data.txt", "r"); 
    if (fp == NULL) return 1;
    
    printf("\n--- READING AFTER APPEND ---\n");
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }
    fclose(fp);

    return 0;
}