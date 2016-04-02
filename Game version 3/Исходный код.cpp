#include"math.h";
#include"iostream";
#include"string";
#include"ctime";
#include <map>;
using namespace std;
int main()
{
	srand(time(0));

	map<int, string> items = map<int, string>();
	
	map<int,string> locations = map<int,string>();

	int NowItemAbility;
	string NowItemName;

	string location1 = "field";
	string location2 = "edge of the forest";
	string location3 = "forest";
	string location4 = "underground passage";
	string location5 = "mountains";
	string location6 = "tip of the mountain";
	string location7 = "cave";
	string location8 = "secret entrance to the castle of darkness";
	string location9 = "castle of darkness";

	int HeroItemChoose;

	int FirstSlotAbility = 0;
	int SecondSlotAbility = 0;
	int ThirdSlotAbility = 0;
	int FourthSlotAbility = 0;
	int FifthSlotAbility = 0;
	int SixthSlotAbility = 0;
	int SeventhSlotAbility = 0;
	int EighthSlotAbility = 0;
	int NinthSlotAbility = 0;
	int TenthSlotAbility = 0;

	string ItemNothing = "Nothing";
	int ItemNothingAbility = 0;
	string ItemDirtyWater = "Dirty water";
	int ItemDirtyWaterAbility = 1;
	string ItemCarrot = "Carrot";
	int ItemCarrotAbility = 2;
	string ItemPotato = "Potato";
	int ItemPotatoAbility = 3;
	string ItemWater = "Water";
	int ItemWaterAbility = 4;
	string ItemApple = "Apple";
	int ItemAppleAbility = 5;
	string ItemCrystalClearWater = "Crystal-clear water";
	int ItemCrystalClearWaterAbility = 6;
	string ItemMelon = "Melon";
	int ItemMelonAbility = 7;
	string ItemPumpkin = "Pumpkin";
	int ItemPumpkinAbility = 8;
	string ItemWatermelon = "Watermelon";
	int ItemWatermelonAbility = 9;
	string ItemBandage = "Bandage";
	int ItemBandageAbility = 10;
	string ItemSlave = "Salve";
	int ItemSlaveAbility = 11;
	string ItemPills = "Pills";
	int ItemPillsAbility = 12;
	string ItemVaccine = "Vaccine";
	int ItemVaccineAbility = 13;
	string ItemHealingPotion = "Healing potion";
	int ItemHealingPotionAbility = 14;
	int ItemChoose;

	string FirstSlotName = ItemNothing;
	string SecondSlotName = ItemNothing;
	string ThirdSlotName = ItemNothing;
	string FourthSlotName = ItemNothing;
	string FifthSlotName = ItemNothing;
	string SixthSlotName = ItemNothing;
	string SeventhSlotName = ItemNothing;
	string EighthSlotName = ItemNothing;
	string NinthSlotName = ItemNothing;
	string TenthSlotName = ItemNothing;

	items.insert(pair<int, string>(1, ItemDirtyWater));
	items.insert(pair<int, string>(2, ItemCarrot));
	items.insert(pair<int, string>(3, ItemPotato));
	items.insert(pair<int, string>(4, ItemWater));
	items.insert(pair<int, string>(5, ItemApple));
	items.insert(pair<int, string>(6, ItemCrystalClearWater));
	items.insert(pair<int, string>(7, ItemMelon));
	items.insert(pair<int, string>(8, ItemPumpkin));
	items.insert(pair<int, string>(9, ItemWatermelon));
	items.insert(pair<int, string>(10, ItemBandage));
	items.insert(pair<int, string>(11, ItemSlave));
	items.insert(pair<int, string>(12, ItemPills));
	items.insert(pair<int, string>(13, ItemVaccine));
	items.insert(pair<int, string>(14, ItemHealingPotion));


	locations.insert(pair<int, string>(1, location1));
	locations.insert(pair<int, string>(2, location2));
	locations.insert(pair<int, string>(3, location3));
	locations.insert(pair<int, string>(4, location4));
	locations.insert(pair<int, string>(5, location5));
	locations.insert(pair<int, string>(6, location6));
	locations.insert(pair<int, string>(7, location7));
	locations.insert(pair<int, string>(8, location8));
	locations.insert(pair<int, string>(9, location9));

	string enemy11 = "mouse";
	string enemy12 = "spider";
	string enemy13 = "fox";

	string enemy21 = "rat";
	string enemy22 = "snake";
	string enemy23 = "mad Dog";

	string enemy31 = "swarm of grasshoopers";
	string enemy32 = "venomus spider";
	string enemy33 = "wolf";

	string enemy41 = "swarm of flyes";
	string enemy42 = "bandit";
	string enemy43 = "pack of dogs";

	string enemy51 = "swarm of mosquitoes";
	string enemy52 = "bear";
	string enemy53 = "troll";

	string enemy61 = "swarm of wasps";
	string enemy62 = "orc";
	string enemy63 = "snow troll";

	string enemy71 = "slug";
	string enemy72 = "dwarf";
	string enemy73 = "golem";

	string enemy81 = "ghost";
	string enemy82 = "knight";
	string enemy83 = "beast";

	string enemy91 = "Qween of shadow";
	string enemy92 = "Archmage";
	string enemy93 = "Dragon";
	string ChangingEnemy;

	int Damage;
	int LocationChoose;
	int BattleWins = 0;
	int BattleLooses = 0;
	int StartLocation;
	int FireBall = 0;
	int ShieldAttack = 0;
	int DamageUp = 1;
	int Looses = 0;
	int Wins = 0;
	int LevelPerkChoose;
	int LevelChoose;
	int Action;
	int Heal;
	int NeedXP;
	int HeroDefense = 0;
	int HeroLevel = 0;
	int HeroXP = 0;
	int HeroVitality = 0;
	int HeroStrenght = 0;
	int HeroIntelligence = 0;
	int HeroDefenseAbility = 0;
	int HeroDamage;
	int HeroHP;
	int EnemyHP;
	int EnemyXP;
	int EnemyDamage;
	int a = 10;
	for (int Enemies = 1; Enemies != 10;)
	{
		
		BattleLooses = 0;
		BattleWins = 0;
		EnemyHP = 0 + rand() % 10 + 5 * Enemies;
		HeroHP = 30 + HeroVitality;
		EnemyXP = EnemyHP;
		switch (Enemies)
		{
		case (1) :
		{
					 StartLocation = 1;
					 cout << "Heroe is in the " << location1 << endl;
					 if (EnemyHP < 9)
					 {
						 ChangingEnemy = enemy11;
					 }
					 else
					 {
						 if (EnemyHP < 13)
						 {
							 ChangingEnemy = enemy12;
						 }
						 else
						 {
							 ChangingEnemy = enemy13;
						 }
					 }
					 break;
		}
		case (2) :
		{
					 StartLocation = 2;
					 cout << "Heroe is in the " << location2 << endl;
					 if (EnemyHP < 14)
					 {
						 ChangingEnemy = enemy21;
					 }
					 else
					 {
						 if (EnemyHP < 18)
						 {
							 ChangingEnemy = enemy22;
						 }
						 else
						 {
							 ChangingEnemy = enemy23;
						 }
					 }
					 break;
		}
		case (3) :
		{
					 StartLocation = 3;
					 cout << "Heroe is in the " << location3 << endl;
					 if (EnemyHP < 19)
					 {
						 ChangingEnemy = enemy31;
					 }
					 else
					 {
						 if (EnemyHP < 23)
						 {
							 ChangingEnemy = enemy32;
						 }
						 else
						 {
							 ChangingEnemy = enemy33;
						 }
					 }
					 break;
		}
		case (4) :
		{
					 StartLocation = 4;
					 cout << "Heroe is in the " << location4 << endl;
					 if (EnemyHP < 24)
					 {
						 ChangingEnemy = enemy41;
					 }
					 else
					 {
						 if (EnemyHP < 28)
						 {
							 ChangingEnemy = enemy42;
						 }
						 else
						 {
							 ChangingEnemy = enemy43;
						 }
					 }
					 break;
		}
		case (5) :
		{
					 StartLocation = 5;
					 cout << "Heroe is in the " << location5 << endl;
					 if (EnemyHP < 29)
					 {
						 ChangingEnemy = enemy51;
					 }
					 else
					 {
						 if (EnemyHP < 33)
						 {
							 ChangingEnemy = enemy52;
						 }
						 else
						 {
							 ChangingEnemy = enemy53;
						 }
					 }
					 break;
		}
		case (6) :
		{
					 StartLocation = 6;
					 cout << "Heroe is in the " << location6 << endl;
					 if (EnemyHP < 34)
					 {
						 ChangingEnemy = enemy61;
					 }
					 else
					 {
						 if (EnemyHP < 38)
						 {
							 ChangingEnemy = enemy62;
						 }
						 else
						 {
							 ChangingEnemy = enemy63;
						 }
					 }
					 break;
		}
		case (7) :
		{
					 StartLocation = 7;
					 cout << "Heroe is in the " << location7 << endl;
					 if (EnemyHP < 39)
					 {
						 ChangingEnemy = enemy71;
					 }
					 else
					 {
						 if (EnemyHP < 43)
						 {
							 ChangingEnemy = enemy72;
						 }
						 else
						 {
							 ChangingEnemy = enemy73;
						 }
					 }
					 break;
		}
		case (8) :
		{
					 StartLocation = 8;
					 cout << "Heroe is in the " << location8 << endl;
					 if (EnemyHP < 44)
					 {
						 ChangingEnemy = enemy81;
					 }
					 else
					 {
						 if (EnemyHP < 48)
						 {
							 ChangingEnemy = enemy82;
						 }
						 else
						 {
							 ChangingEnemy = enemy83;
						 }
					 }
					 break;
		}
		case (9) :
		{
					 StartLocation = 9;
					 cout << "Heroe is in the " << location9 << endl;
					 if (EnemyHP < 49)
					 {
						 ChangingEnemy = enemy91;
					 }
					 else
					 {
						 if (EnemyHP < 53)
						 {
							 ChangingEnemy = enemy92;
						 }
						 else
						 {
							 ChangingEnemy = enemy93;
						 }
					 }
					 break;
		}
		}
		cout << "There is " << ChangingEnemy << " on heroes path!" << endl;
		system("pause");
		for (int Count = 1;; Count++)
		{
			int BattleRound = 0;
			cout << "Round " << Count << endl;
			cout << ChangingEnemy << " has " << EnemyHP << " HP" << endl;
			HeroDamage = 0;
			EnemyDamage = 0 + rand() % a + Enemies;
			Damage = EnemyDamage - HeroDefense;
			if (Damage <= 0)
			{
				Damage = 0;
			}
			else
			{}
			HeroHP = HeroHP - Damage;
			cout << endl;
			system("pause");
			cout << endl;
			cout << ChangingEnemy << " hit Hero, and deal " << Damage << " damage" << endl;
			cout << "Hero HP = " << HeroHP << endl;
			cout << endl;
			HeroDefense = 0;
			if (HeroHP > 0)
			{
				for (; BattleRound != 1;)
				{
					cout << "What action you want to do?" << endl << "1.Attack" << endl << "2.Defense" << endl << "3.Heal" << endl << "4.Use an item" << endl;
					cin >> Action;
					switch (Action)
					{
					case (1) :
					{
								 HeroDamage = 1 + rand() % a;
								 EnemyHP = EnemyHP - (HeroDamage + HeroStrenght)*DamageUp;
								 cout << "Hero hit " << ChangingEnemy << " , and deal " << HeroDamage + HeroStrenght << " damage" << endl;
								 cout << ChangingEnemy << " HP = " << EnemyHP << endl;
								 ++BattleRound;
								 break;
					}
					case (2) :
					{
								 cout << "Hero is deffending" << endl;
								 HeroDefense = 3 + HeroDefenseAbility;
								 ++BattleRound;
								 if (ShieldAttack > 0)
								 {
									 EnemyHP = EnemyHP - HeroDefenseAbility*ShieldAttack;
									 cout << "Hero's shield attack deal " << HeroDefenseAbility*ShieldAttack << " damage" << endl;
									 cout << ChangingEnemy << "HP = " << EnemyHP << endl;
								 }
								 else
								 {
								 }
								 break;
					}
					case (3) :
					{
								 Heal = 1 + rand() % 5;
								 HeroHP = HeroHP + Heal + HeroIntelligence;//can heal more than a total hp
								 cout << "Hero heal " << Heal +HeroIntelligence << " HP." << endl << "Now he has " << HeroHP << "HP" << endl;
								 ++BattleRound;
								 if (FireBall > 0)
								 {
									 EnemyHP = EnemyHP - HeroIntelligence*FireBall;
									 cout << "Hero's fireball deal " << HeroIntelligence*FireBall << " damage" << endl;
									 cout << ChangingEnemy << "HP = " << EnemyHP << endl;
								 }
								 else
								 {
								 }

								 break;
					}
					case (4) :
					{
								 cout << "Wich of this items does Hero want to use?" << endl;
								 cout << "0.Don't use an item, and get to the previous choice" << endl;
								 cout << "1.  " << FirstSlotName << " (+" << FirstSlotAbility << ")" << endl;
								 cout << "2.  " << SecondSlotName << " (+" << SecondSlotAbility << ")" << endl;
								 cout << "3.  " << ThirdSlotName << " (+" << ThirdSlotAbility << ")" << endl;
								 cout << "4.  " << FourthSlotName << " (+" << FourthSlotAbility << ")" << endl;
								 cout << "5.  " << FifthSlotName << " (+" << FifthSlotAbility << ")" << endl;
								 cout << "6.  " << SixthSlotName << " (+" << SixthSlotAbility << ")" << endl;
								 cout << "7.  " << SeventhSlotName << " (+" << SeventhSlotAbility << ")" << endl;
								 cout << "8.  " << EighthSlotName << " (+" << EighthSlotAbility << ")" << endl;
								 cout << "9.  " << NinthSlotName << " (+" << NinthSlotAbility << ")" << endl;
								 cout << "10. " << TenthSlotName << " (+" << TenthSlotAbility << ")" << endl;
								 cin >> ItemChoose;
								 switch (ItemChoose)
								 {
								 case (1):
								 {
											 cout << "Hero used " << FirstSlotName << " and gain " << FirstSlotAbility << " additional health" << endl;
											 HeroHP = HeroHP + FirstSlotAbility;
											 FirstSlotName = ItemNothing;
											 FirstSlotAbility = ItemNothingAbility;
											 break;
								 }

								 case (2) :
								 {
											  cout << "Hero used " << SecondSlotName << " and gain " <<SecondSlotAbility<< " additional health" << endl;
											  HeroHP = HeroHP + SecondSlotAbility;
											  SecondSlotName = ItemNothing;
											  SecondSlotAbility = ItemNothingAbility;
											  break;
								 }

								 case (3) :
								 {
											  cout << "Hero used " << ThirdSlotName << " and gain " << ThirdSlotAbility<< " additional health" << endl;
											  HeroHP = HeroHP + ThirdSlotAbility;
											  ThirdSlotName = ItemNothing;
											  ThirdSlotAbility = ItemNothingAbility;
											  break;
								 }

								 case (4) :
								 {
											  cout << "Hero used " << FourthSlotName << " and gain " <<FourthSlotAbility<< " additional health" << endl;
											  HeroHP = HeroHP + FourthSlotAbility;
											  FourthSlotName = ItemNothing;
											  FourthSlotAbility = ItemNothingAbility;
											  break;
								 }

								 case (5) :
								 {
											  cout << "Hero used " << FifthSlotName << " and gain " << FifthSlotAbility << " additional health" << endl;
											  HeroHP = HeroHP + FifthSlotAbility;
											  FifthSlotName = ItemNothing;
											  FifthSlotAbility = ItemNothingAbility;
											  break;
								 }

								 case (6) :
								 {
											  cout << "Hero used " << SixthSlotName << " and gain " << SixthSlotAbility << " additional health" << endl;
											  HeroHP = HeroHP + SixthSlotAbility;
											  SixthSlotName = ItemNothing;
											  SixthSlotAbility = ItemNothingAbility;
											  break;
								 }

								 case (7) :
								 {
											  cout << "Hero used " << SeventhSlotName << " and gain " << SeventhSlotAbility<< " additional health" << endl;
											  HeroHP = HeroHP + SeventhSlotAbility;
											  SeventhSlotName = ItemNothing;
											  SecondSlotAbility = ItemNothingAbility;
											  break;

								 }

								 case (8 ):
								 {
											  cout << "Hero used " << EighthSlotName << " and gain " << EighthSlotAbility<< " additional health" << endl;
											  HeroHP = HeroHP + EighthSlotAbility;
											  EighthSlotName = ItemNothing;
											  EighthSlotAbility = ItemNothingAbility;
											  break;
								 }

								 case (9) :
								 {
											  cout << "Hero used " << NinthSlotName << " and gain " << NinthSlotAbility << " additional health" << endl;
											  HeroHP = HeroHP + NinthSlotAbility;
											  NinthSlotName = ItemNothing;
											  NinthSlotAbility = ItemNothingAbility;
											  break;
								 }

								 case (10) :
								 {
											   cout << "Hero used " << TenthSlotName << " and gain " <<TenthSlotAbility << " additional health" << endl;
											   HeroHP = HeroHP + TenthSlotAbility;
											   TenthSlotName = ItemNothing;
											   TenthSlotAbility = ItemNothingAbility;
											   break;
								 }
									 break;
								 }
								 break;
					}
					default:
						cout << "Your hero yawned, and lost his turn" << endl;
						break;
					}
				}
				if (EnemyHP > 0)
				{

				}
				else
				{
					NowItemAbility = Enemies + rand() % 5;
					NowItemName = items[NowItemAbility];
					cout << "Hero won this battle" << endl << "He earned " << EnemyXP << " XP" << endl << "He got " << NowItemName << " (+" << NowItemAbility << ")" << endl<<"Which slot Hero want to put this item?"<<endl;
					cout << "0.Drop item" << endl;
					cout << "1.  " << FirstSlotName << " (+" << FirstSlotAbility << ")" << endl;
					cout << "2.  " << SecondSlotName << " (+" << SecondSlotAbility << ")" << endl;
					cout << "3.  " << ThirdSlotName << " (+" << ThirdSlotAbility << ")" << endl;
					cout << "4.  " << FourthSlotName << " (+" << FourthSlotAbility << ")" << endl;
					cout << "5.  " << FifthSlotName << " (+" << FifthSlotAbility << ")" << endl;
					cout << "6.  " << SixthSlotName << " (+" << SixthSlotAbility << ")" << endl;
					cout << "7.  " << SeventhSlotName << " (+" << SeventhSlotAbility << ")" << endl;
					cout << "8.  " << EighthSlotName << " (+" << EighthSlotAbility << ")" << endl;
					cout << "9.  " << NinthSlotName << " (+" << NinthSlotAbility << ")" << endl;
					cout << "10. " << TenthSlotName << " (+" << TenthSlotAbility << ")" << endl;
					cin >> HeroItemChoose;
					switch (HeroItemChoose)
					{
					case (0):
						{
							cout << "Hero dropped the item" << endl;
							break;
						}
					case (1):
					{
								cout << "Hero take " << NowItemName << " in his first slot" << endl;
									FirstSlotName = NowItemName;
									FirstSlotAbility = NowItemAbility;
									break;
					}
					case (2):
					{
								cout << "Hero take " << NowItemName << " in his second slot" << endl;
								SecondSlotName = NowItemName;
								SecondSlotAbility = NowItemAbility;
								break;
					}
					case (3) :
					{
								 cout << "Hero take " << NowItemName << " in his third slot" << endl;
								 ThirdSlotName = NowItemName;
								 ThirdSlotAbility = NowItemAbility;
								 break;
					}
					case (4) :
					{
								 cout << "Hero take " << NowItemName << " in his fourth slot" << endl;
								 FourthSlotName = NowItemName;
								 FourthSlotAbility = NowItemAbility;
								 break;
					}
					case (5) :
					{
								 cout << "Hero take " << NowItemName << " in his fifth slot" << endl;
								 FifthSlotName = NowItemName;
								 FifthSlotAbility = NowItemAbility;
								 break;
					}
					case (6) :
					{
								 cout << "Hero take " << NowItemName << " in his sixth slot" << endl;
								 SixthSlotName = NowItemName;
								 SixthSlotAbility = NowItemAbility;
								 break;
					}
					case (7) :
					{
								 cout << "Hero take " << NowItemName << " in his seventh slot" << endl;
								 SeventhSlotName = NowItemName;
								 SeventhSlotAbility = NowItemAbility;
								 break;
					}
					case (8) :
					{
								 cout << "Hero take " << NowItemName << " in his eighth slot" << endl;
								 EighthSlotName = NowItemName;
								 EighthSlotAbility = NowItemAbility;
								 break;
					}
					case (9) :
					{
								 cout << "Hero take " << NowItemName << " in his ninth slot" << endl;
								 NinthSlotName = NowItemName;
								 NinthSlotAbility = NowItemAbility;
								 break;
					}
					case (10) :
					{
								 cout << "Hero take " << NowItemName << " in his tenth slot" << endl;
								 TenthSlotName = NowItemName;
								 TenthSlotAbility = NowItemAbility;
								 break;
					}

					default:
						cout << "Sorry: " << NowItemName << " slip off Heroes hands and broken." << endl;
						break;
					}
					
					++Wins;
					BattleWins++;
					HeroXP = HeroXP + EnemyXP;
					


					break;
				}
				cout << endl;
				system("pause");
				cout << endl;
			}
			else
			{
				cout << "Hero loose this battle" << endl;
				BattleLooses++;
				++Looses;
				break;
				cout << endl;
				system("pause");
				cout << endl;
			}
		}
		NeedXP = 20 + 30 * HeroLevel;
		if (HeroXP >= NeedXP)
		{
			cout << "//////////////////////" << endl;
			cout << "/Hero earned a level!/" << endl << "//////////////////////" << endl;
			cout << "What atribute do you want to upgrade?" << endl << "1.Strenght (+1 to damage, when hero attack the enemy)" << endl << "2.Defense (-1 to damage, when hero deffending)" << endl << "3.Intelligence (+1 to heal rate)" << endl << "4.Vitality (+5 to hero's max HP)" << endl;
			cin >> LevelChoose;
			switch (LevelChoose)
			{
			case (1) :
			{
						 cout << "Hero became stronger!" << endl;
						 ++HeroStrenght;
						 break;
			}
			case (2) :
			{
						 cout << "Hero became more protected!" << endl;
						 ++HeroDefenseAbility;
						 break;
			}
			case (3) :
			{
						 cout << "Hero became more clever!" << endl;
						 ++HeroIntelligence;
						 break;
			}
			case (4) :
			{
						 cout << "Hero became more survivable!" << endl;
						 HeroVitality = HeroVitality + 5;
			}
			default:
				break;
			}
			cout << "What skill do you want to upgrade?" << endl << "1.Strong fist : damage +" << endl << "2.Shield attack : damage when deffending (+1 for each deffense)" << endl << "3.Fire ball : damage when healing (+1 for each intelligence)" << endl;
			cin >> LevelPerkChoose;
			switch (LevelPerkChoose)
			{
			case (1) :
			{
						 cout << "Hero fist now stronger!" << endl;
						 DamageUp = DamageUp + 0.25;
						 break;
			}
			case (2) :
			{
						 cout << "Hero teach how to do shield attack" << endl;
						 ++ShieldAttack;
						 break;
			}
			case (3) :
			{
						 cout << "Hero teach how to do fireball" << endl;
						 ++FireBall;
						 break;
			}
			}
			++HeroLevel;
			HeroXP = HeroXP - NeedXP;
		}
		else
		{

		}
		cout << endl;
		system("pause");
		cout << endl;
		if (Enemies == 1)
		{
			if (BattleLooses == 1)
			{}
			else
			{
				cout << "Where Heroe want to go?" << endl << "2.Stay in the " << location1 << endl << "3.Go to the next location" << endl;
				cin >> LocationChoose;
				if (LocationChoose == 2)
				{
					cout << "The Hero remains in the " << location1<<endl;
				}
				else
				{
					cout << "Hero is traveling to the next location" << endl;
					Enemies++;
				}
			}
		}
		else
		{
			if (BattleLooses == 1)
			{
				string StartLocationName = locations[StartLocation];
				string BackLocationName = locations[StartLocation - 1];

				cout << "Where Heroe want to go?" << endl << "1.Go back to the " << BackLocationName << endl << "2.Stay in the " << StartLocationName << endl;
				cin >> LocationChoose;
				switch (LocationChoose)
				{
				case (1) :
				{
							 cout << "Hero is going back to the " << BackLocationName << endl;
							 --Enemies;
							 break;
				}
				case (2) :
				{
							 cout << "Hero remains in the " << StartLocationName << endl;
							 break;
				}
				default:
					break;
				}

			}
			else
			{
				string StartLocationName = locations[StartLocation];
				string BackLocationName = locations[StartLocation - 1];
				
				cout << "Where Heroe want to go?" << endl << "1.Go back to the " << BackLocationName << endl << "2.Stay in the " << StartLocationName << endl << "3.Go to the next location" << endl;
				cin >> LocationChoose;
				switch (LocationChoose)
				{
				case (1):
				{
							cout << "Hero is going back to the " << BackLocationName<<endl;
							--Enemies;
							break;
				}
				case (2):
				{
							cout << "Hero remains in the " << StartLocationName << endl;
							break;
				}
				case (3):
				{
							cout << "Hero is going to the next location" << endl;
							++Enemies;
							break;
				}
				default:
					break;
				}
			}
		}
	}
	cout << "You lose " << Looses << " times" << endl;
	cout << "You win " << Wins << " times" << endl;
	system("pause");
	system("pause");
	system("pause");
	system("pause");
	system("pause");
	system("pause");
	return 0;
}