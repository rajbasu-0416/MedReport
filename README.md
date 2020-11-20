#Medical Report
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i,j=0,g;
    char a[5][5],p[5][5],q[5][5],r[5][5];
	start:
	printf("Tell the field you want to visit....\n");
	printf("press 1 for Cardiology...\n");
	printf("press 2 for Neurology...\n");
	printf("press 3 for Ophthalmology...\n");
	printf("Press 4 for Oncology...\n");
	scanf("%d",&g);

	switch(g)
	{
			case 1:
			    {
			        printf("The answer should be given in (yes)/(No)\n ");
				    printf("1.Do you have any pain between shoulder blades,arm,chest,jaw,left arm or upper abdomen?  \n");
					scanf("%s",a[0]);
					printf("2.Have you much sweat in recent days?\n");
					scanf("%s",a[1]);
					printf("3.Do you have any of the following in recent days?\n");
					printf("Heartburn\n");
					printf("Indigestion\n");
					printf("Vomiting\n");
					scanf("%s",a[2]);
					printf("4.Do you have any pain like a clenched fist in the chest? \n");
					scanf("%s",a[3]);
					printf("5.Have you any discomfort or tightness besides your neck? \n");
					scanf("%s",a[4]);
				for(i=0;i<5;i++)
				{
					if(strcmp(a[i],"yes")==1)
     			    j++;

                    else
					{
     			    	if(strcmp(a[0],"no")==1)
     			    	{printf("you are suffering from cardiac arrest");
						 }
						 else
						 {printf("Nothing to worry");
						 }
					 }

					printf("\nThank you for your kind consideration for giving time here. Hope I will be able to met upto your expectation next time.\a");
					exit(1);
				}
			break;
            }
		case 2:
		    {
		        printf("The answer should be given in (yes)/(No)\n ");
                printf("1.Do you have any sleep problem like day sleepiness/early awaking/sleep disturbances?\n");
                scanf("%s",p[0]);
                printf("2.Do you have any body fatigue/dizziness/poor body balance?\n");
                scanf("%s",p[1]);
                printf("3.Do you have any kind of tremor in your body parts like hands/limbs etc?\n");
                scanf("%s",p[2]);
                printf("4.Do you have any muscle problem like stiff muscles/standing difficulty/difficulty in walking etc?\n");
                scanf("%s",p[3]);
                printf("5.Do you have any kind of anxiety doing any work?or have you any urine leakage problrm?\n");
                scanf("%s",p[4]);
                for(i=0;i<5;i++)
				{
					if(strcmp(p[i],"yes")==1)
     			    j++;

                    else
					{
     			    	if(strcmp(p[0],"no")==1)
     			    	{
						 printf("you have a high risk of Brain Tumour...\n");
     			    	 printf("Please Consult a good neurologist as soon as possible");
						 }
						 else
						 {printf("Nothing to worry");
						 }
					 }

					printf("\nThank you for your kind consideration for giving time here. Hope I will be able to met upto your expectation next time.\a");

					exit(1);
		        }
			break;
			}
        case 3:
            {
                printf("The answer should be given in (yes)/(No)\n ");
            printf("1.Do you have any sudden eye pain?\n");
            scanf("%s",q[0]);
            printf("2.Do you have any headache sometimes?\n");
            scanf("%s",q[1]);
            printf("3.Do you have blurred vision?\n");
            scanf("%s",q[2]);
            printf("4.Do you have high pressure in your eys?\n");
            scanf("%s",q[3]);
            printf("5.Do you have glasses now?\n");
            scanf("%s",q[4]);
            for(i=0;i<5;i++)
				{
					if(strcmp(q[i],"yes")==1)
     			    j++;

                    else
					{
     			    	if(strcmp(q[0],"no")==1)
     			    	{
						 printf("you have a high risk of Migrain...\n");
     			    	 printf("Please Consult a good ophthalmologist as soon as possible");
						 }
						 else
						 {printf("Nothing to worry");
						 }
					 }


					printf("\nThank you for your kind consideration for giving time here. Hope I will be able to met upto your expectation next time.\a");
                    exit(1);
				}
					break;
            }
				case 4:
				    {
				        printf("The answer should be given in (yes)/(No)\n ");
				    printf("1.Do you see blood in your caugh?  \n");
					scanf("%s",r[0]);
					printf("2.Do you feel Pain in the chest, back or shoulders that worsens during coughing, laughing or deep breathing?\n");
					scanf("%s",r[1]);
					printf("3.Have You observed Swelling of the face, arms or neck in your body?\n");
					scanf("%s",r[2]);
					printf("4.Do you realised Shortness of breath that comes on suddenly and occurs during everyday activities? \n");
					scanf("%s",r[3]);
					printf("5.ave you Lost your appetite? \n");
					scanf("%s",r[4]);
				for(i=0;i<5;i++)
				{
					if(strcmp(r[i],"yes")==1)
     			    j++;

                    else
					{
     			    	if(strcmp(r[0],"no")==1)
     			    	{
						 printf("By going throgh all the symptoms we can say that you have a high possibility of lung cancer\n");
						 printf("Please consult an Oncologist as soon as possible...All the symptoms which are present here are for 1st stage of cancer...\n");
						 }
						 else
						 {
						 printf("Nothing to worry");
						 }
					 }

					printf("\nThank you for your kind consideration for giving time here. Hope I will be able to met upto your expectation next time.\a");

					exit(1);
				}
			break;

	        }

		default:
		    {
			printf("you entered a wrong choice...");
		break;
		    }
            }
	getch();
	return 0;
}
