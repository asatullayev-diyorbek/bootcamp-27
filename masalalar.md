# Pointerlar — 20 ta Masala

---

**1.** `int x = 7` o'zgaruvchisi e'lon qiling. Uning manziliga ko'rsatuvchi pointer yarating. Pointer orqali qiymatni ekranga chiqaring.

---
	
**2.** `int a = 3, b = 8` berilgan. Pointer yordamida `a` ning qiymatini `b` ga, `b` ning qiymatini `a` ga almashtiring (`swap`).

---

**3.** `int n = 10` berilgan. `double_it(int *n)` funksiyasini yozing — pointer orqali qiymatni 2 ga oshirsin. Funksiyani chaqirib natijani chiqaring.

---

**4.** `int arr[] = {5, 10, 15, 20, 25}` berilgan. Pointer yordamida massivning 3-elementini (indeks 2) ekranga chiqaring. Indeks `[]` ishlatmang.

---

**5.** `int arr[] = {1, 2, 3, 4, 5}` berilgan. Pointer va `while` tsikli yordamida barcha elementlarni ekranga chiqaring. `arr[i]` shakli ishlatmang.

---

**6.** `int x = 100` berilgan. Pointer orqali qiymatni `200` ga o'zgartiring. O'zgarishdan oldin va keyin qiymatni ekranga chiqaring.

---

**7.** `int a = 4, b = 9` berilgan. Ikki xil pointer e'lon qiling — biri `a` ga, biri `b` ga ko'rsatsin. Ikkala pointer orqali qiymatlarni qo'shib ekranga chiqaring.

---

**8.** `int arr[] = {10, 20, 30, 40, 50}` berilgan. Pointer yordamida massivning yig'indisini hisoblang.

---

**9.** `int x = 5` berilgan. Pointer e'lon qiling va `x` ga yo'naltiring. Keyin pointer orqali `x` ni 3 ga ko'paytiring. Natijani `x` o'zgaruvchisi orqali chiqaring.

---

**10.** `int a = 15, b = 25` berilgan. `sum_and_diff(int a, int b, int *sum, int *diff)` funksiyasini yozing — yig'indi va ayirmani pointer orqali qaytarsin.

---

**11.** `int arr[] = {3, 7, 1, 9, 4, 6, 2}` berilgan. Pointer yordamida massivdagi maksimal elementni toping. Funksiya ko'rinishida yozing: `int* find_max(int *arr, int size)` — maksimal elementning **manzilinini** qaytarsin.

---

**12.** `int arr[] = {1, 2, 3, 4, 5}` berilgan. `reverse(int *arr, int size)` funksiyasini yozing — pointer arifmetikasidan foydalanib massivni teskari aylantirsin. Indeks `[]` ishlatmang.

---

**13.** Quyidagi dastur nima chiqaradi? Har qatorni tushuntiring:

```c
int x = 10, y = 20;
int *p = &x;
*p = 30;
p = &y;
*p += 5;
printf("%d %d\n", x, y);
```

---

**14.** `int arr[] = {5, 3, 8, 1, 6}` berilgan. `int* find_min(int *arr, int size)` funksiyasini yozing — minimal elementning manzilinini qaytarsin. Topilgan manzil orqali qiymatni `0` ga o'zgartiring.

---

**15.** `int arr[] = {2, 4, 6, 8, 10}` berilgan. `scale(int *arr, int size, int factor)` funksiyasini yozing — har elementni `factor` ga ko'paytirsin. Pointer arifmetikasidan foydalaning.

---

**16.** `int x = 5` berilgan. `int *p = &x` va `int **pp = &p` yarating. Faqat `pp` orqali `x` ning qiymatini `99` ga o'zgartiring. Natijani `x` orqali chiqaring.

---

**17.** `apply(int *arr, int size, int (*func)(int))` funksiyasini yozing — har elementga berilgan funksiyani qo'llaydi. Quyidagi funksiyalarni navbatma-navbat qo'llang:

```c
int square(int x)  { return x * x; }
int negate(int x)  { return -x; }
```

Massiv: `{1, 2, 3, 4, 5}`

---

**18.** `int arr[] = {10, 20, 30, 40, 50}` berilgan. Pointer yordamida massivni **ikki pointer bilan** (chap va o'ng) o'rta nuqtada uchrashtiring — ya'ni birinchi yarmi va ikkinchi yarmi yig'indisi teng bo'lgan o'rta nuqtani toping. (Bu massivda o'rta nuqta indeks 2 — `30`, chunki `10+20 = 40+50` emas; faqat pointer bilan o'rta elementga murojaat qiling.)

---

**19.** `char str[] = "salom"` berilgan. Pointer yordamida stringni teskari aylantiring. `strlen` va `[]` ishlatmang — faqat pointer arifmetikasi.

---

**20.** `int a = 2, b = 3, c = 5` berilgan. `int *ptrs[3] = {&a, &b, &c}` pointer massivi yarating. Tsikl yordamida har pointer orqali qiymatni ikkilantirib chiqaring. Natija: `4 6 10`.

---