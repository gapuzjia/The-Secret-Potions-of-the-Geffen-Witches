/*
Description: The Secret Potions of the Geffen Witches is an adventure game. The goal of the game is to craft Ymir's Avatar Potion.
			To do so, the player must venture through the four fishing sites in search for the rare fishes essential to crafting the Avatar's Potion.
			This game incorporates a trading system through the currency Ymir. Ymir can be used to purchase the other items crucial to making the Chakras.
Programmed by: Jianna S. Gapuz S28
Last modified: February 5, 2022
Version: 1.0
Acknowledgements: 
			Game concept taken from CCPROG1's Machine Project guidelines. 
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// declarations//

#define GOLD 750
#define MAJESTIC_WATER 100
#define WONDROUS_VINEGAR 150
#define MAGICAL_BAIT 300

#define SCALELESS_BLACKFISH 1000
#define TILAPIA 35 
#define MARIANA_SNAILFISH 1000
#define SARDINES 40
#define MUDSKIPPERS 1000
#define BANGUS 50
#define HILLSTREAM_LOACHES 1000
#define TUNA 45

/* Town_Of_Geffen
Precondition: user chooses to teleport to the Town of Geffen
@param Gold is the quantity of Gold in inventory
@param Majestic_Water is the quantity of Majestic_Water in inventory
@param Wondrous_Vinegar is the quantity of Wondrous Vinegar in inventory
@param Magical_Bait is the quantity of Magical Bait in inventory

@param Fire_Chakra is the quantity of Fire Chakra in inventory
@param Water_Chakra is the quantity of Water Chakra in inventory
@param Earth_Chakra is the quantity of Earth Chakra in inventory
@param Air_Chakra is the quantity of Air Chakra in inventory

@param Fire_Chakra_ is the quantity of Fire Chakra after crafting
@param Water_Chakra_ is the quantity of Water Chakra after crafting
@param Earth_Chakra_ is the quantity of Earth Chakra after crafting
@param Air_Chakra_ is the quantity of Air Chakra after crafting

@param Scaleless_Blackfish is the quantity of Scaleless Blackfish in inventory
@param Mariana_Snailfish is the quantity of Mariana Snailfish in inventory
@param Mudskippers is the quantity of Mudskippers in inventory
@param Hillstream_Loaches is the quantity of Hillstream Loaches in inventory

*/
int Town_Of_Geffen (int Gold, int Majestic_Water, int Wondrous_Vinegar, int Magical_Bait, 
int Fire_Chakra, int Water_Chakra, int Earth_Chakra, int Air_Chakra, int Avatar_Potion,
int *Fire_Chakra_, int *Water_Chakra_, int *Earth_Chakra_, int *Air_Chakra_, int *Avatar_Potion_,
int Scaleless_Blackfish, int Mariana_Snailfish, int Mudskippers, int Hillstream_Loaches){
	
	char input, choice, choice2;
	
	printf("\t[C]Craft Chakras%40s\n ", "[P]Craft Ymir's Avatar Potion\n");
	printf("\t[E]Exit to Main Menu\n--->");
	scanf(" %c", &input);
	
	if (input == 'C' || input == 'c'){
		printf("Which Chakra do you want to craft?\n");
		printf("\t[F]Fire Chakra %34s\n", "[A]Air Chakra");
		printf("\t[W]Water Chakra %35s\n\n--->", "[E]Earth Chakra");
		scanf(" %c", &choice);
		if (choice == 'F' || choice == 'f'){
			printf("To craft the Fire Chakra, you need:\n\n");
			printf("\t[1]Scaleless Blackfish - found in Taal Lake%54s\n", "[1]Majestic Water - found at the Holgrehenn Store");
			printf("\t[1]Gold - found at the Holgrehenn Store%60s\n", "[1]Wondrous Vinegar - found at the Holgrehenn Store");
			printf("\nDo you want to craft the Fire Chakra?\n");
			printf("\t[Y]Yes%25s\n---> ", "[N]No");
			scanf(" %c", &choice2);

			if (choice2 == 'Y'|| choice2 == 'y'){
				if (Scaleless_Blackfish >= 1 && Gold >= 1 && Majestic_Water >= 1 && Wondrous_Vinegar >= 1){
					printf("You crafted the Fire Chakra!\n");
					*Fire_Chakra_ = 1;
				}
				else{
					printf("You do not have the items to craft the Fire Chakra.\n");
				}
			}
			else if (choice2 == 'N' || choice2 == 'n'){
				printf("You chose to cancel crafting.\n");
			}
			
		}
		else if (choice == 'A' || choice == 'a'){
			printf("To craft the Air Chakra, you need:\n");
			printf("\t[1]Hillstream Loach - found in Mindanao Current%54s\n", "[1]Majestic Water - found at the Holgrehenn Store");
			printf("\t[1]Gold - found at the Holgrehenn Store%64s\n", "[1]Wondrous Vinegar - found at the Holgrehenn Store");
			printf("\nDo you want to craft the Air Chakra?\n");
			printf("\t[Y]Yes%25s\n---> ", "[N]No");
			scanf(" %c", &choice2);

			if (choice2 == 'Y'|| choice2 == 'y'){
				if (Hillstream_Loaches >= 1 && Gold >= 1 && Majestic_Water >= 1 && Wondrous_Vinegar >= 1){
					printf("You crafted the Air Chakra!\n");
					*Air_Chakra_ = 1;
				}
				else{
					printf("You do not have the items to craft the Air Chakra.\n");
				}
			}
			else if (choice2 == 'N' || choice2 == 'n'){
				printf("You chose to cancel crafting.\n");
			}
		}
		else if (choice == 'W' || choice == 'w'){
			printf("To craft the Water Chakra, you need:\n");
			printf("\t[1]Mariana Snailfish - found in Galathea Deep%52s\n", "[1]Majestic Water - found at the Holgrehenn Store");
			printf("\t[1]Gold - found at the Holgrehenn Store%60s\n", "[1]Wondrous Vinegar - found at the Holgrehenn Store");
			printf("\nDo you want to craft the Water Chakra?\n");
			printf("\t[Y]Yes%25s\n---> ", "[N]No");
			scanf(" %c", &choice2);

			if (choice2 == 'Y'|| choice2 == 'y'){
				if (Mariana_Snailfish >= 1 && Gold >= 1 && Majestic_Water >= 1 && Wondrous_Vinegar >= 1){
					printf("You crafted the Water Chakra!\n");
					*Water_Chakra_ = 1;
				}
				else{
					printf("You do not have the items to craft the Water Chakra.\n");
				}
			}
			else if (choice2 == 'N' || choice2 == 'n'){
				printf("You chose to cancel crafting.\n");
			}
		}
		else if (choice == 'E' || choice == 'e'){
			printf("To craft the Earth Chakra, you need:\n");
			printf("\t[1]Mudskipper - found in Dagupan Mangrove Forests%52s\n", "[1]Majestic Water - found at the Holgrehenn Store");
			printf("\t[1]Gold - found at the Holgrehenn Store%64s\n", "[1]Wondrous Vinegar - found at the Holgrehenn Store");
			printf("\nDo you want to craft the Earth Chakra?\n");
			printf("\t[Y]Yes%25s\n---> ", "[N]No");
			scanf(" %c", &choice2);

			if (choice2 == 'Y'|| choice2 == 'y'){
				if (Mudskippers >= 1 && Gold >= 1 && Majestic_Water >= 1 && Wondrous_Vinegar >= 1){
					printf("You crafted the Earth Chakra!\n");
					*Earth_Chakra_ = 1;
				}
				else{
					printf("You do not have the items to craft the Earth Chakra.\n");
				}
			}
			else if (choice2 == 'N' || choice2 == 'n'){
				printf("You chose to cancel crafting.\n");
			}
		}
	}
	else if (input == 'P' || input == 'p'){
		
		printf("Do you want to craft Ymir's Avatar Potion?\n");
		printf("\t[Y]Yes%25s\n---> ", "[N]No");
		scanf(" %c", &choice);
		if (choice == 'Y' || choice == 'y'){
			if (Fire_Chakra >= 1 && Water_Chakra >= 1 && Earth_Chakra >= 1 && Air_Chakra >= 1){
				*Avatar_Potion_ = 1;
				input = 0;
				return input;
			}
			else{
				printf("You do not possess all the Chakras to craft the Avatar's Potion.\n");
			}
		}
	}

	else if (input == 'E' || input == 'e'){
		printf("You chose to exit the Geffen Town proper.\n");
		input = 0;
		return input;
	}
		
}

