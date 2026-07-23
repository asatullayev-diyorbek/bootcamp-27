with open("Python/takrorlash2/maqolalar.txt", "r") as f:
    maqolalar = f.readlines()
    for maqola in maqolalar:
        if 'python' in maqola.lower():
            print(maqola)