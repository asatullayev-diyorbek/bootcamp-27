def eng_kop(*sonlar):
    kattasi = sonlar[0]
    for son in sonlar:
        if son > kattasi:
            kattasi = son
    return kattasi

print(eng_kop(6, 7, 48, 3))