//function for town of Holgrehenn Store//
int Holgrehenn_Store(int Ymir, int Gold, int Majestic_Water, int Wondrous_Vinegar, int Magical_Bait, int Fire_Chakra, int Water_Chakra, int Earth_Chakra, int Air_Chakra,
int Scaleless_Blackfish, int Mariana_Snailfish, int Mudskippers, int Hillstream_Loaches, int Bangus, int Tilapia, int Tuna, int Sardines,
int *Magical_Bait_,
int *BYmir, int *BGold, int *BMajestic_Water, int *BWondrous_Vinegar, int *MB_Quantity,
int *SScaleless_Blackfish, int *SMariana_Snailfish, int *SMudskippers, int *SHillstream_Loaches, int *SBangus, int *STilapia, int *STuna, int *SSardines){
	
	char input, choice;
	int quantity, payment;
	

	printf("You have %d Ymir.\n", Ymir);
	printf("\t[B]Buy%25s\n ", "[E]Exit Store");
	printf("\t[S]Sell\n--->");
	scanf(" %c", &input);
	
	if (input == 'B' || input == 'b'){
		printf("What would you like to buy?\n\n");
		printf("\t[G]Gold - 750 Ymir%49s\n", "[M]Majestic Water - 100 Ymir");
		printf("\t[W]Wondrous Vinegar - 150 Ymir%35s\n", "[B]Magical Bait - 300 Ymir");
		scanf(" %c", &choice);
		
		//purchase gold//
		if (choice == 'G' || choice == 'g'){
			printf("How much Gold do you want to purchase?\n");
			scanf(" %d", &quantity);
			payment = (quantity * GOLD);
			if (payment > Ymir){
				printf("You do not have enough Ymir to purchase this.\n");
				printf("Returning to the Main Menu.\n");
			}
			else{
				printf("You purchased %d Gold.", quantity);
				*BYmir = (payment * -1);
				*BGold = quantity;
				
				
			}
			
		}
		//purchase majestic water//
		else if(choice == 'M' ||choice == 'm'){
			printf("How much Majestic Water do you want to purchase?\n");
			scanf("%d", &quantity);
			payment = (quantity * MAJESTIC_WATER);
			if (payment > Ymir){
				printf("You do not have enough Ymir to purchase this.\n");
				printf("Returning to the Main Menu.\n");
			}
			else{
				printf("You purchased %d Majestic Water.\n", quantity);
				*BYmir = (payment * -1);
				*BMajestic_Water = quantity;
			}
		}
		//purchase wondrous vinegar//
		else if (choice == 'W' || choice == 'w'){
			printf("How much Wondrous Vinegar do you want to purchase?\n");
			scanf("%d", &quantity);
			payment = (quantity * WONDROUS_VINEGAR);
			if (payment > Ymir){
				printf("You do not have enough Ymir to purchase this.\n");
				printf("Returning to the Main Menu.\n");
			}
			else{
				printf("You purchased %d Wondrous Vinegar.", quantity);
				*BYmir = (payment * -1);
				*BWondrous_Vinegar = quantity;
			}
		}
		//purchase magical bait//
		else if (choice == 'B' || choice== 'b'){
			printf("How much Magical Bait do you want to purchase?\n");
			scanf("%d", &quantity);
			payment = (quantity * MAGICAL_BAIT);
			if (payment > Ymir){
				printf("You do not have enough Ymir to purchase this.\n");
				printf("Returning to the Main Menu.\n");
			}
			else{
				printf("You purchased %d Magical Bait.", quantity);
				*BYmir = (payment * -1);
				*MB_Quantity = quantity;
			}
		}
	
		else {
			printf("Invalid input.\n");
			printf("Returning to Holgrehenn Store Main Menu.\n");
		}
	}
	else if (input == 'S' || input == 's'){
		printf("What would you like to sell?\n\n");
		printf("\t[C]Scaleless Blackfish - 1000 Ymir%42s\n", "[T]Tilapia - 35 Ymir");
		printf("\t[M]Mariana Snailfish - 1000 Ymir%45s\n", "[S]Sardines - 40 Ymir");
		printf("\t[D]Mudskippers - 1000 Ymir%49s\n", "[B]Bangus - 50 Ymir");
		printf("\t[H]Hillstream Loaches - 1000 Ymir%40s\n", "[U]Tuna - 40 Ymir");
		scanf(" %c", &choice);
	
		//sell scaleless blackfish//
		if(choice == 'C' || choice == 'c'){
			printf("How many Scaleless Blackfish do you want to sell?\n");
			scanf("%d", &quantity);
			if (Scaleless_Blackfish < quantity){
				printf("You do not have enough to sell that many.\n");
				printf("Returning to Holgrehenn Store Main Menu.\n");
			}
			else if (Scaleless_Blackfish >= quantity){
				payment = (quantity * SCALELESS_BLACKFISH);
				*BYmir = payment;
				*SScaleless_Blackfish = (quantity * -1);
			}
			
		}
		//sell tilapia//
		else if (choice == 'T' || choice == 't'){
			printf("How many Tilapia do you want to sell?\n");
			scanf("%d", &quantity);
			if (Tilapia < quantity){
				printf("You do not have enough to sell that many.\n");
				printf("Returning to Holgrehenn Store Main Menu.\n");
			}
			else if (Tilapia >= quantity){
				payment = (quantity * TILAPIA);
				*BYmir = payment;
				*STilapia = (quantity * -1);
				printf("bymir is %d", payment);
			}
		}
		//sell mariana snailfish//
		else if (choice == 'M' || choice == 'm'){
			printf("How many Mariana Snailfish do you want to sell?\n");
			scanf("%d", &quantity);
			if (Mariana_Snailfish < quantity){
				printf("You do not have enough to sell that many.\n");
				printf("Returning to Holgrehenn Store Main Menu.\n");
			}
			else if (Mariana_Snailfish >= quantity){
				payment = (quantity * MARIANA_SNAILFISH);
				*BYmir = payment;
				*SMariana_Snailfish = (quantity * -1);
			}
		}
		//sell sardines//
		else if (choice == 'S' || choice == 's'){
			printf("How many Sardines do you want to sell?\n");
			scanf("%d", &quantity);
			if (Sardines < quantity){
				printf("You do not have enough to sell that many.\n");
				printf("Returning to Holgrehenn Store Main Menu.\n");
			}
			else if (Sardines >= quantity){
				payment = (quantity * SARDINES);
				*BYmir = payment;
				*SSardines = (quantity * -1);
			}
		}
		//sell mudskippers//
		else if (choice == 'D' || choice == 'd'){
			printf("How many Mudskippers do you want to sell?\n");
			scanf("%d", &quantity);
			if (Mudskippers < quantity){
				printf("You do not have enough to sell that many.\n");
				printf("Returning to Holgrehenn Store Main Menu.\n");
			}
			else if (Mudskippers >= quantity){
				payment = (quantity * MUDSKIPPERS);
				*BYmir = payment;
				*SMudskippers = (quantity * -1);
			}
		}
		//sell bangus//
		else if (choice == 'B' || choice == 'b'){
			printf("How many Bangus do you want to sell?\n");
			scanf("%d", &quantity);
			if (Bangus < quantity){
				printf("You do not have enough to sell that many.\n");
				printf("Returning to Holgrehenn Store Main Menu.\n");
			}
			else if (Bangus >= quantity){
				printf("You sold %d Bangus.\n", quantity);
				payment = (quantity * BANGUS);
				*BYmir = payment;
				*SBangus = (quantity * -1);
			}
		}
		// sell hillstream loaches//
		else if (choice == 'H' || choice == 'h'){
			printf("How many Hillstream Loaches do you want to sell?\n");
			scanf("%d", &quantity);
			if (Hillstream_Loaches < quantity){
				printf("You do not have enough to sell that many.\n");
				printf("Returning to Holgrehenn Store Main Menu.\n");
			}
			else if (Hillstream_Loaches >= quantity){
				payment = (quantity * HILLSTREAM_LOACHES);
				*BYmir = payment;
				*SHillstream_Loaches = (quantity * -1);	
			}
		}
		//sell tuna//
		else if (choice == 'U' || choice == 'u'){
			printf("How many Tuna do you want to sell?\n");
			scanf("%d", &quantity);
			if (Tuna < quantity){
				printf("You do not have enough to sell that many.\n");
				printf("Returning to Holgrehenn Store Main Menu.\n");
			}
			else if (Tuna >= quantity){
				payment = (quantity * TUNA);
				*BYmir = payment;
				*STuna = (quantity * -1);
			}
		}
		else {
			printf("Invalid input.\n");
			printf("Returning to Holgrehenn Store Main Menu.\n");
		}
	}
	else if (input == 'E' || input == 'e'){
		printf("You chose to exit Holgrehenn Store.\n");
	}
}


