def main():
    b, c, kh = 0, 0, 0
    q, w, e, r = 0, 0, 0, 0
    x, z = 0.0, 0.0
    print("############################################")
    print("# --------- C A L C U L A T O R --------- #")
    print("#############################################")
    while kh != 5:
        print("SELECT YOUR OPERATION NO. :")
        print("[1] ADDITION")
        print("[2] MULTIPLICATION")
        print("[3] SUBSTRACTION")
        print("[4] DIVIDATION ")
        print("[5] exit")
        print("")
        kh = int(input())
        if kh == 1:
            print("ENTER TWO NO. :")
            b = int(input())
            c = int(input())
            print(b, "+", c)
            print("----------------------------")
            print("|| Ans :", b + c, "||")
            print("----------------------------")
        elif kh == 2:
            print("ENTER TWO NO. :")
            q = int(input())
            w = int(input())
            print(q, "*", w)
            print("----------------------------")
            print("|| Ans :", q * w, "||")
            print("----------------------------")
        elif kh == 3:
            print("ENTER TWO NO. :")
            e = int(input())
            r = int(input())
            print(e, "-", r)
            print("----------------------------")
            print("|| Ans :", e - r, "||")
            print("----------------------------")
        elif kh == 4:
            print("ENTER TWO NO. :")
            x = int(input())
            z = int(input())
            if z == 0:
               print(" ")
               print("YOU CAN NOT DIVIDE ANY NO. BY 0")
               print(" ")
          
            else:
               print(x, "/", z)
               print("----------------------------")
               print("|| Ans :", x/z, "||")
               print("----------------------------")

        elif kh == 5:
           print()
           break
          
print("________________________________")
print()
print("# H A V E  A  N I C E  D A Y ! #")
print("________________________________")
        
if __name__ == "__main__":
    main()