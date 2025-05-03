#dictionary

capitals = {'USA':'Washington DC',
            'India':'New Delhi',
            'China':'Bejing',
            'Bangladesh':'dhaka'}
#print(capitals['Germany']) #using only print gives error so lower one is used
print(capitals.get('Germany'))

capitals.update({'Germany':'Berlin'})
capitals.update({'USA':'Las Vegas'})
capitals.pop('China')
capitals.popitem()  #removes the last item
# capitals.clear()

print(capitals.keys())
print(capitals.values())
print(capitals.items())

for key,value in capitals.items():
    print(f"{key}:  {value}")