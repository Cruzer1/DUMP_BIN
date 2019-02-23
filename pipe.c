#include<stdio.h>
main()
{
int ipipe[2],icheck,icount=0;
while(1)
{
icheck=pipe(ipipe);
if(icheck==-1)
{
printf("\n\t pipe creation over\n");
break;
}
icount++;
printf("\n\t R.P.D=%d\t W.P.D=%d",ipipe[0],ipipe[1]);
}
printf("\n\t total number of pipes created=%d\n",icount);
printf("\n________________________");
printf("\n N.B");
printf("\n\t R.P.D-> read pipe descriptor");
printf("\n\t w.p.d -> write pipe desriptor\n");
}
