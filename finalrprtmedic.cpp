#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int j=0,g;
    char c1[10],c2[10],c3[10],c4[10],c5[10];
	printf("\t\t\t\t\t\t**************************\n");
	printf("\t\t\t\t*             WELCOME TO Disease Analyser MADE BY:-            *\n");
	printf("\t\t\t\t*                1)ARITRA CHOUDHURY                     *\n");
    printf("\t\t\t\t*                2)HRITHIK BASU                         *\n");
    printf("\t\t\t\t*               UNDER THE GUIDANCE OF:-                 *\n");
    printf("\t\t\t\t*                   Mr.SUMIT DAS                        *\n");
	printf("\t\t\t\t\t\t**************************\n");
    printf("\n\t\t\t\tPress enter to continue........                \n");
    getch();
    system("cls");
    printf("\t\t\t\t********\t\t\t\t\t*********\n");
    printf("\t\t\t\t*          Tell the field you want to visit....         *\n");
	printf("\t\t\t\t*                press 1 for Cardiology...              *\n");
	printf("\t\t\t\t*                press 2 for Neurology...               *\n");
	printf("\t\t\t\t*                press 3 for Ophthalmology..            *\n");
	printf("\t\t\t\t*                Press 4 for Oncology...                *\n");
	printf("\t\t\t\t********\t\t\t\t\t*********\n");
	printf("\t\t\t\tEnter your option:-");
	start:
	scanf("%d",&g);

	switch(g)
	{
			case 1:
            {
                    system("cls");
			        printf("\t\t\tThe answer should be given in (yes/no)\n");
                    printf("\t\t\t1.Do you have any pain between shoulder blades,arm,chest,jaw,left arm or upper abdomen?  \n");
                    printf("\t\t\t");
                    scanf("%s",c1);
					printf("\t\t\t2.Have you much sweat in recent days?\n");
					printf("\t\t\t");
					scanf("%s",c2);
                    printf("\t\t\t3.Do you have any of the following in recent days?\n");
					printf("\t\t\tHeartburn/Indigestion/Vomiting\n");
					printf("\t\t\t");
                    scanf("%s",c3);
                    printf("\t\t\t4.Do you have any pain like a clenched fist in the chest? \n");
                    printf("\t\t\t");
                    scanf("%s",c4);
                    printf("\t\t\t5.Have you any discomfort or tightness besides your neck? \n");
                    printf("\t\t\t");
                    scanf("%s",c5);


                        if(strcmpi(c1,"yes")==0)
                            j++;
                        if(strcmpi(c2,"yes")==0)
                            j++;
                        if(strcmpi(c3,"yes")==0)
                            j++;
                        if(strcmpi(c4,"yes")==0)
                            j++;
                        if(strcmpi(c5,"yes")==0)
                            j++;

                    if(j==0)
                        printf("\t\t\tNothing to worry");
                    else if(j<=1)
                        printf("\t\t\tYou are suffering from cardiac arrest");
                    else if(j<=2)
                        printf("\t\t\tYou are suffering from arrhythmias");
                    else if(j<=3)
                        printf("\t\t\tYou are suffering from coronary artery disease");
                    else if(j<=4)
                        printf("\t\t\tYou are suffering from heart muscle disease");
                    else if(j<=5)
                        printf("\t\t\tYou are suffering from heart valve disease");
                    break;
            }
		case 2:
		    {
                system("cls");
		        printf("\t\tThe answer should be given in (Yes/No)\n ");
                printf("\t\t1.Do you have any sleep problem like day sleepiness/early awaking/sleep disturbances?\n");
                printf("\t\t");
                scanf("\t\t%s",c1);
                printf("\t\t2.Do you have any body fatigue/dizziness/poor body balance?\n");
                printf("\t\t");
                scanf("%s",c2);
                printf("\t\t3.Do you have any kind of tremor in your body parts like hands/limbs etc?\n");
                printf("\t\t");
                scanf("%s",c3);
                printf("\t\t4.Do you have any muscle problem like stiff muscles/standing difficulty/difficulty in walking etc?\n");
                printf("\t\t");
                scanf("%s",c4);
                printf("\t\t5.Do you have any kind of anxiety doing any work?or have you any urine leakage problrm?\n");
                printf("\t\t");
                scanf("%s",c5);
                        if(strcmpi(c1,"yes")==0)
                            j++;
                        if(strcmpi(c2,"yes")==0)
                            j++;
                        if(strcmpi(c3,"yes")==0)
                            j++;
                        if(strcmpi(c4,"yes")==0)
                            j++;
                        if(strcmpi(c5,"yes")==0)
                            j++;
                    if(j==0)
                        printf("\t\t\tNothing to worry");
                    else if(j<=1)
                        printf("\t\t\tYou are suffering from neurological disorder");
                    else if(j<=2)
                        printf("\t\t\tYou are suffering from alzheimer");
                    else if(j<=3)
                        printf("\t\t\tYou are suffering from epilepsy");
                    else if(j<=4)
                        printf("\t\t\tYou are suffering from dementias");
                    else if(j<=5)
                        printf("\t\t\tYou are suffering from cerebrovascular disease");
               break;
			}
        case 3:
            {
               system("cls");
               printf("\t\t\t");
               printf("The answer should be given in (Yes/No)\n ");
               printf("\t\t\t");
               printf("1.Do you have any sudden eye pain?\n");
               printf("\t\t\t");
               scanf("%s",c1);
               printf("\t\t\t");
               printf("2.Do you have any headache sometimes?\n");
               printf("\t\t\t");
               scanf("%s",c2);
               printf("\t\t\t");
               printf("3.Do you have blurred vision?\n");
               printf("\t\t\t");
               scanf("%s",c3);
               printf("\t\t\t");
               printf("4.Do you have high pressure in your eye?\n");
               printf("\t\t\t");
               scanf("%s",c4);
               printf("\t\t\t");
               printf("5.Do you have glasses now?\n");
               printf("\t\t\t");
               scanf("%s",c5);
                 if(strcmpi(c1,"yes")==0)
                    j++;
                 if(strcmpi(c2,"yes")==0)
                    j++;
                 if(strcmpi(c3,"yes")==0)
                    j++;
                 if(strcmpi(c4,"yes")==0)
                    j++;
                 if(strcmpi(c5,"yes")==0)
                    j++;


                    if(j==0)
                        printf("\t\t\tNothing to worry");
                    else if(j<=1)
                        printf("\t\t\tYou are suffering from refractive error");
                    else if(j<=2)
                        printf("\t\t\tYou are suffering from optical nerve disorder");
                    else if(j<=3)
                        printf("\t\t\tYou are suffering from conjunctivitis");
                    else if(j<=4)
                        printf("\t\t\tYou are suffering from retinal disorder");
                    else if(j<=5)
                        printf("\t\t\tYou are suffering from macular degeneration");

            break;
            }
				case 4:
				    {
                        system("cls");
				        printf("\t");
                        printf("The answer should be given in (Yes/No)\n ");
                        printf("\t");
                        printf("1.Do you see blood in your caugh?  \n");
                        printf("\t");
                        scanf("%s",c1);
                        printf("\t");
                        printf("2.Do you feel Pain in the chest, back or shoulders that worsens during coughing, laughing or deep breathing?\n");
                        printf("\t");
                        scanf("%s",c2);
                        printf("\t");
                        printf("3.Have You observed Swelling of the face, arms or neck in your body?\n");
                        printf("\t");
                        scanf("%s",c3);
                        printf("\t");
                        printf("4.Do you realised Shortness of breath that comes on suddenly and occurs during everyday activities? \n");
                        printf("\t");
                        scanf("%s",c4);
                        printf("\t");
                        printf("5.Have you Lost your appetite? \n");
                        printf("\t");
                        scanf("%s",c5);
                        if(strcmpi(c1,"yes")==0)
                            j++;
                        if(strcmpi(c2,"yes")==0)
                            j++;
                        if(strcmpi(c3,"yes")==0)
                            j++;
                        if(strcmpi(c4,"yes")==0)
                            j++;
                        if(strcmpi(c5,"yes")==0)
                            j++;


                    if(j==0)
                        printf("\t\t\tNothing to worry");
                    else if(j<=1)
                        printf("\t\t\tYou are suffering from bleeding disorders");
                    else if(j<=2)
                        printf("\t\t\tYou are suffering from platelet disorders");
                    else if(j<=3)
                        printf("\t\t\tYou are suffering from coronary artery disease");
                    else if(j<=4)
                        printf("\t\t\tYou are suffering from hemophilia");
                    else if(j<=5)
                        printf("\t\t\tYou are suffering from anemia");
                        break;
			        }
            default:
		    {
		        printf("\t\t\t");
		        printf("You entered a wrong choice... Select the right option once again:- "); goto start;
		break;
		    }
            }
    printf("\n\t\t\tThank you for your kind consideration for giving time here.\n\t\t\tHope I will be able to met upto your expectation next time.\a");
	getch();
	return 0;
}
