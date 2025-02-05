import requests
def download_file(url):
    local_filename = url.split('/')[-1]
    with requests.get(url, stream=True) as r:
        print("Download...")
        with open("D:/My Programming Languages/Python/Dl_img_one_by_one/images"+local_filename, 'wb') as f:
            print("Writting data to file")
            for chunk in r.iter_content(chunk_size=8192):
                f.write(chunk)
    f.close()
    print("Download completed")
    print("File saved as "+ local_filename)

    while 1:
        print("Welcome to the image downloader")
        image_url = input(str("Image url : "))
        download_file(image_url)