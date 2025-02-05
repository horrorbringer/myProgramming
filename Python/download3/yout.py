from pytube import YouTube
link = input("Enter the link: ")
print("Downloding...")
YouTube(link).streams.first().download()
print("Video downloded successfully")