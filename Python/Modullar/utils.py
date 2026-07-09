from datetime import date

def countdown(kun, oy):
    this_year = date.today().year
    today = date.today()
    kunlar = date(year=this_year, month=oy, day=kun) - today
    if kunlar.days < 0:
        kunlar = date(year=this_year+1, month=oy, day=kun) - today
    return kunlar


if __name__ == "__main__":
    print(countdown(1, 12))

