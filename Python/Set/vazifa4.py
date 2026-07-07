suzlar = ["olma", "banan", "olma", "uzum", "banan"]

suzlar_set = set(suzlar)
soni = 0

for suz in suzlar_set:
    if suzlar.count(suz) > 1:
        soni += 1

