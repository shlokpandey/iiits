#include <stdio.h>
#include <conio.h>

// Assignment:1 __ v1.4

int ug1(){
    char day1slot1Course[]= "PC- Sec-A \t Comm Skills-1- Sec-B \n";
    char day1slot2Course[]= "Comm Skills-1- Sec-A \t PC- Sec-B \n";
    char day1slot3Course[]= "DEC- Sec-A \t OC- Sec-B \n";
    char day1slot4Course[]= "OC- Sec-A \t DEC- Sec-B \n";
    char day1slot5Lab[]= "PC- Lab-A \n";

    char day2slot1Course[]= "DMPT- Tut- Sec-A \n";
    char day2slot2Course[]= "DMPT- Sec-A \n";
    char day2slot3Course[]= "DMPT- Sec-B \n";
    char day2slot4Course[]= "---- \n";
    char day2slot5Lab[]= "OC- Lab-A \t DEC- Lab-B \n";

    char day3slot1Course[]= "DEC- Sec-A \t OC- Sec-B \n";
    char day3slot2Course[]= "OC- Sec-A \t DEC- Sec-B \n";
    char day3slot3Course[]= "PC- Sec-A \t Comm Skills-1- Sec-B \n";
    char day3slot4Course[]= "Comm Skills-1- Sec-A \t PC- Sec-B \n";
    char day3slot5Lab[]= "PC- Lab-B \n";

    char day4slot1Course[]= "DMPT- Tut- Sec-B \n";
    char day4slot2Course[]= "DMPT- Sec-A \n";
    char day4slot3Course[]= "DMPT- Sec-B \n";
    char day4slot4Course[]= "DMPT- Tut- Sec-A \n";
    char day4slot5Lab[]= "OC- Lab-B \t DEC- Lab-C \n";

    char day5slot1Course[]= "DMPT- Sec-A \t Comm Skills-1- Sec-B \n";
    char day5slot2Course[]= "Comm Skills-1- Sec-A \t DMPT- Sec-B \n";
    char day5slot3Course[]= "DEC- Sec-A \t OC- Sec-B \n";
    char day5slot4Course[]= "OC- Sec-A \t DEC- Sec-B \n";
    char day5slot5Lab[]= "PC- Lab-A \n";

    char day6slot1Lab[]= "PC- Lab-B \n";
    char day6slot2Lab[]= "PC- Lab-B \n";
    char day6slot3Course[]=  "DMPT- Tut- Sec-B \n";
    char day6slot4Lab[]= "OC- Lab-C \t DEC- Lab-A \n";

    printf("\nSection: A - 113 \t Section: B - 115 \n \n \n");

    printf("MONDAY: \n \n");
    printf("09:00 - 10:00   %s \n",day1slot1Course);
    printf("10:00 - 11:00   %s \n",day1slot2Course);
    printf("11:00 - 11:15   Short Break \n\n");
    printf("11:15 - 12:15   %s \n",day1slot3Course);
    printf("12:15 - 13:30   Lunch Break \n\n");
    printf("13:30 - 14:30   %s \n",day1slot4Course);
    printf("14:30 - 17:30   %s \n \n \n",day1slot5Lab);

    printf("TUESDAY: \n \n");
    printf("09:00 - 10:00   %s \n",day2slot1Course);
    printf("10:00 - 11:00   %s \n",day2slot2Course);
    printf("11:00 - 11:15   Short Break \n\n");
    printf("11:15 - 12:15   %s \n",day2slot3Course);
    printf("12:15 - 13:30   Lunch Break \n\n");
    printf("13:30 - 14:30   %s \n",day2slot4Course);
    printf("14:30 - 17:30   %s \n \n \n",day2slot5Lab);

    printf("WEDNESDAY: \n \n");
    printf("09:00 - 10:00   %s \n",day3slot1Course);
    printf("10:00 - 11:00   %s \n",day3slot2Course);
    printf("11:00 - 11:15   Short Break \n\n");
    printf("11:15 - 12:15   %s \n",day3slot3Course);
    printf("12:15 - 13:30   Lunch Break \n\n");
    printf("13:30 - 14:30   %s \n",day3slot4Course);
    printf("14:30 - 17:30   %s \n \n \n",day3slot5Lab);

    printf("THURSDAY: \n \n");
    printf("09:00 - 10:00   %s \n",day4slot1Course);
    printf("10:00 - 11:00   %s \n",day4slot2Course);
    printf("11:00 - 11:15   Short Break \n\n");
    printf("11:15 - 12:15   %s \n",day4slot3Course);
    printf("12:15 - 13:30   Lunch Break \n\n");
    printf("13:30 - 14:30   %s \n",day4slot4Course);
    printf("14:30 - 17:30   %s \n \n \n",day4slot5Lab);

    printf("FRIDAY: \n \n");
    printf("09:00 - 10:00   %s \n",day5slot1Course);
    printf("10:00 - 11:00   %s \n",day5slot2Course);
    printf("11:00 - 11:15   Short Break \n\n");
    printf("11:15 - 12:15   %s \n",day5slot3Course);
    printf("12:15 - 13:30   Lunch Break \n\n");
    printf("13:30 - 14:30   %s \n",day5slot4Course);
    printf("14:30 - 17:30   %s \n \n \n",day5slot5Lab);

    printf("SATURDAY: \n \n");
    printf("09:00 - 10:00   %s \n",day6slot1Lab);
    printf("10:00 - 11:00   %s \n",day6slot1Lab);
    printf("11:00 - 11:15   Short Break \n\n");
    printf("11:15 - 12:15   %s \n",day6slot2Lab);
    printf("12:15 - 13:30   Lunch Break \n\n");
    printf("13:30 - 14:30   %s \n",day6slot3Course);
    printf("14:30 - 17:30   %s \n \n \n",day6slot4Lab);

    return 0;
}

