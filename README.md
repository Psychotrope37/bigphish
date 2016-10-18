# Bigphish
privilege escalation in OSX through systemwide root for all PID on sudo

For whatever reason OSX hand out root privs to all PID any time root it run... This is an example of weaponizing for gaining a reverse root shell in one line.  Great for a driveby attack with ducky or teensy on power users.

# Solution:
Assign passwordless root only to the PID of that shell

# TODO:
eliminate false positives of unsuccessful sudo attempts triggering the exploit prematurely