//function for Checking Inventory//

void Check_Bag(int Ymir, int Gold, int Majestic_Water, int Wondrous_Vinegar, int Magical_Bait, int Fire_Chakra, int Water_Chakra, int Earth_Chakra, int Air_Chakra,
int Scaleless_Blackfish, int Mariana_Snailfish, int Mudskippers, int Hillstream_Loaches, int Bangus, int Tilapia, int Tuna, int Sardines){
	
	char input; 
	
	printf("\n\n---INVENTORY---\n");
	
	printf("\n\tCHAKRAS---\n");
	printf("\tFire Chakra = %d%40s%d\n", Fire_Chakra ,"Water Chakra = ", Water_Chakra);
	printf("\tEarth Chakra = %d%37s%d\n", Earth_Chakra ,"Air Chakra = ", Air_Chakra);
	

	
	printf("\n\n\tITEMS---\n");
	printf("\tMagical Bait = %d%43s%d\n", Magical_Bait ,"Wondrous Vinegar = ", Wondrous_Vinegar);
	printf("\tMajestic Water = %d%29s%d\n",Majestic_Water ,"Gold = ", Gold);
	printf("\tYmir = %d\n",Ymir);	
	
	
	printf("\n\n\tRARE FISHES---\n");
	printf("\tScaleless Blackfish = %d%37s%d\n", Scaleless_Blackfish ,"Mariana Snailfish = ", Mariana_Snailfish);
	printf("\tMudskippers = %d%46s%d\n", Mudskippers ,"Hillstream Loaches = ", Hillstream_Loaches);	
	
	
	printf("\n\n\tNORMAL FISHES---\n");
	printf("\tTilapia = %d%40s%d\n", Tilapia ,"Sardines = ", Sardines);	
	printf("\tBangus = %d%38s%d\n", Bangus ,"Tuna  = ", Tuna );
	
	
}
//fishing function//
int Fishing(int Magical_Bait, int *Used_Bait, int *Normal, int *Rare)
{	
	char input;
	int rand_number;
	Magical_Bait = Magical_Bait;
	
	printf("Do you want to catch fish?\n");
	printf("\t[Y]Yes%25s\n---> ", "[N]No");
	scanf(" %c", &input);
	if(input == 'Y' || input == 'y'){
		if (Magical_Bait > 0){
			printf("Do you want to use bait?\n");
			printf("\t[Y]Yes%25s\n---> ", "[N]No");
			scanf(" %c", &input);
			if (input == 'y' || input == 'Y'){
				srand(time(NULL));
				rand_number = rand() % 10;
				if(rand_number <= 2){
					printf("You caught a Rare Fish!\n");
					*Rare = 1;
					*Normal = 0;
					*Used_Bait = 1;
				}
				else{
					printf("You caught a Normal Fish!\n");
					*Normal = 1;
					*Rare = 0;
					*Used_Bait = 1;
				}	
			}
			else{
				printf("You decided to not use bait.\n");
				srand(time(NULL));
				rand_number = rand() % 10;
				if (rand_number == 1){
					printf("You caught a Rare Fish!\n");
					*Rare = 1;
					*Normal = 0;
					*Used_Bait = 0;
				}
				else{
					printf("You caught a Normal Fish!\n");
					*Normal = 1;
					*Rare =  0;
					*Used_Bait = 0;
				}
			}
			
		}
		else if(Magical_Bait <=0){
			printf("You do not have any bait to use.\n");
			srand(time(NULL));
			rand_number = rand() % 10;
			if (rand_number == 1){
					printf("You caught a Rare Fish!\n");
					*Rare = 1;
					*Normal = 0;
					*Used_Bait = 0;
				}
			else{
				printf("You caught a Normal Fish!\n");
				*Normal = 1;
				*Rare =  0;
				*Used_Bait = 0;
			}
		}
		
	}
	else{
		input = 0;
		return input;
	}

}

