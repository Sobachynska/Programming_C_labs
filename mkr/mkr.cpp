//#include <iostream>
///* Опис структури, яка представляє монастир */
//struct mon {
//	char name[15]; /* назва */
//	char sc; /* школа */
//	int cnt; /* кількість ченців */
//	float sq; /* площа */
//} mm[10]; /* визначення масиву */
//int main()
//{
//	setlocale(LC_CTYPE, "ukr");
//	struct mon x; /* робоча змінна */
//	int n; /* кількість елементів в масиві */
//	int i, j; /* поточні індекси в масиві */
//	int m; /* індекс мінімального елементу */
//	/* Введення даних */
//	for (n = 0; n < 10; n++) {
//		printf("%d. Введіть: назву, школу, кількість, площу >", n + 1);
//		std::cin >> mm[n].name;
//		if (!strcmp(mm[n].name, "***")) break;
//		std::cin >> mm[n].sc;
//		std::cin >> mm[n].cnt;
//		std::cin >> mm[n].sq;
//	}
//	/* Виведення таблиці */
//	printf("+--------------------------------------------+\n");
//	printf("|Буддиські монастирі Японії перiода Нару |\n");
//	printf("|--------------------------------------------|\n");
//	printf("| Назва | Школа |Кількість | Площа |\n");
//	printf("| | | ченців | земель(га) |\n");
//	printf("|-----------|-------|----------|-------------|\n");
//	/* виведення рядків фактичних даних */
//	for (i = 0; i < n; i++)
//		printf("| %9s | %c | %3d | %-5.1f |\n",
//			mm[i].name, mm[i].sc, mm[i].cnt, mm[i].sq);
//	printf("---------------------------------------------\n");
//	/* сортування масиву */
//	for (i = 0; i < n - 1; i++) {
//		m = i; /* мінімальний елемент - перший */
//		for (j = i + 1; j < n; j++)
//			/* якщо поточний елемент > мінімального,
//			він стає мінімальним */
//			if (strcmp(mm[m].name, mm[j].name) > 0) m = j;
//		if (m > i) {
//			/* перестановка першого і мінімального елементів */
//			strncpy_s(x.name, mm[i].name, 14);
//			x.sc = mm[i].sc;
//			x.cnt = mm[i].cnt;
//			x.sq = mm[i].sq;
//			strncpy_s(mm[i].name, mm[m].name, 14);
//			mm[i].sc = mm[m].sc;
//			mm[i].cnt = mm[m].cnt;
//			mm[i].sq = mm[m].sq;
//			strncpy_s(mm[m].name, x.name, 14);
//			mm[m].sc = x.sc;
//			mm[m].cnt = x.cnt;
//			mm[m].sq = x.sq;
//		}
//	}
//	/* Виведення таблиці */
//	printf("*-------------------------------------------*\n");
//	printf("|Буддиські монастирі Японії перiода Нара |\n");
//	printf("|-------------------------------------------|\n");
//	printf("| Назва | Школа |Кількість | Площа |\n");
//	printf("| | | ченців | земель(га) |\n");
//	printf("|-----------|-------|----------|------------|\n");
//	for (i = 0; i < n; i++)
//		printf("| %9s | %c | %3d | %-5.1f |\n",
//			mm[i].name, mm[i].sc, mm[i].cnt, mm[i].sq);
//	printf("---------------------------------------------\n");
//	return 0;
//}
//	
	
	#include <iostream>
#define KST 25/* максимальна кількість студентів */
 int main()
 {
	 setlocale(LC_ALL, "ukr");
	 struct student {/* шаблон структури */
		 char name[35];
		 char grup[10];
		 long number;
		 double rating;
		
	} starr[KST], stud, * pst, * pstl, * pst2; /* структурні змінні */
	     int k, kst; double inrating;
		 std::cout << "Кількість студентів - ";
		 std::cin >> kst;
		 std::cout << "\tДaнi: ";
		 for (k = 0; k < kst; k++) {
			 std::cout << "\n" << k + 1 << "Прізвище, ім\'я: ";
			 std::cin >> starr[k].name;
			 std::cout << "група: ";
			 std::cin >> (starr + k)->grup;
			 std::cout << "номер студентського квитка: ";
			 std::cin >> starr[k].number;
			 std::cout << "середній бал: ";
			 std::cin >> inrating;
			 (starr + k)->rating = inrating;
			 
		 }
		 for (k = 0; k < kst; k++) {/* цикл сортування */
			 pstl = starr;
			 pst2 = starr + 1;
			 for (; pst2 < starr + kst - k; pstl++, pst2++)
				 if (pstl->rating < pst2->rating) {/* якщо сусідні струк- */
					 stud = *pstl; /* тури не впорядковані, */
					 *pstl = *pst2; /* то міняємо їх місцями */
					 *pst2 = stud;

				 }
		 }
		  std::cout << "\n\t Список студентів: \n";
		  for (k = 0, pst = starr; k < kst; k++, pst++)
			  std::cout << k + 1 << "\t" << pst->name << "\t" << pst->grup << "\t" <<
			 pst->number << "\t" << pst->rating << "\n";
		  return 0;
		 
 }





//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    setlocale(LC_CTYPE, "ukr");
//
//    int S = 100, N;
//    do {
//        cout << "Введiть ваш бал(вiд 0 до 100):";
//        cin >> N;
//    } while (N > 100 || N <= 0);
//
//    if (N >= S / 100 * 92) {
//        cout << "Ваш бал 12";
//    }
//    else if (N < S / 100 * 92 && N >= S / 100 * 70) {
//        cout << "Ваш бал 8";
//    }
//    else if (N < S / 100 * 70 && N >= S / 100 * 50) {
//        cout << "Ваш бал 5";
//    }
//    else cout << "Ваш бал 2";
//}
