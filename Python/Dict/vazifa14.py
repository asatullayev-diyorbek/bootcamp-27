matn = "salom dunyo! jnfkas. asfbjhsbf sfsa fsj"

natija = {}

for belgi in matn:
    if belgi.isalpha():
        natija[belgi] = natija.get(belgi, 0) + 1

print(natija)