//function for Main Menu//

int Main_Menu(int Ymir, int Gold, int Majestic_Water, int Wondrous_Vinegar, int Magical_Bait, 
int Fire_Chakra, int Water_Chakra, int Earth_Chakra, int Air_Chakra, int Avatar_Potion,
int Fire_Chakra_, int Water_Chakra_, int Earth_Chakra_, int Air_Chakra_, int Avatar_Potion_,
int *CFire_Chakra, int *CWater_Chakra, int *CEarth_Chakra, int *CAir_Chakra, int *CAvatar_Potion,
int Scaleless_Blackfish, int Mariana_Snailfish, int Mudskippers, int Hillstream_Loaches, int Bangus, int Tilapia, int Tuna, int Sardines, 
int Used_Bait, int Normal, int Rare,
int *Bangus_, int *Tilapia_, int *Tuna_, int *Sardines_,
int *Scaleless_Blackfish_, int *Mariana_Snailfish_, int *Mudskippers_, int *Hillstream_Loaches_,
int *MBT, int *MBG, int *MBD, int *MBM, int Magical_Bait_, int *MB_reset, int *MB_Quantity,
int *Quantity_Update_Store, int *Fishing_Update, int *Crafting_Update, int *Crafted,
int *Ymir_, int *Gold_, int *Majestic_Water_, int *Wondrous_Vinegar_,
int BYmir, int BGold, int BMajestic_Water, int BWondrous_Vinegar, int BMagical_Bait,
int SScaleless_Blackfish, int SMariana_Snailfish, int SMudskippers, int SHillstream_Loaches, int SBangus, int STilapia, int STuna, int SSardines, 
int *SBangus_, int *STilapia_, int *STuna_, int *SSardines_,
int *SScaleless_Blackfish_, int *SMariana_Snailfish_, int *SMudskippers_, int *SHillstream_Loaches_ )

	{	
		char input;
		int choice;

		printf("\n---MAIN MENU---\n\n");
		printf("TELEPORT TO:\n");
		printf("\t[P]Geffen Town Proper%34s\n", "[H]Holgrehenn Store");
		printf("\t[T]Taal Lake%40s\n", "[G]Galathea Deep");
		printf("\t[D]Dagupan Mangrove Forests%28s\n", "[M]Mindanao Current");
		printf("OTHER OPTIONS:\n");
		printf("\t[C]Check Bag%36s\n---> ", "[E]Exit Game");
		scanf(" %c", &input);
		
		if (input == 'P' || input == 'p'){
		//call town of geffen proper//
		
		printf("Welcome to the Geffen Town Proper!\n");
		while (Town_Of_Geffen (Gold, Majestic_Water, Wondrous_Vinegar, Magical_Bait, 
		Fire_Chakra, Water_Chakra, Earth_Chakra, Air_Chakra, Avatar_Potion,
		&Fire_Chakra_, &Water_Chakra_, &Earth_Chakra_, &Air_Chakra_, &Avatar_Potion_,
		Scaleless_Blackfish, Mariana_Snailfish, Mudskippers, Hillstream_Loaches)!=0){
			
		 	Fire_Chakra = Fire_Chakra + Fire_Chakra_;
		 	Water_Chakra = Water_Chakra + Water_Chakra_;
		 	Earth_Chakra = Earth_Chakra + Earth_Chakra_;
		 	Air_Chakra = Air_Chakra + Air_Chakra_;
		 	Avatar_Potion = Avatar_Potion_;
		 	
		 	Fire_Chakra_ = 0;
			Water_Chakra_ = 0;
			Earth_Chakra_ = 0;
			Air_Chakra_ = 0;
			
			if(Fire_Chakra != Fire_Chakra_ || Water_Chakra != Water_Chakra_ || Earth_Chakra != Earth_Chakra_ || Air_Chakra != Air_Chakra_){
				*Crafted = 1;
			}
		}
		*CFire_Chakra = Fire_Chakra;
		*CEarth_Chakra = Earth_Chakra;
		*CWater_Chakra = Water_Chakra;
		*CAir_Chakra = Air_Chakra;
		*CAvatar_Potion = Avatar_Potion_;	
		
		*Crafting_Update = 1;
		

		}
	
		else if (input == 'H' || input == 'h'){
		//call Holgrehenn store function//
		
		printf("Welcome to the Holgrehenn Store!\n\n");
		while (Holgrehenn_Store(Ymir, Gold, Majestic_Water, Wondrous_Vinegar, Magical_Bait, Fire_Chakra,  Water_Chakra, Earth_Chakra, Air_Chakra,
		Scaleless_Blackfish, Mariana_Snailfish, Mudskippers, Hillstream_Loaches, Bangus, Tilapia, Tuna, Sardines, &Magical_Bait_,
		&BYmir, &BGold, &BMajestic_Water, &BWondrous_Vinegar, &BMagical_Bait,
		&SScaleless_Blackfish, &SMariana_Snailfish, &SMudskippers, &SHillstream_Loaches, &SBangus, &STilapia, &STuna, &SSardines )!=0){
			
			//update Ymir//
			Ymir = (Ymir + BYmir);
			BYmir = 0;
			
			//buying items//
			Gold = (Gold + BGold);
			Majestic_Water = (Majestic_Water + BMajestic_Water);
			Wondrous_Vinegar = (Wondrous_Vinegar + BWondrous_Vinegar);
			Magical_Bait = (Magical_Bait + BMagical_Bait);
			BGold = 0;
			BMajestic_Water = 0;
			BWondrous_Vinegar = 0;
			BMagical_Bait = 0;
			
			//selling items//
			Bangus = (Bangus + SBangus); 
			Tilapia = (Tilapia + STilapia);
			Tuna = (Tuna + STuna); 
			Sardines = (Sardines + SSardines);
			Scaleless_Blackfish = (Scaleless_Blackfish + SScaleless_Blackfish);
			Mariana_Snailfish = (Mariana_Snailfish + SMariana_Snailfish);
			Mudskippers = (Mudskippers + SMudskippers);
			Hillstream_Loaches = (Hillstream_Loaches + SHillstream_Loaches);
			
			SBangus = 0;
			SScaleless_Blackfish = 0;
			SMariana_Snailfish = 0;
			SMudskippers = 0; 
			SHillstream_Loaches = 0;
			SBangus = 0;
			STilapia = 0;
			STuna = 0; 
			SSardines = 0;
		}
			
			*Ymir_ = Ymir;
			*Gold_ = Gold;
			*Majestic_Water_ = Majestic_Water;
			*Wondrous_Vinegar_ = Wondrous_Vinegar;
			*MB_Quantity = Magical_Bait;
			
			*SBangus_ = Bangus;
			*STilapia_ = Tilapia;
			*STuna_ = Tuna;
			*SSardines_ = Sardines;
			*SScaleless_Blackfish_ = Scaleless_Blackfish;
			*SMariana_Snailfish_ = Mariana_Snailfish;
			*SMudskippers_ = Mudskippers;
			*SHillstream_Loaches_ = Hillstream_Loaches;

			
			*Quantity_Update_Store = 1;
		}
	
		else if (input == 'T' || input == 't'){
		//call Taal Lake function//	
		printf("You teleported to Taal Lake.\n");
		while(Fishing(Magical_Bait, &Used_Bait, &Normal, &Rare)!=0){
			
			if (Magical_Bait - Used_Bait == 0){
				*MB_reset = 1;
			}
			
			Scaleless_Blackfish = (Scaleless_Blackfish + Rare);
			Tilapia = (Tilapia + Normal);
			Magical_Bait = (Magical_Bait - Used_Bait);
		}
		
		printf("You exited fishing at Taal Lake\n");
		printf("bait: %d\n", Magical_Bait);
		printf("rare fishes: %d\n", Scaleless_Blackfish);
		printf("normal fishes: %d\n", Tilapia);
		
		*Tilapia_ = Tilapia;
		*Scaleless_Blackfish_ = Scaleless_Blackfish;
		*MBT = Magical_Bait;
		*Fishing_Update = 1;
		}
		
		else if (input == 'D' || input == 'd'){
		//call Dagupan Mangroves function//	
		printf("You teleported to Dagupan Mangrove Forests\n");
		while(Fishing(Magical_Bait, &Used_Bait, &Normal, &Rare)!=0){
			if (Magical_Bait - Used_Bait ==0){
				*MB_reset = 1;
			}
			Mudskippers = (Mudskippers + Rare);
			Bangus = (Bangus + Normal);
			Magical_Bait = (Magical_Bait - Used_Bait);
		}
		*Bangus_ = Bangus;
		*Mudskippers_ = Mudskippers;
		*MBD = Magical_Bait;
		*Fishing_Update = 1;

		
		printf("You exited fishing at Dagupan Mangrove Forests\n");
		printf("bait: %d\n", Magical_Bait);
		printf("rare fishes: %d\n", Mudskippers);
		printf("normal fishes: %d\n", Bangus);
		}
	
		else if (input == 'M' || input == 'm'){
		//call Mindanao Current function//	
		printf("you chose Mindanao Current\n");
		while(Fishing(Magical_Bait, &Used_Bait, &Normal, &Rare)!=0){
			if (Magical_Bait - Used_Bait ==0){
				*MB_reset = 1;
			}
			Hillstream_Loaches = (Hillstream_Loaches + Rare);
			Tuna = (Tuna + Normal);
			Magical_Bait = (Magical_Bait - Used_Bait);
		}
		
		*Tuna_ = Tuna;
		*Hillstream_Loaches_ = Hillstream_Loaches;
		*MBM = Magical_Bait;
		*Fishing_Update = 1;
		
		printf("You exited fishing at Mindanao Current\n");
		printf("bait: %d\n", Magical_Bait);
		printf("rare fishes: %d\n", Hillstream_Loaches);
		printf("normal fishes: %d\n", Tuna);
		}
	
		else if (input == 'G' || input == 'g'){
		//call Galathea Deep function//	
		printf("you chose Galathea Deep\n");
		while(Fishing(Magical_Bait, &Used_Bait, &Normal, &Rare)!=0){
			if (Magical_Bait - Used_Bait ==0){
				*MB_reset = 1;
			}
			Mariana_Snailfish = (Mariana_Snailfish + Rare);
			Sardines = (Sardines + Normal);
			Magical_Bait = (Magical_Bait - Used_Bait);
		}
		
		*Sardines_ = Sardines;
		*Mariana_Snailfish_ = Mariana_Snailfish;
		*MBG = Magical_Bait;
		*Fishing_Update = 1;
		
		
		printf("You exited fishing at Galathea Deep\n");
		printf("bait: %d\n", Magical_Bait);
		printf("rare fishes: %d\n", Mariana_Snailfish);
		printf("normal fishes: %d\n", Sardines);
		}
	
		else if (input == 'C' || input == 'c'){
		//call check bag function//	
		printf("you chose check bag");
		
		Check_Bag(Ymir, Gold, Majestic_Water, Wondrous_Vinegar, Magical_Bait, Fire_Chakra, Water_Chakra, Earth_Chakra, Air_Chakra,
		Scaleless_Blackfish, Mariana_Snailfish, Mudskippers, Hillstream_Loaches, Bangus, Tilapia, Tuna, Sardines);

		}
	
	 	else if (input == 'E' || input == 'e'){
		//exit game//
		choice = 0;
		return choice;
		}
		
		else{
			printf("Invalid input.");
		}
		
		
	}

