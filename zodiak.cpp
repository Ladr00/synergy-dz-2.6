#include <iostream>

int main()
{
    
    int day, month, year, zodiac;

    printf("Vvedite datu rojdenia. ");
    printf("day: ");
    scanf("%i",&day);
    printf("mount: ");
    scanf("%i", &month);
    printf("year: ");
    scanf("%i", &year);

    if (year % 4 == 0)
    {
        printf("God vesocosniy.");
    }
    else
    {
        printf("God ne vesocosniy.");
    }

    switch (year%12) 
    {
        case 4:
            printf(" god: krysy.");
            break;
        case 5:
            printf(" god:: byka.");
            break;
        case 6:
            printf(" god: Tigra.");
            break;
        case 7:
            printf(" god: Krolika.");
            break;
        case 8:
            printf(" god: Drakona.");
            break;
        case 9:
            printf(" god: Zmei.");
            break;
        case 10:
            printf(" god: Loshadi.");
            break;
        case 11:
            printf(" god: Kozy.");
            break;
        case 0:
            printf(" god: Obezyany.");
            break;
        case 1:
            printf(" god: Petuha.");
            break;
        case 2:
            printf(" god: Sobaki.");
            break;
        case 3:
            printf(" god: Svini.");
            break;
    }

	if ( (month == 3 && day >= 21) || (month == 4 && day <= 20) )
		printf(" Znak zodiaka: oven.");
	else
	if ( (month == 4 && day >= 21) || (month == 5 && day <= 20) )
		printf(" Znak zodiaka: telec.");
	else
	if ( (month == 5 && day >= 21) || (month == 6 && day <= 21) )
		printf(" Znak zodiaka: bliznecy.");
	else
	if ( (month == 6 && day >= 22) || (month == 7 && day <= 22) )
		printf(" Znak zodiaka: rak.");
	else
	if ( (month == 7 && day >= 23) || (month == 8 && day <= 23) )
		printf(" Znak zodiaka: lev.");
	else
	if ( (month == 8 && day >= 24) || (month == 9 && day <= 23) )
		printf(" Znak zodiaka: deva.");
	else
	if ( (month == 9 && day >= 24) || (month == 10 && day <= 22) )
		printf(" Znak zodiaka: vesy.");
	else
	if ( (month == 10 && day >= 23) || (month == 11 && day <= 22) )
		printf(" Znak zodiaka: skorpion.");
	else
	if ( (month == 11 && day >= 23) || (month == 12 && day <= 21) )
		printf(" Znak zodiaka: strelec.");
	else
	if ( (month == 12 && day >= 22) || (month == 1 && day <= 20) )
		printf(" Znak zodiaka: kozerog.");
	else
	if ( (month == 1 && day >= 21) || (month == 2 && day <= 19) )
		printf(" Znak zodiaka: vodoley.");
	else
	if ( (month == 2 && day >= 20) || (month == 3 && day <= 20) )
		printf(" Znak zodiaka: ryby.");
}
