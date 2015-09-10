#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int bills = 0;
int coupons = 0;
int cheeseburger = 0;
int hamburger = 0;
int cornDog = 0;
int hotDog = 0;
int fishSandwhich = 0;
int frenchFries = 0;
int tacosDeAzada = 0;
int tacosDePork = 0;
int tostadaDeTinga = 0;
int elote = 0;
int watermelon = 0;
int horchata = 0;
int germanDinner = 0;
int brat = 0;
int potatoSalad = 0;
int potatoChips = 0;
int asianDinner = 0;
int eggRolls = 0;
int friedRice = 0;
int pancit = 0;
int fortuneCookie = 0;
int meatballSub = 0;
int samplePlatter = 0;
int nachosAndCheese = 0;
int nachosAndMeat = 0;
int coke = 0;
int dietCoke = 0;
int sprite = 0;
int water = 0;

void subtract() {
	printf("What is the code of the item you want to subtract?\n");
	char *input = (char*)malloc(sizeof(char) * 2);
	char *c = input;
	getchar();
	*c = getchar();
	c++;
	*c = getchar();
	if (*c == '\n') {
		while (*c == '\n') {
			printf("Invaild input\n");
			c--;
			*c = getchar();
			c++;
			*c = getchar();
		}
	}
	if (strncmp(input, "cb", 2) == 0) {
		cheeseburger--;
		printf("Subtracted a cheeseburger\n");
	} else if (strncmp(input, "hb", 2) == 0) {
		hamburger--;
		printf("Subtracted a hamburger\n");
	} else if (strncmp(input, "cd", 2) == 0) {
		cornDog--;
		printf("Subtracted a corn dog\n");
	} else if (strncmp(input, "hd", 2) == 0) {
		hotDog--;
		printf("Subtracted a hot dog\n");
	} else if (strncmp(input, "fs", 2) == 0) {
		fishSandwhich--;
		printf("Subtracted a fish sandwhich\n");
	} else if (strncmp(input, "ff", 2) == 0) {
		frenchFries--;
		printf("Subtracted an order of french fries\n");
	} else if (strncmp(input, "ta", 2) == 0) {
		tacosDeAzada--;
		printf("Subtracted an order of tacos de azada\n");
	} else if (strncmp(input, "tp", 2) == 0) {
		tacosDePork--;
		printf("Subtracted an order of tacos de pork\n");
	} else if (strncmp(input, "tt", 2) == 0) {
		tostadaDeTinga--;
		printf("Subtracted a tostada de tinga\n");
	} else if (strncmp(input, "ec", 2) == 0) {
		elote--;
		printf("Subtracted an order of elote\n");
	} else if (strncmp(input, "wc", 2) == 0) {
		watermelon--;
		printf("Subtracted a watermelon cup\n");
	} else if (strncmp(input, "hc", 2) == 0) {
		horchata--;
		printf("Subtracted an order of horchata\n");
	} else if (strncmp(input, "gd", 2) == 0) {
		germanDinner--;
		printf("Subtracted a german dinner\n");
	} else if (strncmp(input, "br", 2) == 0) {
		brat--;
		printf("Subtracted a brat\n");
	} else if (strncmp(input, "ps", 2) == 0) {
		potatoSalad--;
		printf("Subtracted an order of potato salad\n");
	} else if (strncmp(input, "pc", 2) == 0) {
		potatoChips--;
		printf("Subtacted an order of potato chips\n");
	} else if (strncmp(input, "ad", 2) == 0) {
		asianDinner--;
		printf("Subtacted an asian dinner\n");
	} else if (strncmp(input, "er", 2) == 0) {
		eggRolls--;
		printf("Subtracted an order of egg rolls\n");
	} else if (strncmp(input, "fr", 2) == 0) {
		friedRice--;
		printf("Subtracted an order of fried rice\n");
	} else if (strncmp(input, "pa", 2) == 0) {
		pancit--;
		printf("Subtracted an order of pancit\n");
	} else if (strncmp(input, "fc", 2) == 0) {
		fortuneCookie--;
		printf("Subtracted a fortune cookie\n");
	} else if (strncmp(input, "ms", 2) == 0) {
		meatballSub--;
		printf("Subtracted a meatball sub\n");
	} else if (strncmp(input, "sp", 2) == 0) {
		samplePlatter--;
		printf("Subtracted a sample platter\n");
	} else if (strncmp(input, "nc", 2) == 0) {
		nachosAndCheese--;
		printf("Subtracted an order of nachos with cheese\n");
	} else if (strncmp(input, "nm", 2) == 0) {
		nachosAndMeat--;
		printf("Subtracted an order of nachos with meat\n");
	} else if (strncmp(input, "cc", 2) == 0) {
		coke--;
		printf("Subtracted a coke\n");
	} else if (strncmp(input, "dc", 2) == 0) {
		dietCoke--;
		printf("Subtracted a diet coke\n");
	} else if (strncmp(input, "sc", 2) == 0) {
		sprite--;
		printf("Subtracted a sprite\n");
	} else if (strncmp(input, "wa", 2) == 0) {
		water--;
		printf("Subtracted a water\n");
	} else if (strncmp(input, "cp", 2) == 0) {
		coupons--;
		printf("Subtracted a coupon\n");
	} else {
		printf("Invalid code, retype 'su' and start the subtraction over\n");
	}
}

