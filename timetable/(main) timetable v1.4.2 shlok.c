#include <stdio.h>
#include <conio.h>

// Assignment:1 __ v1.4

int ug1(){

    char day1slot1Course1[]= "      PC- Sec-A       ";
    char day1slot1Course2[]= " Comm Skills-1- Sec-B ";
    char day1slot2Course1[]= " Comm Skills-1- Sec-A ";
    char day1slot2Course2[]= "      PC- Sec-B       ";
    char day1slot3Course1[]= "      DEC- Sec-A      ";
    char day1slot3Course2[]= "      OC- Sec-B       ";
    char day1slot4Course1[]= "      OC- Sec-A       ";
    char day1slot4Course2[]= "      DEC- Sec-B      ";
    char day1slot5Lab1[]=    "      PC- Lab-A       ";
    char day1slot5Lab2[]=    "                      ";

    char day2slot1Course1[]= "   DMPT- Tut- Sec-A   ";
    char day2slot1Course2[]= "                      ";
    char day2slot2Course1[]= "      DMPT- Sec-A     ";
    char day2slot2Course2[]= "                      ";
    char day2slot3Course1[]= "      DMPT- Sec-B     ";
    char day2slot3Course2[]= "                      ";
    char day2slot4Course1[]= "         ----         ";
    char day2slot4Course2[]= "                      ";
    char day2slot5Lab1[]=    "      OC- Lab-A       ";
    char day2slot5Lab2[]=    "      DEC- Lab-B      ";

    char day3slot1Course1[]= "      DEC- Sec-A      ";
    char day3slot1Course2[]= "      OC- Sec-B       ";
    char day3slot2Course1[]= "      OC- Sec-A       ";
    char day3slot2Course2[]= "      DEC- Sec-B      ";
    char day3slot3Course1[]= "      PC- Sec-A       ";
    char day3slot3Course2[]= " Comm Skills-1- Sec-B ";
    char day3slot4Course1[]= " Comm Skills-1- Sec-A ";
    char day3slot4Course2[]= "      PC- Sec-B       ";
    char day3slot5Lab1[]=    "      PC- Lab-B       ";
    char day3slot5Lab2[]=    "                      ";

    char day4slot1Course1[]= "   DMPT- Tut- Sec-B   ";
    char day4slot1Course2[]= "                      ";
    char day4slot2Course1[]= "     DMPT- Sec-A      ";
    char day4slot2Course2[]= "                      ";
    char day4slot3Course1[]= "     DMPT- Sec-B      ";
    char day4slot3Course2[]= "                      ";
    char day4slot4Course1[]= "   DMPT- Tut- Sec-A   ";
    char day4slot4Course2[]= "                      ";
    char day4slot5Lab1[]=    "      OC- Lab-B       ";
    char day4slot5Lab2[]=    "      DEC- Lab-C      ";

    char day5slot1Course1[]= "     DMPT- Sec-A      ";
    char day5slot1Course2[]= " Comm Skills-1- Sec-B ";
    char day5slot2Course1[]= " Comm Skills-1- Sec-A ";
    char day5slot2Course2[]= "     DMPT- Sec-B      ";
    char day5slot3Course1[]= "      DEC- Sec-A      ";
    char day5slot3Course2[]= "      OC- Sec-B       ";
    char day5slot4Course1[]= "      OC- Sec-A       ";
    char day5slot4Course2[]= "      DEC- Sec-B      ";
    char day5slot5Lab1[]=    "      PC- Lab-A       ";
    char day5slot5Lab2[]=    "                      ";

    char day6slot1Lab1[]=    "      PC- Lab-B       ";
    char day6slot2Lab1[]=    "      PC- Lab-B       ";
    char day6slot3Course1[]= "   DMPT- Tut- Sec-B   ";
    char day6slot4Lab1[]=    "      OC- Lab-C       ";
    char day6slot4Lab2[]=    "      DEC- Lab-A      ";

    printf("\nSection: A - 113 \t Section: B - 115 \n \n \n");



    printf(" _________________________________________________________________________________________________________________________________________________________\n");
    printf("|                                                                         UG-1                                                                            |\n");
    printf("|_________________________________________________________________________________________________________________________________________________________|\n");
    printf("|    Timings    |        Monday        |       Tuesday        |       Wednesday      |       Thursday       |        Friday        |       Saturday       |\n");
    printf("|_______________|______________________|______________________|______________________|______________________|______________________|______________________|\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot1Course1, day2slot1Course1, day3slot1Course1, day4slot1Course1, day5slot1Course1, "                      ");
    printf("| 09:00 - 10:00 |                      |                      |                      |                      |                      |                      |\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot1Course2, day2slot1Course2, day3slot1Course2, day4slot1Course2, day5slot1Course2, day6slot1Lab1);
    printf("|_______________|______________________|______________________|______________________|______________________|______________________|                      |\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot2Course1, day2slot2Course1, day3slot2Course1, day4slot2Course1, day5slot2Course1, "                      ");
    printf("| 10:00 - 11:00 |                      |                      |                      |                      |                      |                      |\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot2Course2, day2slot2Course2, day3slot2Course2, day4slot2Course2, day5slot2Course2, "                      ");
    printf("|_______________|______________________|______________________|______________________|______________________|______________________|______________________|\n");
    printf("| 11:00 - 11:15 | Short Break                                                                                                                             |\n");
    printf("|_______________|_________________________________________________________________________________________________________________________________________|\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot3Course1, day2slot3Course1, day3slot3Course1, day4slot3Course1, day5slot3Course1, day6slot2Lab1);
    printf("| 11:15 - 12:15 |                      |                      |                      |                      |                      |                      |\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot3Course2, day2slot3Course2, day3slot3Course2, day4slot3Course2, day5slot3Course2, "                      ");
    printf("|_______________|______________________|______________________|______________________|______________________|______________________|______________________|\n");
    printf("| 12:15 - 13:30 | Lunch Break                                                                                                                             |\n");
    printf("|_______________|_________________________________________________________________________________________________________________________________________|\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot4Course1, day2slot4Course1, day3slot4Course1, day4slot4Course1, day5slot4Course1, day6slot3Course1);
    printf("| 13:30 - 14:30 |                      |                      |                      |                      |                      |                      |\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot4Course2, day2slot4Course2, day3slot4Course2, day4slot4Course2, day5slot4Course2, "                      ");
    printf("|_______________|______________________|______________________|______________________|______________________|______________________|______________________|\n");
    printf("|               |                      |                      |                      |                      |                      |                      |\n");
    printf("| 14:30 - 15:30 |                      |                      |                      |                      |                      |                      |\n");
    printf("|               |                      |                      |                      |                      |                      |                      |\n");
    printf("|_______________|                      |                      |                      |                      |                      |                      |\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot5Lab1, day2slot5Lab1, day3slot5Lab1, day4slot5Lab1, day5slot5Lab1, day6slot4Lab1);
    printf("| 15:30 - 16:30 |                      |                      |                      |                      |                      |                      |\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot5Lab2, day2slot5Lab2, day3slot5Lab2, day4slot5Lab2, day5slot5Lab2, day6slot4Lab2);
    printf("|_______________|                      |                      |                      |                      |                      |                      |\n");
    printf("|               |                      |                      |                      |                      |                      |                      |\n");
    printf("| 16:30 - 17:30 |                      |                      |                      |                      |                      |                      |\n");
    printf("|               |                      |                      |                      |                      |                      |                      |\n");
    printf("|_______________|______________________|______________________|______________________|______________________|______________________|______________________|\n");
    printf("|               |                      |                      |                      |                      |                      |                      |\n");
    printf("| 17:30 - 18:30 |                      |                      |                      |                      |                      |                      |\n");
    printf("|               |                      |                      |                      |                      |                      |                      |\n");
    printf("|_______________|______________________|______________________|______________________|______________________|______________________|______________________|\n");

}

int ug2(){

    char day1slot1Course1[]= "     Algo- Sec-A      ";
    char day1slot1Course2[]= "                      ";
    char day1slot2Course1[]= "     DSAA- Sec-A      ";
    char day1slot2Course2[]= "     Algo- Sec-B      ";
    char day1slot3Course1[]= "      OS- Sec-A       ";
    char day1slot3Course2[]= "     ASE-1- Sec-B     ";
    char day1slot4Course1[]= "     ASE-1- Sec-A     ";
    char day1slot4Course2[]= "      OS- Sec-B       ";
    char day1slot5Lab1[]=    "   DSAA- Lab- Sec-A   ";
    char day1slot5Lab2[]=    "   ASE-1- Lab- Sec-B  ";

    char day2slot1Course1[]= "    Maths-3- Sec-B    ";
    char day2slot1Course2[]= " Comm Skills-3- Sec-A ";
    char day2slot2Course1[]= " Comm Skills-3- Sec-B ";
    char day2slot2Course2[]= "    Maths-3- Sec-A    ";
    char day2slot3Course1[]= "     DSAA- Sec-B      ";
    char day2slot3Course2[]= "                      ";
    char day2slot4Course1[]= "         ----         ";
    char day2slot4Course2[]= "                      ";
    char day2slot5Lab1[]=    "         ----         ";
    char day2slot5Lab2[]=    "                      ";

    char day3slot1Course1[]= " Comm Skills-3- Sec-A ";
    char day3slot1Course2[]= "      OS- Sec-B       ";
    char day3slot2Course1[]= "      OS- Sec-A       ";
    char day3slot2Course2[]= " Comm Skills-3- Sec-B ";
    char day3slot3Course1[]= "     Algo- Sec-A      ";
    char day3slot3Course2[]= "     DSAA- Sec-B      ";
    char day3slot4Course1[]= "     DSAA- Sec-A      ";
    char day3slot4Course2[]= "     Algo- Sec-B      ";
    char day3slot5Lab1[]=    "   DSAA- Lab- Sec-B   ";
    char day3slot5Lab2[]=    "   ASE-1- Lab- Sec-A  ";

    char day4slot1Course1[]= "    Maths-3- Sec-B    ";
    char day4slot1Course2[]= " Comm Skills-3- Sec-A ";
    char day4slot2Course1[]= " Comm Skills-3- Sec-B ";
    char day4slot2Course2[]= "    Maths-3- Sec-A    ";
    char day4slot3Course1[]= "     Algo- Sec-A      ";
    char day4slot3Course2[]= "   DSAA- Tut- Sec-B   ";
    char day4slot4Course1[]= "   DSAA- Tut- Sec-A   ";
    char day4slot4Course2[]= "     Algo- Sec-B      ";
    char day4slot5Lab1[]=    "         ----         ";
    char day4slot5Lab2[]=    "                      ";

    char day5slot1Course1[]= "    Maths-3- Sec-B    ";
    char day5slot1Course2[]= "   DSAA- Tut- Sec-A   ";
    char day5slot2Course1[]= "   DSAA- Tut- Sec-B   ";
    char day5slot2Course2[]= "    Maths-3- Sec-A    ";
    char day5slot3Course1[]= "      OS- Sec-A       ";
    char day5slot3Course2[]= "     ASE-1- Sec-B     ";
    char day5slot4Course1[]= "     ASE-1- Sec-A     ";
    char day5slot4Course2[]= "      OS- Sec-B       ";
    char day5slot5Course1[]= "      OS- Sec-A       ";
    char day5slot5Course2[]= "     Algo- Sec-B      ";
    char day5slot6Course1[]= "     Algo- Sec-A      ";
    char day5slot6Course2[]= "      OS- Sec-B       ";

    char day6slot1Course1[]= "    Maths-3- Sec-B    ";
    char day6slot2Course1[]= "    Maths-3- Sec-A    ";
    char day6slot3Course1[]= "     ASE-1- Sec-A     ";
    char day6slot4Course1[]= "     ASE-1- Sec-B     ";
    char day6slot5Course1[]= "                      ";

    printf("\nSection: A - 101 \t Section: B - 103 \n \n \n");



    printf(" _________________________________________________________________________________________________________________________________________________________\n");
    printf("|                                                                         UG-2                                                                            |\n");
    printf("|_________________________________________________________________________________________________________________________________________________________|\n");
    printf("|    Timings    |        Monday        |       Tuesday        |       Wednesday      |       Thursday       |        Friday        |       Saturday       |\n");
    printf("|_______________|______________________|______________________|______________________|______________________|______________________|______________________|\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot1Course1, day2slot1Course1, day3slot1Course1, day4slot1Course1, day5slot1Course1, day6slot1Course1);
    printf("| 09:00 - 10:00 |                      |                      |                      |                      |                      |                      |\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot1Course2, day2slot1Course2, day3slot1Course2, day4slot1Course2, day5slot1Course2, "                      ");
    printf("|_______________|______________________|______________________|______________________|______________________|______________________|______________________|\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot2Course1, day2slot2Course1, day3slot2Course1, day4slot2Course1, day5slot2Course1, day6slot2Course1);
    printf("| 10:00 - 11:00 |                      |                      |                      |                      |                      |                      |\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot2Course2, day2slot2Course2, day3slot2Course2, day4slot2Course2, day5slot2Course2, "                      ");
    printf("|_______________|______________________|______________________|______________________|______________________|______________________|______________________|\n");
    printf("| 11:00 - 11:15 | Short Break                                                                                                                             |\n");
    printf("|_______________|_________________________________________________________________________________________________________________________________________|\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot3Course1, day2slot3Course1, day3slot3Course1, day4slot3Course1, day5slot3Course1, day6slot3Course1);
    printf("| 11:15 - 12:15 |                      |                      |                      |                      |                      |                      |\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot3Course2, day2slot3Course2, day3slot3Course2, day4slot3Course2, day5slot3Course2, "                      ");
    printf("|_______________|______________________|______________________|______________________|______________________|______________________|______________________|\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot4Course1, day2slot4Course1, day3slot4Course1, day4slot4Course1, day5slot4Course1, day6slot4Course1);
    printf("| 12:15 - 13:15 |                      |                      |                      |                      |                      |                      |\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot4Course2, day2slot4Course2, day3slot4Course2, day4slot4Course2, day5slot4Course2, "                      ");
    printf("|_______________|______________________|______________________|______________________|______________________|______________________|______________________|\n");
    printf("| 13:15 - 14:30 | Lunch Break                                                                                                                             |\n");
    printf("|_______________|_________________________________________________________________________________________________________________________________________|\n");
    printf("|               |                      |                      |                      |                      |%s|                      |\n",day5slot5Course1);
    printf("| 14:30 - 15:30 |                      |                      |                      |                      |                      |                      |\n");
    printf("|               |                      |                      |                      |                      |%s|                      |\n",day5slot5Course2);
    printf("|_______________|                      |                      |                      |                      |______________________|                      |\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot5Lab1, day2slot5Lab1, day3slot5Lab1, day4slot5Lab1, day5slot6Course1, day6slot5Course1);
    printf("| 15:30 - 16:30 |                      |                      |                      |                      |                      |                      |\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot5Lab2, day2slot5Lab2, day3slot5Lab2, day4slot5Lab2, day5slot6Course2, day6slot5Course1);
    printf("|_______________|                      |                      |                      |                      |______________________|                      |\n");
    printf("|               |                      |                      |                      |                      |                      |                      |\n");
    printf("| 16:30 - 17:30 |                      |                      |                      |                      |                      |                      |\n");
    printf("|               |                      |                      |                      |                      |                      |                      |\n");
    printf("|_______________|______________________|______________________|______________________|______________________|______________________|______________________|\n");
    printf("|               |                      |                      |                      |                      |                      |                      |\n");
    printf("| 17:30 - 18:30 |                      |                      |                      |                      |                      |                      |\n");
    printf("|               |                      |                      |                      |                      |                      |                      |\n");
    printf("|_______________|______________________|______________________|______________________|______________________|______________________|______________________|\n");

}

int other(){

    char day1slot1Course1[]= "       DM - 201       ";
    char day1slot1Course2[]= "                      ";
    char day1slot2Course1[]= "      IOT - 203       ";
    char day1slot2Course2[]= "                      ";
    char day1slot3Course1[]= "    Digicomm - 201    ";
    char day1slot3Course2[]= "                      ";
    char day1slot4Course1[]= "       IR - 113       ";
    char day1slot4Course2[]= "                      ";
    char day1slot5Course1[]= "      CSD - 115       ";
    char day1slot5Course2[]= "                      ";
    char day1slot6Course1[]= "      DIP - 115       ";
    char day1slot6Course2[]= "                      ";
    char day1slot7Course1[]= "      EMT - 203       ";
    char day1slot7Course2[]= "                      ";
    char day1slot8Course1[]= "      DIP - 115       ";
    char day1slot8Course2[]= "                      ";

    char day2slot1Course1[]= "      CSD - 115       ";
    char day2slot1Course2[]= "                      ";
    char day2slot2Course1[]= "      MERS - 201      ";
    char day2slot2Course2[]= "                      ";
    char day2slot3Course1[]= "      SDS - 101       ";
    char day2slot3Course2[]= "       DE - 113       ";
    char day2slot4Course1[]= "         ----         ";
    char day2slot4Course2[]= "                      ";
    char day2slot5Course1[]= "      SDS - 101       ";
    char day2slot5Course2[]= "       DE - 115       ";
    char day2slot6Course1[]= "      TOC - 101       ";
    char day2slot6Course2[]= "    Digicomm - 201    ";
    char day2slot7Course1[]= "    GE / LS / APS     ";
    char day2slot7Course2[]= "   203 / 101 / 201    ";
    char day2slot8Course1[]= "       IR - 101       ";
    char day2slot8Course2[]= "     VLSI - 203       ";

    char day3slot1Course1[]= "      IOT - 203       ";
    char day3slot1Course2[]= "                      ";
    char day3slot2Course1[]= "       DM - 201       ";
    char day3slot2Course2[]= "     VLSI - 203       ";
    char day3slot3Course1[]= "      EMT - 203       ";
    char day3slot3Course2[]= "                      ";
    char day3slot4Course1[]= "      IOT - 203       ";
    char day3slot4Course2[]= "                      ";
    char day3slot5Course1[]= "      SDS - 101       ";
    char day3slot5Course2[]= "       DE - 115       ";
    char day3slot6Course1[]= "      TOC - 101       ";
    char day3slot6Course2[]= "    Digicomm - 201    ";
    char day3slot7Course1[]= "      DIP - 115       ";
    char day3slot7Course2[]= "                      ";
    char day3slot8Course1[]= "       YW - 201       ";
    char day3slot8Course2[]= "                      ";

    char day4slot1Course1[]= "      TOC - 113       ";
    char day4slot1Course2[]= "    Digicomm - 201    ";
    char day4slot2Course1[]= "     MERS - 203       ";
    char day4slot2Course2[]= "                      ";
    char day4slot3Course1[]= "      EMT - 203       ";
    char day4slot3Course2[]= "                      ";
    char day4slot4Course1[]= "      SDS - 113       ";
    char day4slot4Course2[]= "       DE - 115       ";
    char day4slot5Course1[]= "       IR - 101       ";
    char day4slot5Course2[]= "     VLSI - 203       ";
    char day4slot6Course1[]= "       IR - 101       ";
    char day4slot6Course2[]= "                      ";
    char day4slot7Course1[]= "       GE / LS        ";
    char day4slot7Course2[]= "      203 / 101       ";
    char day4slot8Course1[]= "      CSD - 115       ";
    char day4slot8Course2[]= "                      ";

    char day5slot1Course1[]= "       DM - 201       ";
    char day5slot1Course2[]= "      VLSI - 203      ";
    char day5slot2Course1[]= "      MERS - 203      ";
    char day5slot2Course2[]= "                      ";
    char day5slot3Course1[]= " ASE-II - Sec-A - 113 ";
    char day5slot3Course2[]= "                      ";
    char day5slot4Course1[]= " ASE-II - Sec-B - 113 ";
    char day5slot4Course2[]= "                      ";
    char day5slot5Course1[]= "      DIP - 115       ";
    char day5slot5Course2[]= "                      ";
    char day5slot6Course1[]= "      CSD - 115       ";
    char day5slot6Course2[]= "                      ";
    char day5slot7Course1[]= "      IOT - 203       ";
    char day5slot7Course2[]= "                      ";
    char day5slot8Course1[]= "       YW - 201       ";
    char day5slot8Course2[]= "                      ";

    char day6slot1Course1[]= "ASE-II-ProjectHour-115";
    char day6slot1Course2[]= "                      ";
    char day6slot2Course1[]= "ASE-II-ProjectHour-115";
    char day6slot2Course2[]= " MERS - 203 / DM - 201";
    char day6slot3Course1[]= "       FA - 103       ";
    char day6slot3Course2[]= "ASE-II-ProjectHour-115";
    char day6slot4Course1[]= "       FA - 103       ";
    char day6slot4Course2[]= "ASE-II-ProjectHour-115";
    char day6slot5Course1[]= "ASE-II-ProjectHour-115";
    char day6slot5Course2[]= "      APT - 103       ";
    char day6slot6Course1[]= "ASE-II-ProjectHour-115";
    char day6slot6Course2[]= "      APT - 103       ";
    char day6slot7Course1[]= "      TOC - 101       ";
    char day6slot7Course2[]= "      EMT - 203       ";
    char day6slot8Course1[]= "         ----         ";
    char day6slot8Course2[]= "                      ";



    printf(" _________________________________________________________________________________________________________________________________________________________\n");
    printf("|                                                              UG-3 / UG-4 / MS / PhD                                                                     |\n");
    printf("|_________________________________________________________________________________________________________________________________________________________|\n");
    printf("|    Timings    |        Monday        |       Tuesday        |       Wednesday      |       Thursday       |        Friday        |       Saturday       |\n");
    printf("|_______________|______________________|______________________|______________________|______________________|______________________|______________________|\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot1Course1, day2slot1Course1, day3slot1Course1, day4slot1Course1, day5slot1Course1, day6slot1Course1);
    printf("| 09:00 - 10:00 |                      |                      |                      |                      |                      |                      |\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot1Course2, day2slot1Course2, day3slot1Course2, day4slot1Course2, day5slot1Course2, day6slot1Course2);
    printf("|_______________|______________________|______________________|______________________|______________________|______________________|______________________|\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot2Course1, day2slot2Course1, day3slot2Course1, day4slot2Course1, day5slot2Course1, day6slot2Course1);
    printf("| 10:00 - 11:00 |                      |                      |                      |                      |                      |                      |\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot2Course2, day2slot2Course2, day3slot2Course2, day4slot2Course2, day5slot2Course2, day6slot2Course1);
    printf("|_______________|______________________|______________________|______________________|______________________|______________________|______________________|\n");
    printf("| 11:00 - 11:15 | Short Break                                                                                                                             |\n");
    printf("|_______________|_________________________________________________________________________________________________________________________________________|\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot3Course1, day2slot3Course1, day3slot3Course1, day4slot3Course1, day5slot3Course1, day6slot3Course1);
    printf("| 11:15 - 12:15 |                      |                      |                      |                      |                      |                      |\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot3Course2, day2slot3Course2, day3slot3Course2, day4slot3Course2, day5slot3Course2, day6slot3Course2);
    printf("|_______________|______________________|______________________|______________________|______________________|______________________|______________________|\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot4Course1, day2slot4Course1, day3slot4Course1, day4slot4Course1, day5slot4Course1, day6slot4Course1);
    printf("| 12:15 - 13:15 |                      |                      |                      |                      |                      |                      |\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot4Course2, day2slot4Course2, day3slot4Course2, day4slot4Course2, day5slot4Course2, day6slot4Course2);
    printf("|_______________|______________________|______________________|______________________|______________________|______________________|______________________|\n");
    printf("| 13:15 - 14:30 | Lunch Break                                                                                                                             |\n");
    printf("|_______________|_________________________________________________________________________________________________________________________________________|\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot5Course1, day2slot5Course1, day3slot5Course1, day4slot5Course1, day5slot5Course1, day6slot5Course1);
    printf("| 14:30 - 15:30 |                      |                      |                      |                      |                      |                      |\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot5Course2, day2slot5Course2, day3slot5Course2, day4slot5Course2, day5slot5Course2, day6slot5Course2);
    printf("|_______________|______________________|______________________|______________________|______________________|______________________|______________________|\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot6Course1, day2slot6Course1, day3slot6Course1, day4slot6Course1, day5slot6Course1, day6slot6Course1);
    printf("| 15:30 - 16:30 |                      |                      |                      |                      |                      |                      |\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot6Course2, day2slot6Course2, day3slot6Course2, day4slot6Course2, day5slot6Course2, day6slot6Course2);
    printf("|_______________|______________________|______________________|______________________|______________________|______________________|______________________|\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot7Course1, day2slot7Course1, day3slot7Course1, day4slot7Course1, day5slot7Course1, day6slot7Course1);
    printf("| 16:30 - 17:30 |                      |                      |                      |                      |                      |                      |\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot7Course2, day2slot7Course2, day3slot7Course2, day4slot7Course2, day5slot7Course2, day6slot7Course2);
    printf("|_______________|______________________|______________________|______________________|______________________|______________________|______________________|\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot8Course1, day2slot8Course1, day3slot8Course1, day4slot8Course1, day5slot8Course1, day6slot8Course1);
    printf("| 17:30 - 18:30 |                      |                      |                      |                      |                      |                      |\n");
    printf("|               |%s|%s|%s|%s|%s|%s|\n", day1slot8Course2, day2slot8Course2, day3slot8Course2, day4slot8Course2, day5slot8Course2, day6slot8Course2);
    printf("|_______________|______________________|______________________|______________________|______________________|______________________|______________________|\n");

}

int main(){
    printf("<<-- Timetable - Monsoon 2018 - V1.4.2 (Aug - Dec 2018) -->>\n\n");
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

    printf("\n\n<< ** Name- Shlok Pandey :: Roll Number- S20180010165 :: Section- B (UG-1) ** >>\n\n");

    printf("Made with <3 in IIIT Sri City!!\n");

    getch();
    return 0;
}
