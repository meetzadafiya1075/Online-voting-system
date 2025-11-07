#include <stdio.h>
#include <string.h>

struct Candidate
{
    char name[50];
    int votes;
};

struct Candidate c[4]=
{
    {"mahendra nodi"},
    {"mehul gandi"},
    {"arvind kesrilal"},
    {"mamta chatarjee"}
};

int sv = 0;

void castVote()
 {
    int choice;
    printf("\n\n #### Please choose your Candidate ####\n\n");

    for (int i = 0; i < 4; i++) {
        printf("\n %d. %s", i + 1, c[i].name);
    }
    printf("\n 5. None of These");

    printf("\n\n Input your choice (1 - 4) : ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4)
        {
        c[choice - 1].votes++;
        printf("\n Thanks for voting for %s !!", c[choice - 1].name);
    }
    else if (choice == 5)
        {
        sv++;
        printf("\n Spoiled vote recorded !!");
    }
    else
        {
        printf("\n Error: Wrong Choice !! Please retry");
        getchar();
    }
}

void votesCount()
{
    printf("\n\n ##### Voting Statistics #####\n");

    for (int i = 0; i < 4; i++)
        {
        printf("\n %s - %d", c[i].name, c[i].votes);
    }
    printf("\n Spoiled Votes - %d", sv);
}

void getLeadingCandidate()
    {
    printf("\n\n  #### Leading Candidate ####\n\n");

    int maxVotes = 0;
    int a = -1;

    for (int i = 0; i < 4; i++)
        {
        if (c[i].votes > maxVotes)
        {
            maxVotes = c[i].votes;
            a = i;
        }
    }

    if (a != -1)
        {
        printf("[%s]", c[a].name);
    }
    else
        {
        printf("----- Warning !!! No-win situation----");
    }
}

int main()
       {
    int choice;

    do
        {
        printf("\n\n ###### Welcome to Election/Voting 2024 ######");
        printf("\n\n 1. Cast the Vote");
        printf("\n 2. Find Vote Count");
        printf("\n 3. Find leading Candidate");
        printf("\n 0. Exit");

        printf("\n\n Please enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                castVote();
                break;
            case 2:
                votesCount();
                break;
            case 3:
                getLeadingCandidate();
                break;
            default:
                printf("\n Error: Invalid Choice");
        }
    }
    while (choice != 0);

    getchar();
    return 0;
}