int ug2(){
    char day1slot1Course[]= "Algo- Sec-A \n";
    char day1slot2Course[]= "DSAA- Sec-A \t Algo- Sec-B \n";
    char day1slot3Course[]= "OS- Sec-A \t ASE-1- Sec-B \n";
    char day1slot4Course[]= "ASE-1- Sec-A \t OS- Sec-B \n";
    char day1slot5Lab[]= "DSAA- Lab- Sec-A \t ASE-1- Lab- Sec-B \n";

    char day2slot1Course[]= "Maths-3- Sec-B \t Comm Skills-3- Sec-A\n";
    char day2slot2Course[]= "Comm Skills-3- Sec-B \t Maths-3- Sec-A \n";
    char day2slot3Course[]= "DSAA- Sec-B \n";
    char day2slot4Course[]= "---- \n";
    char day2slot5Lab[]= "---- \n";

    char day3slot1Course[]= "Comm Skills-3- Sec-A \t OS- Sec-B \n";
    char day3slot2Course[]= "OS- Sec-A \t Comm Skills-3- Sec-B \n";
    char day3slot3Course[]= "Algo- Sec-A \t DSAA- Sec-B \n";
    char day3slot4Course[]= "DSAA- Sec-A \t Algo- Sec-B \n";
    char day3slot5Lab[]= "DSAA- Lab- Sec-B \t ASE-1- Lab- Sec-A \n";

    char day4slot1Course[]= "Maths-3- Sec-B \t Comm Skills-3- Sec-A \n";
    char day4slot2Course[]= "Comm Skills-3- Sec-B \t Maths-3- Sec-A \n";
    char day4slot3Course[]= "Algo- Sec-A \t DSAA- Tut- Sec-B \n";
    char day4slot4Course[]= "DSAA- Tut- Sec-A  \t Algo \n";
    char day4slot5Lab[]= "---- \n";

    char day5slot1Course[]= "Maths-3- Sec-B \t DSAA- Tut- Sec-A \n";
    char day5slot2Course[]= "DSAA- Tut- Sec-B \t Maths-3- Sec-A \n";
    char day5slot3Course[]= "OS- Sec-A \t ASE-1- Sec-B \n";
    char day5slot4Course[]= "ASE-1- Sec-A \t OS- Sec-B \n";
    char day5slot5Lab[]= "OS- Sec-A \t ALGO- Lab- Sec-B \n";
    char day5slot6Lab[]= "ALGO- Lab- Sec-A \t OS- Sec-B \n";
    char day5slot7Lab[]= "---- \n";

    char day6slot1Course[]= "Maths-3- Sec-B \n";
    char day6slot2Course[]= "Maths-3- Sec-A \n";
    char day6slot3Course[]= "ASE-1- Sec-A \n";
    char day6slot4Course[]= "ASE-1- Sec-B \n";
    char day6slot5Lab[]= "---- \n";

    printf("\nSection: A - 101 \t Section: B - 103 \n \n \n");

    printf("MONDAY: \n \n");
    printf("09:00 - 10:00   %s \n",day1slot1Course);
    printf("10:00 - 11:00   %s \n",day1slot2Course);
    printf("11:00 - 11:15   Short Break \n\n");
    printf("11:15 - 12:15   %s \n",day1slot3Course);
    printf("12:15 - 13:15   %s \n",day1slot4Course);
    printf("13:15 - 14:30   Lunch Break \n\n");
    printf("14:30 - 17:30   %s \n \n \n",day1slot5Lab);

    printf("TUESDAY: \n \n");
    printf("09:00 - 10:00   %s \n",day2slot1Course);
    printf("10:00 - 11:00   %s \n",day2slot2Course);
    printf("11:00 - 11:15   Short Break \n\n");
    printf("11:15 - 12:15   %s \n",day2slot3Course);
    printf("12:15 - 13:15   %s \n",day2slot4Course);
    printf("13:15 - 14:30   Lunch Break \n\n");
    printf("14:30 - 17:30   %s \n \n \n",day2slot5Lab);

    printf("WEDNESDAY: \n \n");
    printf("09:00 - 10:00   %s \n",day3slot1Course);
    printf("10:00 - 11:00   %s \n",day3slot2Course);
    printf("11:00 - 11:15   Short Break \n\n");
    printf("11:15 - 12:15   %s \n",day3slot3Course);
    printf("12:15 - 13:15   %s \n",day3slot4Course);
    printf("13:15 - 14:30   Lunch Break \n\n");
    printf("14:30 - 17:30   %s \n \n \n",day3slot5Lab);

    printf("THURSDAY: \n \n");
    printf("09:00 - 10:00   %s \n",day4slot1Course);
    printf("10:00 - 11:00   %s \n",day4slot2Course);
    printf("11:00 - 11:15   Short Break \n\n");
    printf("11:15 - 12:15   %s \n",day4slot3Course);
    printf("12:15 - 13:15   %s \n",day4slot4Course);
    printf("13:15 - 14:30   Lunch Break \n\n");
    printf("14:30 - 17:30   %s \n \n \n",day4slot5Lab);

    printf("FRIDAY: \n \n");
    printf("09:00 - 10:00   %s \n",day5slot1Course);
    printf("10:00 - 11:00   %s \n",day5slot2Course);
    printf("11:00 - 11:15   Short Break \n\n");
    printf("11:15 - 12:15   %s \n",day5slot3Course);
    printf("12:15 - 13:15   %s \n",day5slot4Course);
    printf("13:15 - 14:30   Lunch Break \n\n");
    printf("14:30 - 15:30   %s \n",day5slot5Lab);
    printf("15:30 - 16:30   %s \n",day5slot6Lab);
    printf("16:30 - 17:30   %s \n \n \n",day5slot7Lab);

    printf("SATURDAY: \n \n");
    printf("09:00 - 10:00   %s \n",day6slot1Course);
    printf("10:00 - 11:00   %s \n",day6slot2Course);
    printf("11:00 - 11:15   Short Break \n\n");
    printf("11:15 - 12:15   %s \n",day6slot3Course);
    printf("12:15 - 13:15   %s \n",day6slot4Course);
    printf("13:15 - 14:30   Lunch Break \n\n");
    printf("14:30 - 17:30   %s \n \n \n",day6slot5Lab);

    return 0;

}

