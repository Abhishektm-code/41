#include <stdio.h>

int displayScoreboard(int runs, int wickets, int overs) 
{
    printf("\nScoreboard:\n");
    printf("Runs: %d\n", runs);
    printf("Wickets: %d\n", wickets);
    printf("Overs: %d\n", overs);
}
int main() 
{
    int runs = 0, wickets = 0, overs = 0;
    int choice, additionalRuns;

    printf("Welcome to the Cricket Scoreboard!\n");

    while (1) 
    {
        displayScoreboard(runs, wickets, overs);
        
        printf("\nOptions:\n");
        printf("1. Add Runs\n");
        printf("2. Lose Wicket\n");
        printf("3. Add Over\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter runs to add: ");
                scanf("%d", &additionalRuns);
                runs += additionalRuns; 
                break;
            case 2:
                wickets++;
                break;
            case 3:
                overs++;
                break;
            case 4:
                printf("Exiting the scoreboard.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
    return 0;
}