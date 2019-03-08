class Solution:
    def Met (self, acting_power, rating):
        
        if acting_power > 8 or rating > 8:
            if acting_power >= 2 and rating >= 2:
                print("Yes")
            else:
                print("No")
        elif acting_power < 2 or rating < 2:
            print("No")
        else:
             print("Maybe")