# malloc, calloc, realloc, free — 10 ta Oson Mashq

---

**1.** **malloc** yordamida 5 ta **int** uchun xotira ajrating. Har biriga 1, 2, 3, 4, 5 qiymatlarini berib, ekranga chiqaring. Oxirida **free** qiling.

---

**2.** Foydalanuvchidan bitta son (**n**) kiriting. **malloc** bilan n ta int uchun xotira ajrating va massivni 0 dan n-1 gacha to'ldirib chiqaring.

---

**3.** **calloc** yordamida 6 ta int uchun xotira ajrating. Hech qanday qiymat bermasdan, massivni ekranga chiqaring — barchasi nimaga teng ekanini ko'ring.

---

**4.** **malloc** bilan 4 ta **float** uchun xotira ajrating. Foydalanuvchidan 4 ta narxni kiritib, ularning yig'indisini hisoblang.

---

**5.** **malloc** yordamida 3 ta int uchun xotira ajrating va 1, 2, 3 bilan to'ldiring. Keyin **realloc** bilan hajmni 5 taga oshiring va yangi joylarga 4, 5 yozing. Hammasini chiqaring.

---

**6.** **int\* create_array(int n, int value)** funksiyasini yozing — malloc bilan n ta xotira ajratsin va barcha elementlarni berilgan value bilan to'ldirsin. Masalan, create_array(4, 7) chaqirilsa, natija 7, 7, 7, 7 bo'lishi kerak.

---

**7.** **calloc** yordamida 5 ta int massiv yarating. Foydalanuvchidan 5 ta son kiritib, ularning ichidan eng kattasini toping.

---

**8.** **malloc** bilan **char** massivi uchun 20 bayt xotira ajrating. Foydalanuvchidan ism kiritib, ekranga chiqaring. **free** qilishni unutmang.

---

**9.** **malloc** bilan 3 ta int uchun xotira ajrating va to'ldiring. **free** qilgandan keyin pointerni **NULL** ga tenglashtiring va NULL ekanligini tekshirib chiqaring.

---

**10.** **malloc** yordamida 2 ta int uchun xotira ajrating. **realloc** bilan hajmni 6 taga oshiring. Agar realloc **NULL** qaytarsa "Xotira yetmadi" deb chiqaradigan tekshiruv qo'shing.

---
