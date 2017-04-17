#include <stdio.h>
int main()
{	
	int day, sum, flag = 0;
	printf("Input days: ");
	scanf("%d", &day);
	printf("Input sum: ");
	scanf("%d", &sum);
	if((day > 365) || (day < 0))
    {
    	flag = 1;
    }
    
    if(sum < 10000)
    {
        flag = 1;
    }
	
	if(flag == 0)
	{
		if(sum < 100000)
        {
            if((day >= 0) && (day <= 30))
            {
                sum = sum - sum*0.1;
            }else
            {
                if((day >= 31) && (day <= 120))
                {
                    sum = sum + sum*0.02;
                }else
                {
                    if((day >= 121) && (day <= 240))
                    {
                        sum = sum + sum*0.06;
                    }else
                    {
                        if((day >= 241) && (day <= 365))
                        {
                            sum = sum + sum*0.12;
                        }
                    }
                }
            }
        }else
		{
       	if((day >= 0) && (day <= 30))
            {
                sum = sum - sum*0.1;
            }else
            {
                if((day >= 31) && (day <= 120))
                {
                    sum = sum + sum*0.03;
                }else
                {
                    if((day >= 121) && (day <= 240))
                    {
                        sum = sum + sum*0.08;
                    }else
                    {
                         if((day >= 241) && (day <= 365))
                         {
                            sum = sum + sum*0.15;
                         }
                    }
                 }
             }
         }
         printf("%d" , sum);
	}else
    {
        printf("Error");
    }
		
    return 0;
}