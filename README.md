# Bigphish
Easy to use exploit crafter for privilege escalation in OSX through systemwide root for all PID on sudo

For whatever reason OSX hand out root privs to all PID any time sudo is run... This is an example of weaponizing for gaining a reverse root shell in one line of bash on an otherwise unmodified system.  Great for a driveby attack with ducky or teensy on power users where simply providing the user with a fake prompt to enter their password won't work.  

# Why This Matters:
Running any software as root is effectively giving any and all software running on the system root priviledges. Which is bad. 

# Solution:
Assign passwordless root only to instance of that shell

# TODO:
 - eliminate false positives of unsuccessful sudo attempts triggering the exploit prematurely
 - add more payloads
 - tor support for reverse shell??

# Changelog:
- V1.1 adds some small extras and a quick PoC of running bigphish on a teensy that will deploy the exploit in around 5 seconds on an unlocked mac
- V1.2 adds an exploit crafter for building process kill loops in OSX, even for processes owned by root or by other users along with an easy option to add custom commands from the interactive shell
- V1.3 adds DNS configuration to allow remote traffic hijacking
