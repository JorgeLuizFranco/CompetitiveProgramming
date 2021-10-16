import requests
arch= open("index.txt","w")
r = requests.get("https://www.footyheadlines.com/")
if r.status_code == 200:
    print(r.text)
arch.write(r.text)