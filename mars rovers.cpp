#include<stdio.h>
#include<string.h>

int main()
{
	int x,y,i,x1,y1;
	char orient;
	char mp[20];
	printf("Upper Right coordinates of plateau:");
    scanf("%d %d",&x1, &y1);
	printf("Starting position:");
	scanf("%d %d %c",&x, &y, &orient);
    printf("Movement Plan:");
    scanf("%s",&mp);
    for(i=0;i<strlen(mp);i++)
    {
    	if (mp[i]=='L')
         {
         	if(orient=='N')
         	orient='W';
         	
         	else if(orient=='W')
             orient='S';
 
             else if(orient=='S')
              orient='E';
 
            else if(orient=='E')
             orient='N';

		 }    	
		 if(mp[i]=='R')
		 {
		 if(orient=='N')
          orient= 'E'; 
 
         else if(orient=='E')
           orient='S';
 
        else if(orient=='S')
         orient='W';
 
        else if(orient=='W')
         orient='N';
         }
         
         if(mp[i]=='M')
         {
         	if(orient=='N')
         	 y++;
         	 else if (orient=='S')
         	 y--;
         	 else if(orient=='E')
         	 x++;
         	 else if(orient=='W')
         	 x--;
		 }
		 
		 
	}
	if(x1>x && y1>y)
	printf("Final Position: %d %d %c",x,y,orient);
	else
	printf("Wrong coordinates")
	return 0;
	
	
}
