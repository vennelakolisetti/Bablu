#include<stdio.h>
#include<stdlib.h>

int g_a; //.bss

const int b[6] = {1,2,3,4,5,6}; //.ro

char c[200]; //.bss

const int d = 23; // .ro

int e[4] = {1,2,3,4};//.data

int f; //.bss

static int gs_g; //.bss

static int h=6; //.data

static char *i= "globaledge"; //char*i=.data and "globaledge"=.ro

static char j[]= "globaledge"; //.data

static char k[80]; // .bss

char *m="capgemini"; // *m=.data and "capgemini"=.ro

const char *n="capgemini"; //.ro

char p[]="kishor";// p[]=.data and "kishore"=.ro

char q[5]="cikas"; //.data and .ro

const char r[5];.ro

const char s[6]="global"; //.ro

int main()
{

	int l_a1; //stack

	const int b1[6] = {1,2,3,4,5,6}; //.ro

	char c1[200];// stack

	const int d1 = 23; //.ro

	int e1[4] = {1,2,3,4};// stack

	int f1; //stack

	static int ls_g1; //.bss

	static int h1=6; //.data

	static char *i1= "globaledge"; //.data and .ro

	static char j1[]= "globaledge";// .data 

	static char k1[80]; //.bss

	auto int l1=0; //stack

	char *m1="capgemini"; //stack and .ro

	const char *n1="capgemini"; //.ro

	char p1[]="global"; //stack
	
	char q1[6]="global"; //stack

	const char r1[5]; //.ro

	const char s1[6]="global";// .ro

	return 0;//stack
}
