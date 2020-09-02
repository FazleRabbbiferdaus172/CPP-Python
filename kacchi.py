'''amount_ingredients_needed = [5, 10, 1, 1, 3]


def can_cook(caoi, ain):
    cook = True
    for i in range(5):
        if caoi[i] < ain[i]:
            cook = False
            return cook
    return cook


def cooking(caoi, ain):
    for i in range(5):
        caoi[i] -= ain[i]
    return caoi


def selling(caoi, ain, price_of_kacchi):
    e = 0
    while can_cook(caoi, ain):
        caoi = cooking(caoi, ain)
        #print("func", caoi)
        e += price_of_kacchi
    #print("func", e)
    return caoi, e


def buy_ingredients(caoi, ain, poi, balance):
    for i in range(5):
        if caoi[i] < ain[i]:
            #print("dam", poi[i]*ain[i])
            balance -= poi[i]*ain[i]
            caoi[i] += ain[i]
            #print(balance, caoi)
        if balance == 0 or can_cook(caoi, ain):
            # print("break")
            break
    return caoi, balance


t = int(input())

for _ in range(t):
    price_of_ingredients = [int(x) for x in input().split()]
    current_amount_of_ingredients = [int(x) for x in input().split()]
    balance, price_of_kacchi = [int(x) for x in input().split()]
    earning = 0
    # earning = selling(current_amount_of_ingredients,
    #                  amount_ingredients_needed, price_of_kacchi)
    #balance += earning
    #print(balance, earning)
    while True:
        #print("in looop")
        if not balance and not can_cook(current_amount_of_ingredients,
                                        amount_ingredients_needed):
            # print("breaking")
            break
        if can_cook(current_amount_of_ingredients, amount_ingredients_needed):
            # print("earing")
            current_amount_of_ingredients, sell = selling(current_amount_of_ingredients,
                                                          amount_ingredients_needed, price_of_kacchi)
            earning += sell
            #print(earning, current_amount_of_ingredients)
            #balance += sell
        else:
            # print("buying")
            current_amount_of_ingredients, balance = buy_ingredients(current_amount_of_ingredients,
                                                                     amount_ingredients_needed, price_of_ingredients, balance)
            #print(balance, current_amount_of_ingredients)

    # balance = buy_ingredients(current_amount_of_ingredients,
    #                          amount_ingredients_needed, price_of_ingredients, balance)
    print(earning)
'''

amount_ingredients_needed = [5, 10, 1, 1, 3]

t = int(input())

for _ in range(t):
    price_of_ingredients = [int(x) for x in input().split()]
    current_amount_of_ingredients = [int(x) for x in input().split()]
    balance, price_of_kacchi = [int(x) for x in input().split()]
    earning = 0
    vault = 0
    cost = 0
    for i in range(5):
        # cost to cook one pot of kacchi
        cost += price_of_ingredients[i]*amount_ingredients_needed[i]
    for i in range(5):
        # price of the ingredients I currently have
        vault += price_of_ingredients[i]*current_amount_of_ingredients[i]

    balance += vault  # total balace including price of the ingredients I currently have

    earning = (balance // cost)*price_of_kacchi

    print(earning)
