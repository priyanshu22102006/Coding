class Account:
    def __init__(self,bal,acc_no,debit,credit):
        self.account_no = acc_no
        self.balance = bal
        self.credit = credit
        self.debit = debit
    def Debit(self):
        sum = self.balance-self.debit
        print("For your account no ", self.account_no," the amt debited is ", self.debit)
        print("Balance is ", sum)
    def Credit(self):
        sum = self.balance+self.credit
        print("For your account no ", self.account_no," the amt credited is ", self.credit)
        print("Balance is ", sum)

user1 = Account(10000,40461539,0,2000)
user1.Credit()
user1.Debit()