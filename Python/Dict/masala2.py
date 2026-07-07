import pprint
products = {
    "Olma": 12000,
    "Banan": 18000,
    "Anor": 25000
}

pprint.pprint(products)
product = input("Kerakli mahsulotni kiriting: ")

# a = products.get(product, None)

if product in products.keys():
    print(f"{product} narxi: {products[product]} so'm")
else:
    print("Bunday mahsulot yo'q")
