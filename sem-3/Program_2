
#include<stdio.h>
char str[100],pat[100],rep[100],ans[100];
int i,j,k,m,c,flag=0;


void strmatch()
{
	int i=c=m=j=0;
	while(str[c]!='\0')
	{
		if(str[m]==pat[i])
		{
			i++;m++;
			if(pat[i]=='\0')
			{
				flag=1;
				for(k=0;rep[k]!='\0';k++,j++)
				{ans[j]=rep[k];
				i=0;c=m;
				}	
			}
		}
		else
		{
			ans[j]=str[c];
			j++;
			c++;
			m=c;
			i=0;
		}
	}
	ans[j]='\0';
}

void main()
{
	printf("Enter the main string\n");
	scanf("%s",str);
	printf("Enter the pat string\n");
	scanf("%s",pat);
	printf("Enter the rep string\n");
	scanf("%s",rep);
	strmatch();
	if(flag==1)
	printf("The final string is:\n%s",ans);
	else
	printf("Invalid string");
}
