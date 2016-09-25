//unaretorne la posicion mas al final de t en s si no hay return -1

int posicionx(char *,char *);
char mayusminus(char *);
void printcambio(char(*mm)(char*),char *m);
char copiar(char *s);

int main()
{
    char palabra[10]="holaoso", let;
	let=getchar();
	//printf("%c\n",let);
	printcambio(mayusminus,&let);
	printf("La posicion de la letra: %i\n",posicionx(palabra,&let));
	printcambio(copiar,palabra);

}

int posicionx(char *s,char *t)
{
	int i=0,cont=-1;
	for(s;*s;s++)
	{
		i++;
		if (*s==*t)
			cont=i;
	}
	return cont;
}

void printcambio(char(*mm)(char*),char *m)
{
	printf("%c\n",mm(m));
}


//deberia ir void pero asi se peude llamar con elpuntero a funcion preguntar al profe
char copiar(char *s)
{	
	for(s;*s;s++)
	{
		printf("%c",mayusminus(s));				
	}	
	
}


char mayusminus(char *m)
{	
	if(*m>='a'&&*m<='z') return *m -'a'+'A';
	else if (*m>='A'&&*m<='Z') return *m +'a'-'A';
}
