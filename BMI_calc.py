def wheightMetric():
    getWheightMetric = input("Please enter P for pounds or K for kiligrams or X to exit: ").lower()
    if getWheightMetric == "p":
        return getWheightMetric
    elif getWheightMetric == "k":
        return getWheightMetric
    elif getWheightMetric == "x":
        return getWheightMetric
    else:
        return "Please enter a valid option"
def heightMeteric():
    getHeightMetric = input("Please enter IN for inches or M for meters or X to exit: ").lower()
    if getHeightMetric == "in":
        return getHeightMetric
    elif getHeightMetric == "m":
        return getHeightMetric
    elif getHeightMetric == "x":
        return getHeightMetric
    else:
        return "Please enter a valid option"
def calculations():
    print()
def main():
    go = input("Would you like to find your BMI? Y or N: ").lower()
    prompt = True
    while prompt == True:
        go
        if go == "y":
            wselection = wheightMetric()
            if wselection == "x":
                print("Goodbye")
                prompt = False
            elif wselection == "p":
                print("You selected pounds")
                hselection = heightMeteric()
                if hselection == "x":
                    print("Goodbye")
                    prompt = False
                elif hselection == "in":
                    print("You selected inches")
                    pounds = float(input("Enter your weight: "))
                    inches = float(input("Enter your height: "))
                    raw_bmi = (pounds/(inches**2))*703
                    bmi = round(raw_bmi, 1)
                    if bmi < 18.5:
                        print(f"Your BMI of {bmi} is considered underweight")
                        prompt = False
                    elif bmi <= 24.9:
                        print(f"Your BMI of {bmi} is considered a healthy weight")
                        prompt = False
                    elif bmi <= 29.9:
                        print(f"Your BMI of {bmi} is considered overweight")
                        prompt = False
                    else:
                        print(f"Your BMI of {bmi} is considered obese")
                        prompt = False
                elif hselection == "m":
                    print("You selected meters")
                    print("Sorry, this combination (pounds + meters) is not supported.")
                else: 
                    print(heightMeteric)
            elif wselection == "k":
                print("You selected kilograms")
                hselection = heightMeteric()
                if hselection == "x":
                    print("Goodbye")
                    prompt = False
                elif hselection == "in":
                    print("You selected inches")
                    print("Sorry, this combination (kilograms + inches) is not supported.")
                elif hselection == "m":
                    print("You selected meters")
                    kilograms = float(input("Enter your weight: "))
                    meters = float(input("Enter your height: "))
                    raw_bmi = kilograms/(meters**2)
                    bmi = round(raw_bmi, 1)
                    if bmi < 18.5:
                        print(f"Your BMI of {bmi} is considered underweight")
                        prompt = False
                    elif bmi <= 24.9:
                        print(f"Your BMI of {bmi} is considered a healthy weight")
                        prompt = False
                    elif bmi <= 29.9:
                        print(f"Your BMI of {bmi} is considered overweight")
                        prompt = False
                    else:
                        print(f"Your BMI of {bmi} is considered obese")
                        prompt = False
                else: 
                    print(heightMeteric)
            else:
                print(wheightMetric) 
        elif go == "n":
            print("Goodbye")
            prompt = False
main()