int other(){
    char day1slot1Course[]= "DM - 201 \n";
    char day1slot2Course[]= "IOT - 203 \n";
    char day1slot3Course[]= "Digicomm - 201 \n";
    char day1slot4Course[]= "IR - 113 \n";
    char day1slot5Course[]= "CSD - 115 \n";
    char day1slot6Course[]= "DIP - 115 \n";
    char day1slot7Course[]= "EMT - 203 \n";
    char day1slot8Course[]= "DIP - 115 \n";

    char day2slot1Course[]= "CSD - 115 \n";
    char day2slot2Course[]= "MERS - 201 \n";
    char day2slot3Course[]= "SDS - 101 \t DE - 113 \n";
    char day2slot4Course[]= "---- \n";
    char day2slot5Course[]= "SDS - 101 \t DE - 115 \n";
    char day2slot6Course[]= "TOC - 101 \t Digicomm - 201 \n";
    char day2slot7Course[]= "GE - 203 \t LS - 101 \t APS - 201 \n";
    char day2slot8Course[]= "IR - 101 \t VLSI - 203 \n";

    char day3slot1Course[]= "IOT - 203 \n";
    char day3slot2Course[]= "DM - 201 \t VLSI - 203 \n";
    char day3slot3Course[]= "EMT - 203 \n";
    char day3slot4Course[]= "IOT - 203 \n";
    char day3slot5Course[]= "SDS - 101 \t DE - 115 \n";
    char day3slot6Course[]= "TOC - 101 \t Digicomm - 201 \n";
    char day3slot7Course[]= "DIP - 115 \n";
    char day3slot8Course[]= "YW - 201 \n";

    char day4slot1Course[]= "TOC - 113 \t Digicomm - 201 \n";
    char day4slot2Course[]= "MERS - 203 \n";
    char day4slot3Course[]= "EMT - 203 \n";
    char day4slot4Course[]= "SDS - 113 \t DE - 115 \n";
    char day4slot5Course[]= "IR - 101 \t VLSI - 203 \n";
    char day4slot6Course[]= "IR - 101 \n";
    char day4slot7Course[]= "GE - 203 \t LS - 101 \n";
    char day4slot8Course[]= "CSD - 115 \n";

    char day5slot1Course[]= "DM - 201 \t VLSI - 203 \n";
    char day5slot2Course[]= "MERS - 203 \n";
    char day5slot3Course[]= "ASE-II - Sec-A - 113 \n";
    char day5slot4Course[]= "ASE-II - Sec-B - 113 \n";
    char day5slot5Course[]= "DIP - 115 \n";
    char day5slot6Course[]= "CSD - 115 \n";
    char day5slot7Course[]= "IOT - 203 \n";
    char day5slot8Course[]= "YW - 201 \n";

    char day6slot1Course[]= "ASE-II - Project Hour - 115 \n";
    char day6slot2Course[]= "ASE-II - Project Hour - 115 \t MERS - 203 \t DM - 201 \n";
    char day6slot3Course[]= "FA - 103 \t ASE-II - Project Hour - 115 \n";
    char day6slot4Course[]= "FA - 103 \t ASE-II - Project Hour - 115 \n";
    char day6slot5Course[]= "ASE-II - Project Hour - 115 \t APT - 103 \n";
    char day6slot6Course[]= "ASE-II - Project Hour - 115 \t APT - 103 \n";
    char day6slot7Course[]= "TOC - 101 \t EMT - 203 \n";
    char day6slot8Course[]= "---- \n";

    printf("MONDAY: \n \n");
    printf("09:00 - 10:00   %s \n",day1slot1Course);
    printf("10:00 - 11:00   %s \n",day1slot2Course);
    printf("11:00 - 11:15   Short Break \n\n");
    printf("11:15 - 12:15   %s \n",day1slot3Course);
    printf("12:15 - 13:15   %s \n",day1slot4Course);
    printf("13:15 - 14:30   Lunch Break \n\n");
    printf("14:30 - 15:30   %s \n",day1slot5Course);
    printf("15:30 - 16:30   %s \n",day1slot6Course);
    printf("16:30 - 17:30   %s \n",day1slot7Course);
    printf("17:30 - 18:30   %s \n \n \n",day1slot8Course);

    printf("TUESDAY: \n \n");
    printf("09:00 - 10:00   %s \n",day2slot1Course);
    printf("10:00 - 11:00   %s \n",day2slot2Course);
    printf("11:00 - 11:15   Short Break \n\n");
    printf("11:15 - 12:15   %s \n",day2slot3Course);
    printf("12:15 - 13:15   %s \n",day2slot4Course);
    printf("13:15 - 14:30   Lunch Break \n\n");
    printf("14:30 - 15:30   %s \n",day2slot5Course);
    printf("15:30 - 16:30   %s \n",day2slot6Course);
    printf("16:30 - 17:30   %s \n",day2slot7Course);
    printf("17:30 - 18:30   %s \n \n \n",day2slot8Course);

    printf("WEDNESDAY: \n \n");
    printf("09:00 - 10:00   %s \n",day3slot1Course);
    printf("10:00 - 11:00   %s \n",day3slot2Course);
    printf("11:00 - 11:15   Short Break \n\n");
    printf("11:15 - 12:15   %s \n",day3slot3Course);
    printf("12:15 - 13:15   %s \n",day3slot4Course);
    printf("13:15 - 14:30   Lunch Break \n\n");
    printf("14:30 - 15:30   %s \n",day3slot5Course);
    printf("15:30 - 16:30   %s \n",day3slot6Course);
    printf("16:30 - 17:30   %s \n",day3slot7Course);
    printf("17:30 - 18:30   %s \n \n \n",day3slot8Course);

    printf("THURSDAY: \n \n");
    printf("09:00 - 10:00   %s \n",day4slot1Course);
    printf("10:00 - 11:00   %s \n",day4slot2Course);
    printf("11:00 - 11:15   Short Break \n\n");
    printf("11:15 - 12:15   %s \n",day4slot3Course);
    printf("12:15 - 13:15   %s \n",day4slot4Course);
    printf("13:15 - 14:30   Lunch Break \n\n");
    printf("14:30 - 15:30   %s \n",day4slot5Course);
    printf("15:30 - 16:30   %s \n",day4slot6Course);
    printf("16:30 - 17:30   %s \n",day4slot7Course);
    printf("17:30 - 18:30   %s \n \n \n",day4slot8Course);

    printf("FRIDAY: \n \n");
    printf("09:00 - 10:00   %s \n",day5slot1Course);
    printf("10:00 - 11:00   %s \n",day5slot2Course);
    printf("11:00 - 11:15   Short Break \n\n");
    printf("11:15 - 12:15   %s \n",day5slot3Course);
    printf("12:15 - 13:15   %s \n",day5slot4Course);
    printf("13:15 - 14:30   Lunch Break \n\n");
    printf("14:30 - 15:30   %s \n",day5slot5Course);
    printf("15:30 - 16:30   %s \n",day5slot6Course);
    printf("16:30 - 17:30   %s \n",day5slot7Course);
    printf("17:30 - 18:30   %s \n \n \n",day5slot8Course);

    printf("SATURDAY: \n \n");
    printf("09:00 - 10:00   %s \n",day6slot1Course);
    printf("10:00 - 11:00   %s \n",day6slot2Course);
    printf("11:00 - 11:15   Short Break \n\n");
    printf("11:15 - 12:15   %s \n",day6slot3Course);
    printf("12:15 - 13:15   %s \n",day6slot4Course);
    printf("13:15 - 14:30   Lunch Break \n\n");
    printf("14:30 - 15:30   %s \n",day6slot5Course);
    printf("15:30 - 16:30   %s \n",day6slot6Course);
    printf("16:30 - 17:30   %s \n",day6slot7Course);
    printf("17:30 - 18:30   %s \n \n \n",day6slot8Course);

    return 0;

}


int main(){
    printf("<<-- Timetable - Monsoon 2018 - V1.4 (Aug - Dec 2018) -->>\n\n");
    printf("<- || --copyRight by Shlok Pandey-- || ->\n\n\n");
    printf("Enter 1 for UG-1 ::: Enter 2 for UG-2 ::: Enter 3 for UG-3/UG-4/MS/PhD \n");
    int val;
    scanf("%d", &val);

    switch(val){
        case 1:
            printf("\n\n-> The timetable for UG-1 is as follows: \n\n");
            ug1();
            break;
        case 2:
            printf("\n\n-> The timetable for UG-2 is as follows: \n\n");
            ug2();
            break;
        case 3:
            printf("\n\n-> The timetable for UG-3/UG-4/MS/PhD is as follows: \n\n");
            other();
            break;
        default:
            printf("<Error> Wrong Input Detected!! \n");
            break;
    }

    printf("\n<< ** Name- Shlok Pandey :: Roll Number- S20180010165 :: Section- B (UG-1) ** >>\n\n");

    printf("Made with <3 in IIIT Sri City!!\n");

    getch();
    return 0;
}
