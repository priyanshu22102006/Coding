#slicing = create a substring by extracting element from another string
#            indexcing[] or slicing{}
#            [start:stop:step]
name = "Priyanshu Ch. Sarker"
first_name = name[:10]   #[0:10]
middle_name = name[10:13]
end_name = name[14:]   #[14:end]
afunky_name = name[::2]   #[0:end:2]
reversed_name = name[::-1]  #[0:end:-1]

print(name)
print(first_name)
print(middle_name)
print(end_name)
print(afunky_name)
print(reversed_name)

website1 = "http://google.com"
website2 = "http://wikipedia.com"

slice = slice(7,-4)

print(website1[slice])
print(website2[slice])