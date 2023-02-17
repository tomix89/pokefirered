# This is a Fork of Pokémon FireRed and LeafGreen by Pret
based on https://github.com/pret/pokefirered

I wanted to play this game a long time but there were some 'time waster' functions which really annoyed me. 
Then i found out that i can make changes as i wish to thanks to https://github.com/pret and his community: 
[Discord](https://discord.gg/d5dubZ3) and [IRC](https://web.libera.chat/?#pret).

I wanted the stock story and game experience (v1.1) without:
 1) text animation character by character -> instant text mode
 2) removing the 'We Hope To See You Again' text from the nurse in the healath care center
 3) add experience gain modifyer
 4) add type effectiveness to move chose screen
 5) skipping the battle intro, but only the part where the main hero throws the pokeball
 

I also need to say a huge thanks to https://github.com/Deokishisu with his https://github.com/Deokishisu/FRLG-Plus
repo, which contained the stuff i needed (among lot more) in some form.

From the wishlist I managed to accomplish:
 1) instant text mode. I modifyed the hack from Deokishisu so that when somebody want's to say 
a lot more than 2 lines, the wait function will be still active, so i can read the content. 
For eample in case of a 6 line text it will be: 2 lines (line 1 and 2) instant, wait for BUTTON_A, 
2 more lines (line 3 and 4) instant, wait for BUTTON_A, final lines, 
wait for BUTTON_A. As opposed to the original Deokishisu hack which blinks for a fraction of a 
second the first 2 pages (lines 1,2 then 3,4) and you stay with the fianl one.
 2) this was a quick one, just one liners on EventScript

To set up the repository, see [INSTALL.md](INSTALL.md), or wisit the original author's page.
