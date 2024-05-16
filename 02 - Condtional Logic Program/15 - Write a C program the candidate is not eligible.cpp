#include<stdio.h>
main()
{
	int maths=72, physics=65, chemistry=51, total;
	printf("Marks in maths = 72");
	printf("\nMarks in physics = 65");
	printf("\nMarks in chemistry = 51");
	total=maths+physics+chemistry;
	printf("\nTotal of the marks = %d", total);
	if(maths>=65 && physics>=55 && chemistry>=50)
	{
		if(total>=190 && ((maths+physics)>=140))
		{
			printf("\nCandidate are eligible for admission");
		}
		else
	    {
	    	printf("\nCandidate are not eligible for admission");
		}
	}
	else
	{
		printf("\nCandidate are not eligible for admission");
	}
	
}