void commands () {
	printf("Directions\n");
	printf("-----------------------\n");
	printf("To end a bill, press ';;'\n");
	printf("Cheeseburger: 'cb'\n");
	printf("Hamburger: 'hb'\n");
	printf("Corn Dog: 'cd'\n");
	printf("Hot Dog: 'hd'\n");
	printf("Fish Sandwhich: 'fs'\n");
	printf("French Fries: 'ff'\n");
	printf("Tacos Azadas: 'ta'\n");
	printf("Tacos de Pork: 'tp'\n");
	printf("Tostada de Tinga, press 'tt'\n");
	printf("Elote: 'ec'\n");
	printf("Watermelon Cup: 'wc'\n");
	printf("Horchata: 'hc'\n");
	printf("German Dinner: 'gd'\n");
	printf("Brat: 'br'\n");
	printf("Potato Salad: 'ps'\n");
	printf("Potato Chips: 'pc'\n");
	printf("Asian Dinner, press 'ad'\n");
	printf("Egg Rolls: 'er'\n");
	printf("Fried Rice: 'fr'\n");
	printf("Pancit: 'pa'\n");
	printf("Fortune Cookie: 'fc'\n");
	printf("Meatball Sub: 'ms'\n");
	printf("Sample Platter: 'sp'\n");
	printf("Nachos with Cheese: 'nc'\n");
	printf("Nachos with Meat: 'nm'\n");
	printf("Coke: 'cc'\n");
	printf("Diet Coke: 'dc'\n");
	printf("Sprite: 'sc'\n");
	printf("Water: 'wa'\n");
	printf("Press enter after each item\n");
	printf("To subtract from a count, press 'su'\n");
	printf("To stop counting, press '**' and then enter\n");
	printf("To repeat this list of commands press 'cl'\n");
	printf("-----------------------\n");
}


