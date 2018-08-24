#include <stdio.h>
#include <conio.h>

// Assignment:1

int ug1(){
    char day1slot1Course[]= "PC- Sec-A \t Comm Skills-1- Sec-B \n";
    char day1slot2Course[]= "Comm Skills-1- Sec-A \t PC- Sec-B \n";
    char day1slot3Course[]= "DEC- Sec-A \t OC- Sec-B \n";
    char day1slot4Course[]= "OC- Sec-A \t DEC- Sec-B \n";
    char day1slot5Lab[]= "PC- Lab-A \n";

    char day2slot1Course[]= "DMPT- Tut \n";
    char day2slot2Course[]= "DMPT- Sec-A \n";
    char day2slot3Course[]= "DMPT- Sec-B \n";
    char day2slot4Course[]= "DMPT- Tut \n";
    char day2slot5Lab[]= "OC- Lab-A \t DEC- Lab-B \t PC- Lab-C \n";

    char day3slot1Course[]= "DEC- Sec-A \t OC- Sec-B \n";
    char day3slot2Course[]= "OC- Sec-A \t DEC- Sec-B \n";
    char day3slot3Course[]= "PC- Sec-A \t Comm Skills-1- Sec-B \n";
    char day3slot4Course[]= "Comm Skills-1- Sec-A \t PC- Sec-B \n";
    char day3slot5Lab[]= "No Labs Today :)";

    char day4slot1Course[]= "DMPT- Tut \n";
    char day4slot2Course[]= "DMPT- Sec-A \n";
    char day4slot3Course[]= "DMPT- Sec-B \n";
    char day4slot4Course[]= "DMPT- Tut \n";
    char day4slot5Lab[]= "OC- Lab-B \t DEC- Lab-C \t PC- Lab-A \n";

    char day5slot1Course[]= "DEC- Sec-A \t OC- Sec-B \n";
    char day5slot2Course[]= "OC- Sec-A \t DEC- Sec-B \n";
    char day5slot3Course[]= "DMPT- Sec-A \t Comm Skills-1- Sec-B \n";
    char day5slot4Course[]= "Comm Skills-1- Sec-A \t DMPT- Sec-B \n";
    char day5slot5Lab[]= "PC- Lab-B \n";

    char day6slot1Lab[]= "PC- Lab-C \n";
    char day6slot2Lab[]= "PC- Lab-C \n";
    char day6slot3Lab[]= "OC- Lab-C \t DEC- Lab-A \t PC- Lab-B \n";

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
    printf("14:30 - 17:30   %s \n \n \n",day5slot5Lab);

    printf("SATURDAY: \n \n");
    printf("09:00 - 10:00   %s \n",day6slot1Lab);
    printf("10:00 - 11:00   %s \n",day6slot1Lab);
    printf("11:00 - 11:15   Short Break \n\n");
    printf("11:15 - 12:15   %s \n",day6slot2Lab);
    printf("12:15 - 13:15      \n\n");
    printf("13:15 - 14:30   Lunch Break \n\n");
    printf("14:30 - 17:30   %s \n \n \n",day6slot3Lab);

    return 0;
}

