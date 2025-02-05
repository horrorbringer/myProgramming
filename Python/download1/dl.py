import ssl
ssl._create_default_https_context = ssl._create_unverified_context
stored_folder = "/img"

img_url_1 = "  "
img_url_2 = "  "

img_file_1 = "img_3.jpg"
img_file_2 = "img_6.jpg"

# Method 1
import urllib.request
urllib.request.urlretrieve(img_url_1,stored_folder+img_file_1)

# Method 2
import wget
wget.download(img_url_2,stored_folder+img_file_2)