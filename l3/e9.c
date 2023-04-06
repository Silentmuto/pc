// Ce se afiseaza pentru diverse valori ale lui int x?
int x;
scanf("%d", &x);
switch(x)
{
	case 0:
		printf("ZERO!");
		break;
	case 1:
		printf("UNU!");
	case 2:
		printf("DOI!");
		break;
	case 3:
		printf("~~tres~~");
	case -1:
		printf("freezing cold");
	case 4:
		printf("quatre");
	default:
		printf("loser");
}

