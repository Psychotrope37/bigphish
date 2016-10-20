# Bigphish
privilege escalation in OSX through systemwide root for all PID on sudo

For whatever reason OSX hand out root privs to all PID any time sudo is run... This is an example of weaponizing for gaining a reverse root shell in one line of bash on an otherwise unmodified system.  Great for a driveby attack with ducky or teensy on power users where simply providing the user with a fake prompt to enter their password won't work.  

# Why This Matters:
Running any software as root is effectively giving any and all software running on the system root priviledges. Which is bad. 

# Solution:
Assign passwordless root only to the PID of that shell

# TODO:
 - eliminate false positives of unsuccessful sudo attempts triggering the exploit prematurely
 - add more payloads
 - tor support for reverse shell??

# Changelog:
V1.1 adds some small extras and a quick PoC of running bigphish on a teensy that will deploy the exploit in around 5 seconds on an unlocked mac
