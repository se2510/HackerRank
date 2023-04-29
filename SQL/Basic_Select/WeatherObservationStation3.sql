/*

Query a list of CITY names from STATION for cities that have an even ID number. Print the results in any order, but exclude duplicates from the answer.
The STATION table is described as follows:

[Station.jpg]

where LAT_N is the northern latitude and LONG_W is the western longitude.

*/

select distinct city from station where ID%2=0;