int main() {
	char *code = (char*)malloc(sizeof(char) * 2);
	char begin;
	commands();
	printf("Press enter to start counting\n");
	begin = getchar();
	while (begin != '\n') {
		begin = getchar();
	}
	printf("Begin counting:\n");
	while (strncmp(code, "**", 2) != 0) {
		char *c = code;
		*c = getchar();
		c++;
		*c = getchar();
		if (*c == '\n') {
			while (*c == '\n') {
				printf("Invaild input\n");
				c--;
				*c = getchar();
				c++;
				*c = getchar();
			}
		}
		if (strncmp(code, "cb", 2) == 0) {
			cheeseburger++;
			printf("Added a cheeseburger\n");
		} else if (strncmp(code, "hb", 2) == 0) {
			hamburger++;
			printf("Added a hamburger\n");
		} else if (strncmp(code, "cd", 2) == 0) {
			cornDog++;
			printf("Added a corn dog\n");
		} else if (strncmp(code, "hd", 2) == 0) {
			hotDog++;
			printf("Added a hot dog\n");
		} else if (strncmp(code, "fs", 2) == 0) {
			fishSandwhich++;
			printf("Added a fish sandwhich\n");
		} else if (strncmp(code, "ff", 2) == 0) {
			frenchFries++;
			printf("Added an order of french fries\n");
		} else if (strncmp(code, "ta", 2) == 0) {
			tacosDeAzada++;
			printf("Added an order of tacos de azada\n");
		} else if (strncmp(code, "tp", 2) == 0) {
			tacosDePork++;
			printf("Added an order of tacos de pork\n");
		} else if (strncmp(code, "tt", 2) == 0) {
			tostadaDeTinga++;
			printf("Added a tostada de tinga\n");
		} else if (strncmp(code, "ec", 2) == 0) {
			elote++;
			printf("Added an order of elote\n");
		} else if (strncmp(code, "wc", 2) == 0) {
			watermelon++;
			printf("Added a watermelon cup\n");
		} else if (strncmp(code, "hc", 2) == 0) {
			horchata++;
			printf("Added an order of horchata\n");
		} else if (strncmp(code, "gd", 2) == 0) {
			germanDinner++;
			printf("Added a german dinner\n");
		} else if (strncmp(code, "br", 2) == 0) {
			brat++;
			printf("Added a brat\n");
		} else if (strncmp(code, "ps", 2) == 0) {
			potatoSalad++;
			printf("Added an order of potato salad\n");
		} else if (strncmp(code, "pc", 2) == 0) {
			potatoChips++;
			printf("Added an order of potato chips\n");
		} else if (strncmp(code, "ad", 2) == 0) {
			asianDinner++;
			printf("Added an asian dinner\n");
		} else if (strncmp(code, "er", 2) == 0) {
			eggRolls++;
			printf("Added an order of egg rolls\n");
		} else if (strncmp(code, "fr", 2) == 0) {
			friedRice++;
			printf("Added an order of fried rice\n");
		} else if (strncmp(code, "pa", 2) == 0) {
			pancit++;
			printf("Added an order of pancit\n");
		} else if (strncmp(code, "fc", 2) == 0) {
			fortuneCookie++;
			printf("Added a fortune cookie\n");
		} else if (strncmp(code, "ms", 2) == 0) {
			meatballSub++;
			printf("Added a meatball sub\n");
		} else if (strncmp(code, "sp", 2) == 0) {
			samplePlatter++;
			printf("Added a sample platter\n");
		} else if (strncmp(code, "nc", 2) == 0) {
			nachosAndCheese++;
			printf("Added an order of nachos with cheese\n");
		} else if (strncmp(code, "nm", 2) == 0) {
			nachosAndMeat++;
			printf("Added an order of nachos with meat\n");
		} else if (strncmp(code, "cc", 2) == 0) {
			coke++;
			printf("Added a coke\n");
		} else if (strncmp(code, "dc", 2) == 0) {
			dietCoke++;
			printf("Added a diet coke\n");
		} else if (strncmp(code, "sc", 2) == 0) {
			sprite++;
			printf("Added a sprite\n");
		} else if (strncmp(code, "wa", 2) == 0) {
			water++;
			printf("Added a water\n");
		} else if (strncmp(code, "cp", 2) == 0) {
			coupons++;
			printf("Added a coupon\n");
		} else if (strncmp(code, "su", 2) == 0) {
			subtract();
		} else if (strncmp(code, ";;", 2) == 0) {
			bills++;
			printf("Completed a bill\n");
		} else if (strncmp(code, "**", 2) == 0) {
			break;
		} else if (strncmp(code, "cl", 2) == 0) {
			commands();
		} else {
			printf("Invalid code, retype the code\n");
		}
		char x = getchar();
		if (x != '\n') {
			while (x != '\n') {
				x = getchar();
			}
		}
	}

	printf("      Totals\n");
	printf("--------------------\n");
	printf("Bills: %d\n", bills);
	printf("Coupons: %d\n", coupons);
	printf("Cheeseburgers: %d\n", cheeseburger);
	printf("Hamburgers: %d\n", hamburger);
	printf("Corn Dogs: %d\n", cornDog);
	printf("Hot Dogs: %d\n", hotDog);
	printf("Fish Sandwhiches: %d\n", fishSandwhich);
	printf("French Fries: %d\n", frenchFries);
	printf("Tacos de Azada: %d\n", tacosDeAzada);
	printf("Tacos de Pork: %d\n", tacosDePork);
	printf("Tostadas de Tinga: %d\n", tostadaDeTinga);
	printf("Elote: %d\n", elote);
	printf("Watermelon Cups: %d\n", watermelon);
	printf("Horchata: %d\n", horchata);
	printf("German Dinners: %d\n", germanDinner);
	printf("Brats: %d\n", brat);
	printf("Potato Salads: %d\n", potatoSalad);
	printf("Potato Chips: %d\n", potatoChips);
	printf("Asian Dinners: %d\n", asianDinner);
	printf("Egg Rolls: %d\n", eggRolls);
	printf("Fried Rice: %d\n", friedRice);
	printf("Pancit: %d\n", pancit);
	printf("Fortune Cookies: %d\n", fortuneCookie);
	printf("Meatball Subs: %d\n", meatballSub);
	printf("Sample Platters: %d\n", samplePlatter);
	printf("Nachos with Cheese: %d\n", nachosAndCheese);
	printf("Nachos with Meat: %d\n", nachosAndMeat);
	printf("Coke: %d\n", coke);
	printf("Diet Coke: %d\n", dietCoke);
	printf("Sprite: %d\n", sprite);
	printf("Water: %d\n", water);
	printf("---------------------\n");
}
