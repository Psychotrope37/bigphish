# Bigphish
privilege escalation in OSX through systemwide root for all PID on sudo

For whatever reason OSX hand out root privs to all PID any time sudo is run... This is an example of weaponizing for gaining a reverse root shell in one line of bash on an otherwise unmodified system.  Great for a driveby attack with ducky or teensy on power users where simply providing the user with a fake prompt to enter their password won't work.  

# Solution:
Assign passwordless root only to the PID of that shell

# TODO:
 - eliminate false positives of unsuccessful sudo attempts triggering the exploit prematurely
 - add more payloads
