create DATABASE innw;
use innw;

CREATE TABLE Artist(
id int not NULL,
singer nchar(20) ,
albom nchar(20),
year int,
sale int,
PRIMARY KEY(id)
);

INSERT INTO Artist
VALUES
  (1, "Bon Jovi", "Have a nice day", 2005, 1200000),
  (2, "Scorpions", "Blackout", 1982, 400000),
  (3, "Iron Maiden", "Dance of Death", 2003, 2300000),
  (4, "Bon Jovi", "Crush", 2000, 600000),
  (5, "Bon Jovi", "2020", 2020, 1500000),
  (6, "Iron Maiden", "Piece of Mind", 1983, 1200000),
  (7, "Scorpions", "Crazy World", 1990, 800000),
  (8, "Iron Maiden", "Rock in Rio", 2002, 1900000),
  (9, "Scorpions", "World Wide Live", 1985, 500000);
  
select
singer,
SUM(sale) as SUMsale
from Artist
group by singer
having sum(sale)>2000000;
