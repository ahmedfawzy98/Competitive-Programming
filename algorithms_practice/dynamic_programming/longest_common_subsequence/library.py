from typing import Set

class LibraryInfo:
    books_count: int
    book_per_day: int
    signup_days: int
    books: Set[int]

    def __init__(self, books_count, book_per_day,signup_days, books):
        self.books_count = books_count
        self.book_per_day = book_per_day
        self.signup_days = signup_days
        self.books = books

libraries = []

with open('input.txt') as f:
    lines = f.readlines()
    (books_num, libraries_num, days) = list(map(int,lines[0].split()))
    books = list(enumerate(list(map(int, lines[1].split()))))
    for i in range(1,libraries_num+1):
        library_info = list(map(int, lines[2*i].split()))
        library_books = list(map(int, lines[(2*i)+1].split()))
        library = LibraryInfo(library_info[0],library_info[2],library_info[1],library_books)
        libraries.append(library)
        

free_days = days
last_library = 0
signed_libraries = []
while(free_days):
    if libraries[last_library].signup_days < free_days:
        signed_libraries.append(libraries[last_library])
        free_days -= signed_libraries[0]