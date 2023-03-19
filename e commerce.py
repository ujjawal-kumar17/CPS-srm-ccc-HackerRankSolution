def changeAds(base10):
    # Write your code here
    binary = bin(base10).replace("0b",'')
    binary = binary.replace("1","-1").replace("0","1").replace("-1","0")
    return int(binary,2)