//MAIN FUNCTION//

int main()
{
	
	char input;
	int Fire_Chakra, Water_Chakra, Earth_Chakra, Air_Chakra, Avatar_Potion;
	int Fire_Chakra_, Water_Chakra_, Earth_Chakra_, Air_Chakra_, Avatar_Potion_;
	int CFire_Chakra, CWater_Chakra, CEarth_Chakra, CAir_Chakra, CAvatar_Potion;
	int Bangus, Tilapia, Tuna, Sardines;
	int Scaleless_Blackfish, Mariana_Snailfish, Mudskippers, Hillstream_Loaches;
	int Ymir, Gold, Majestic_Water, Wondrous_Vinegar, Magical_Bait;
	int Used_Bait, Normal, Rare, Magical_Bait_;
	int Bangus_, Tilapia_, Tuna_, Sardines_;
	int Scaleless_Blackfish_, Mariana_Snailfish_, Mudskippers_, Hillstream_Loaches_;
	int MBT, MBG, MBD, MBM, MB_reset;
	int MB_Quantity;
	int Quantity_Update_Store, Fishing_Update, Store_Fish_Update, Crafting_Update, Crafted;
	int Ymir_, Gold_, Majestic_Water_, Wondrous_Vinegar_;
	int BYmir, BGold, BMajestic_Water, BWondrous_Vinegar, BMagical_Bait;
	int SBangus, STilapia, STuna, SSardines, SScaleless_Blackfish, SMariana_Snailfish, SMudskippers, SHillstream_Loaches;
	int SBangus_, STilapia_, STuna_, SSardines_, SScaleless_Blackfish_, SMariana_Snailfish_, SMudskippers_, SHillstream_Loaches_;
	
	//initialization//
	Ymir = 0;
	Ymir_ = 0;
	BYmir = 0;
	
	Gold = 0;
	Gold_ = 0;
	BGold = 0;
	
	Wondrous_Vinegar = 0;
	Wondrous_Vinegar_ = 0;
	BWondrous_Vinegar = 0;	
	
	Majestic_Water = 0;
	Majestic_Water_ = 0;
	BMajestic_Water = 0;
	
	Magical_Bait = 0;
	Magical_Bait_ = 0;
	BMagical_Bait = 0;
	
	Fire_Chakra_ = 0;
	Fire_Chakra = 0;
	CFire_Chakra = 0;
	
	Water_Chakra = 0;
	Water_Chakra_ = 0;
	CWater_Chakra = 0;
	
	Earth_Chakra = 0;
	Earth_Chakra_ = 0;
	CEarth_Chakra = 0;
	
	Air_Chakra = 0;	
	Air_Chakra_ = 0;
	CAir_Chakra = 0;
	
	
	Avatar_Potion =0;
	Avatar_Potion_ = 0;
	CAvatar_Potion = 0;
	
	Bangus = 0;
	Bangus_ = 0;
	SBangus = 0;
	SBangus_ = 0;
	
	Tilapia = 0;
	Tilapia_ = 0;
	STilapia = 0;
	STilapia_ = 0;
	
	Tuna = 0;
	Tuna_ = 0;
	STuna = 0; 
	STuna_ = 0;
	
	Sardines = 0;
	Sardines_ = 0;
	SSardines = 0; 
	SSardines_ = 0;
	
	Scaleless_Blackfish = 0; 
	Scaleless_Blackfish_ = 0; 
	SScaleless_Blackfish = 0;
	SScaleless_Blackfish_ = 0;
	
	Mudskippers =0; 
	Mudskippers_ =0; 
	SMudskippers = 0; 
	SMudskippers_ = 0; 
	
	Hillstream_Loaches= 0;
	Hillstream_Loaches_ = 0;
	SHillstream_Loaches = 0;
	SHillstream_Loaches_ = 0;
	
	Mariana_Snailfish = 0;
	Mariana_Snailfish_ = 0; 
	SMariana_Snailfish = 0;
	SMariana_Snailfish_ = 0;
	
	MB_reset =0;
	Quantity_Update_Store = 0;
	Fishing_Update = 0;
	Store_Fish_Update = 0;
	Crafting_Update = 0;
	Crafted = 0;
	
	printf("\t\nSECRET POTIONS OF THE GEFFEN WITCHES\n\n");
	printf("[Press Enter to Continue]\n");
	while( getchar() != '\n' );
	printf("\tIn the town of Geffen, witches from all over the country have gathered to discover the secret behind the \nYMIR'S AVATAR POTION,\nthe only potion that can help cultivate the Avatar's powers.\n\n \tThe Ymir's Avatar Potion can only be crafted in Geffen, and it requires the following materials: \nFire Chakra Potion, Water Chakra Potion, Earth Chakra Potion, and Air Chakra Potion.\n\n");
	printf("[Press Enter to Continue]\n");
	while( getchar() != '\n' );
	printf("\tThe secret to crafting the four element Chakras are the extremely rare fishes that can be gathered from the four fishing sites:\n");
	printf("Taal Lake, Galathea Deep, Dagupan Mangrove Forests, and Mindanao Current.\n\n");
	printf("\tThe other materials to craft the Chakras can be bought at the Holgrehenn Store. The currency used in Geffen is Ymir gold coins.\n\n");
	printf("[Press Enter to Continue]\n");
	while( getchar() != '\n' );
	printf("These are the items you need to craft the four Chakras:\n");
	printf("\nTo craft the Fire Chakra, you need:\n");
	printf("\t[1]Scaleless Blackfish - found in Taal Lake%54s\n", "[1]Majestic Water - found at the Holgrehenn Store");
	printf("\t[1]Gold - found at the Holgrehenn Store%60s\n", "[1]Wondrous Vinegar - found at the Holgrehenn Store");
	printf("\nTo craft the Air Chakra, you need:\n");
	printf("\t[1]Hillstream Loach - found in Mindanao Current%54s\n", "[1]Majestic Water - found at the Holgrehenn Store");
	printf("\t[1]Gold - found at the Holgrehenn Store%64s\n", "[1]Wondrous Vinegar - found at the Holgrehenn Store");
	printf("\nTo craft the Water Chakra, you need:\n");
	printf("\t[1]Mariana Snailfish - found in Galathea Deep%52s\n", "[1]Majestic Water - found at the Holgrehenn Store");
	printf("\t[1]Gold - found at the Holgrehenn Store%60s\n", "[1]Wondrous Vinegar - found at the Holgrehenn Store");
	printf("\nTo craft the Earth Chakra, you need:\n");
	printf("\t[1]Mudskipper - found in Dagupan Mangrove Forests%52s\n", "[1]Majestic Water - found at the Holgrehenn Store");
	printf("\t[1]Gold - found at the Holgrehenn Store%64s\n", "[1]Wondrous Vinegar - found at the Holgrehenn Store");
	printf("\n[Press Enter to Continue]\n");
	while( getchar() != '\n' );
	printf("\tAs you qualify and enter the town of Geffen, you will be given a magical fishing rod. Geffen is a prosperous town, \nso you don't need to worry about your living expenses. ");
	printf("Housing and food are provided for free to all citizens of Geffen.\n\n\tIf you want to earn Ymir coins to buy the materials that you need for the potions, you can sell the fishes that you can catch from the fishing sites. \nHolgrehenn buys these fishes too.\n\n");
	printf("[Press Enter to Continue]\n");
	while( getchar() != '\n' );
	printf("\tThe task of crafting Ymir's Avatar Potion is now up to you.\n\n");
	printf("\tSafe travels, and GOOD LUCK!\n\n");
	printf("[Press Enter to Continue]\n");
	while( getchar() != '\n' );
	
	//insert description of the game//
	
	while(Main_Menu(Ymir, Gold, Majestic_Water, Wondrous_Vinegar, Magical_Bait, 
	Fire_Chakra, Water_Chakra, Earth_Chakra, Air_Chakra, Avatar_Potion,
	Fire_Chakra_, Water_Chakra_, Earth_Chakra_, Air_Chakra_, Avatar_Potion_,
	&CFire_Chakra, &CWater_Chakra, &CEarth_Chakra, &CAir_Chakra, &CAvatar_Potion,
	Scaleless_Blackfish, Mariana_Snailfish, Mudskippers, Hillstream_Loaches, Bangus, Tilapia, Tuna, Sardines, Used_Bait, Normal, Rare,
	&Bangus_, &Tilapia_, &Tuna_, &Sardines_,
	&Scaleless_Blackfish_, &Mariana_Snailfish_, &Mudskippers_, &Hillstream_Loaches_,
	&MBT, &MBG, &MBD, &MBM, Magical_Bait_, &MB_reset,	
	&MB_Quantity,
	&Quantity_Update_Store, &Fishing_Update, &Crafting_Update, &Crafted,
	&Ymir_, &Gold_, &Majestic_Water_, &Wondrous_Vinegar_,
	BYmir, BGold, BMajestic_Water, BWondrous_Vinegar, BMagical_Bait,
	SBangus, STilapia, STuna, SSardines, SScaleless_Blackfish, SMariana_Snailfish, SMudskippers, SHillstream_Loaches,
	&SBangus_, &STilapia_, &STuna_, &SSardines_, &SScaleless_Blackfish_, &SMariana_Snailfish_, &SMudskippers_, &SHillstream_Loaches_) != 0){
	
		Avatar_Potion = CAvatar_Potion;
		if (Avatar_Potion == 1){
			printf("\nCONGRATULATIONS!\n\n");
			printf("YOU CRAFTED YMIR'S AVATAR POTION!\n");
			printf("You have proved yourself worthy, and now possess the power to become the master of the four elements.\n");
			printf("Now, the people of the Town of Geffen celebrate your victorious quest to become the Avatar.\n\n");
			
			printf("YOU FINISHED THE GAME\n\n");
			
			input = 0;
			return input;
		}
		// for store update//
		
		if (Quantity_Update_Store == 1){
			Ymir = Ymir_;
			Gold = Gold_;
			Majestic_Water = Majestic_Water_;
			Wondrous_Vinegar = Wondrous_Vinegar_;
			Magical_Bait = MB_Quantity;
			
			Bangus = SBangus_;
			Tilapia = STilapia_;
			Tuna = STuna_;
			Sardines = SSardines_;
			Scaleless_Blackfish = SScaleless_Blackfish_;
			Mudskippers = SMudskippers_;
			Mariana_Snailfish = SMariana_Snailfish_;
			Hillstream_Loaches = SHillstream_Loaches_;
		}
		
		else if (Fishing_Update == 1){
			// for fish update//
			Bangus = Bangus_;				
			Tilapia = Tilapia_;
			Tuna = Tuna_;
			Sardines = Sardines_;
			Scaleless_Blackfish = Scaleless_Blackfish_;
			Mariana_Snailfish = Mariana_Snailfish_;
			Mudskippers = Mudskippers_;
			Hillstream_Loaches = Hillstream_Loaches_;
		
			// for magical bait update//
		
			if (MB_reset == 1){
				Magical_Bait = 0;
			}
			
			else if (MB_Quantity == 0 && MBM == 0 && MBT == 0 && MBG == 0 && MBD == 0){
				Magical_Bait = Magical_Bait;
			}
			
			else{
				if (MBT !=0 && MBG ==  0 && MBD == 0 && MBM == 0) {
				Magical_Bait = MBT;
				}
				else if (MBG !=0 && MBT == 0 && MBD == 0 && MBM == 0) {
				Magical_Bait = MBG;
				}
				else if (MBD !=0 && MBT == 0 && MBG == 0 && MBM == 0) {
				Magical_Bait = MBD;
				}
				else if (MBM !=0 && MBT == 0 && MBG == 0 && MBD == 0) {
				Magical_Bait = MBM;
				}
			}
			MB_reset = 0;
			MBT = 0;
			MBG = 0;
			MBD = 0;
			MBM = 0;
		}
		else if (Crafting_Update = 1){
			if(Crafted == 1){
				Gold = Gold - 1;
				Wondrous_Vinegar = Wondrous_Vinegar - 1;
				Majestic_Water = Majestic_Water - 1;
				if (Fire_Chakra != CFire_Chakra && CFire_Chakra != 0){
					Scaleless_Blackfish = Scaleless_Blackfish - 1;
				}
				else if (Water_Chakra != CWater_Chakra && CWater_Chakra != 0){
					Mariana_Snailfish = Mariana_Snailfish - 1;
				}
				else if (Earth_Chakra != CEarth_Chakra && CEarth_Chakra != 0){
					Mudskippers = Mudskippers - 1;
				}
				else if (Air_Chakra != CAir_Chakra && CAir_Chakra !=0){
					Hillstream_Loaches = Hillstream_Loaches - 1;
				}
			}
			Fire_Chakra = CFire_Chakra;
			Water_Chakra = CWater_Chakra;
			Earth_Chakra = CEarth_Chakra;
			Air_Chakra = CAir_Chakra;

			
			
		}
		//reset quantity updates//

		Quantity_Update_Store = 0;
		Fishing_Update = 0;
		Crafting_Update = 0;
		Crafted = 0;
		
		SBangus_ = 0;
		STilapia_ = 0;
		STuna_ = 0;
		SSardines_ = 0;
		SScaleless_Blackfish_ = 0;
		SMariana_Snailfish_= 0; 
		SMudskippers_= 0; 
		SHillstream_Loaches_= 0;
		
		SBangus = 0;
		SScaleless_Blackfish = 0;
		SMariana_Snailfish = 0;
		SMudskippers = 0; 
		SHillstream_Loaches = 0;
		SBangus = 0;
		STilapia = 0;
		STuna = 0; 
		SSardines = 0;		
		
		Bangus_ = Bangus;				
		Tilapia_ = Tilapia;
		Tuna_ = Tuna;
		Sardines_ = Sardines;
		Scaleless_Blackfish_ = Scaleless_Blackfish;
		Mariana_Snailfish_ = Mariana_Snailfish;
		Mudskippers_ = Mudskippers;
		Hillstream_Loaches_ = Hillstream_Loaches;
		
		CFire_Chakra = Fire_Chakra;
		CWater_Chakra = Water_Chakra;
		CEarth_Chakra = Earth_Chakra;
		CAir_Chakra = Air_Chakra;
		
		Fire_Chakra_ = 0;
		Water_Chakra_ = 0;
		Earth_Chakra_ = 0;
		Air_Chakra_ = 0;
	}
	
	printf("You exited the game.");
	
	return 0;
}














