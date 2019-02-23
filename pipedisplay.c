#include<stdio.h>
main()
{
int ipipe[2],icheck;
char cbuf[100];
pipe(ipipe);
icheck=fork();
while(1)
{
if (icheck>0)
{
sleep(2);
read(ipipe[0],cbuf,100);
puts(cbuf);
printf("\n Preetam");
gets(cbuf);
write(ipipe[1],cbuf,100);
}
if(icheck==0)
{
printf("\n Cruzer");
gets(cbuf);

write(ipipe[1],cbuf,100);
sleep(2);
read(ipipe[0],cbuf,100);
puts(cbuf);
}
}
printf("\n");
}
