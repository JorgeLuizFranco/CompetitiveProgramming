def invert_string(string):
    if string=='':
        return ""
    else:
        return invert_string(string[1:])+string[0]
        