int ug2(){
    char day1slot1Course[]= "Algo- Sec-A \t DSAA- Sec-B \n";
    char day1slot2Course[]= "DSAA- Sec-A \t Algo- Sec-B \n";
    char day1slot3Course[]= "OS- Sec-A \t ASE-1- Sec-B \n";
    char day1slot4Course[]= "ASE-1- Sec-A \t OS- Sec-B \n";
    char day1slot5Lab[]= "DSAA- Lab- Sec-A \t ASE-1- Lab- Sec-B \n";

    char day2slot1Course[]= "   \n";
    char day2slot2Course[]= "Maths-3 \t Comm Skills-3 \n";
    char day2slot3Course[]= "Comm Skills-3 \t Maths-3 \n";
    char day2slot4Course[]= "   \n";
    char day2slot5Lab[]= "OS- Lab- Sec-A \n";

    char day3slot1Course[]= "   \n";
    char day3slot2Course[]= "   \n";
    char day3slot3Course[]= "Algo \t DSAA \n";
    char day3slot4Course[]= "DSAA \t Algo \n";
    char day3slot5Lab[]= "DSAA- Lab- Sec-B \t ASE-1- Lab- Sec-A \n";

    char day4slot1Course[]= "Maths-3 \t Comm Skills-3 \n";
    char day4slot2Course[]= "Comm Skills-3 \t Maths-3 \n";
    char day4slot3Course[]= "Algo \t DSAA- Tut \n";
    char day4slot4Course[]= "DSAA- Tut \t Algo \n";
    char day4slot5Lab[]= "OS- Lab- Sec-B \n";

    char day5slot1Course[]= "OS \t ASE-1 \n";
    char day5slot2Course[]= "ASE-1 \t OS \n";
    char day5slot3Course[]= "Maths-3 \t DSAA- Tut \n";
    char day5slot4Course[]= "DSAA- Tut \t Maths-3 \n";
    char day5slot5Lab[]= "ALGO- Lab- Sec-A \n";

    char day6slot1Course[]= "Maths-3 \t Comm Skills-3 \n";
    char day6slot2Course[]= "Comm Skills-3 \t Maths-3 \n";
    char day6slot3Course[]= "OS \t ASE-1 \n";
    char day6slot4Course[]= "ASE-1 \t OS \n";
    char day6slot5Lab[]= "ALGO- Lab- Sec-B \n";

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
    printf("14:30 - 17:30   %s \n \n \n",day5slot5Lab);

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
    char day1slot1Course[]= "IOT \n";
    char day1slot2Course[]= "DIP \n";
    char day1slot3Course[]= "DIP \n";
    char day1slot4Course[]= "EMT \n";
    char day1slot5Course[]= "CSD \n";
    char day1slot6Course[]= "DM / VLSI \n";
    char day1slot7Course[]= "DM / VLSI \n";
    char day1slot8Course[]= "YW \n";

    char day2slot1Course[]= "DM \t Microwave Eng \n";
    char day2slot2Course[]= "CSD \n";
    char day2slot3Course[]= "CSD \n";
    char day2slot4Course[]= "Stats / DE \n";
    char day2slot5Course[]= "TOC \t Digicomm \n";
    char day2slot6Course[]= "Stats / DE \n";
    char day2slot7Course[]= "GE / BIO / APS \n";
    char day2slot8Course[]= "IR \n";

    char day3slot1Course[]= "IOT \n";
    char day3slot2Course[]= "DIP \n";
    char day3slot3Course[]= "EMT \n";
    char day3slot4Course[]= "DM / VLSI \n";
    char day3slot5Course[]= "TOC \t Digicomm \n";
    char day3slot6Course[]= "DE \t Stats- Tut \n";
    char day3slot7Course[]= "YW \n";
    char day3slot8Course[]= "IR \n";

    char day4slot1Course[]= "CSD \n";
    char day4slot2Course[]= "TOC \t Digicomm \n";
    char day4slot3Course[]= "TOC \t Digicomm- Tut \n";
    char day4slot4Course[]= "Stats / DE \n";
    char day4slot5Course[]= "IR \n";
    char day4slot6Course[]= "IR \n";
    char day4slot7Course[]= "GE / BIO \n";
    char day4slot8Course[]= "   \n";

    char day5slot1Course[]= "IOT \n";
    char day5slot2Course[]= "ASE-II - Sec-A \t Microwave Eng \n";
    char day5slot3Course[]= "ASE-II - Sec-B \n";
    char day5slot4Course[]= "EMT \n";
    char day5slot5Lab[]= "ASE-II - Lab \n";
    char day5slot6Lab[]= "ASE-II - Lab \n";
    char day5slot7Lab[]= "ASE-II - Lab \n";
    char day5slot8Lab[]= "   \n";

    char day6slot1Course[]= "ASE-II - Sec-A \n";
    char day6slot2Course[]= "ASE-II - Sec-B \t Microwave Eng \n";
    char day6slot3Course[]= "FA \n";
    char day6slot4Course[]= "FA \n";
    char day6slot5Course[]= "ASE-II - Sec-A \t APT \n";
    char day6slot6Course[]= "ASE-II - Sec-B \t APT \n";
    char day6slot7Course[]= "   \n";
    char day6slot8Course[]= "   \n";

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
    printf("14:30 - 15:30   %s \n",day5slot5Lab);
    printf("15:30 - 16:30   %s \n",day5slot6Lab);
    printf("16:30 - 17:30   %s \n",day5slot7Lab);
    printf("17:30 - 18:30   %s \n \n \n",day5slot8Lab);

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
    printf("<<-- Timetable - Monsoon 2018 - V1.2 (Aug - Dec 2018) -->>\n\n");
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
