lugat = {
    'hello': {
        'uz': "Salom",
        'ru': "привет",
        'en': "Hello",
    }
}


def greet(ism, til='uz'):
    global lugat
    return f"{lugat['hello'].get(til, 'Salom')}, {ism}"


print(greet("Eshmat", 'ru'))
