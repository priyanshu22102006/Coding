def day_week(day):
    match day:
        case 1:
            return "its Sunday"
        case 2:
            return "its Monday"
        case 3:
            return "its Tuesday"
        case 4:
            return "its Wednesday"
        case 5:
            return "its Thursday"
        case 6:
            return "its Friday"
        case 7:
            return "its Saturday"
        case _: return None
print(day_week(36))
