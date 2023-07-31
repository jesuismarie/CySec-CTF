# CTF Exercises Repository

This is a collection of Capture The Flag (CTF) exercises divided into five different categories: Binary, Linux, Network, Web, and SQL Injection. These exercises are designed to provide a practical approach to learn and hone cybersecurity skills.

## Binary 

In the Binary section, you will explore the fascinating world of binary exploits. You will understand how a machine understands the instructions given to it, how to find vulnerabilities in these instructions, and how to leverage them to your advantage.  Here, we have four exciting exercises for you. These exercises come with varying levels of difficulty and corresponding points that can be earned upon successful completion. The exercises are as follows:

### Exercises

#### 1. Welcome to the Binary World!

**Points:** 40

**Files:** 
- [welcome-to-binaries](welcome-to-binaries)

_Hint: strings are important_

#### 2. Code in the Shell

The goal is to get a shell running locally via sending a special payload to the binary.

**Points:** 125

**Files:** 
- [vuln.c](vuln.c)
- [vuln-shellcode](vuln-shellcode)

#### 3. One Print Statement Away...

**Points:** 150

**Files:** 
- [a.out](a.out)

_Hint: use gdb-pwndbg to go through the main function step-by-step_

#### 4. Chains of Love

The goal of the challenge is to open a shell

**Points:** 300

**Files:** 
- [hackme](hackme)
- [hackme.c](hackme.c)

_Hint:_

- use the python pwntools, it will help you with this
- google ROP chains













### Linux

This section is all about understanding and exploiting vulnerabilities in Linux-based systems. Here, you'll learn about various Linux exploits, privilege escalation techniques, kernel vulnerabilities, and much more. You will also learn about securing Linux systems to prevent these attacks.

### Network 

In the network section, you will learn about different network vulnerabilities and how to exploit them. You'll work with various tools and techniques related to network sniffing, spoofing, MITM attacks, etc. This section also includes exercises to understand how to secure a network against these attacks.

### Web 

The web section contains exercises designed to teach you the intricacies of various web vulnerabilities, how they are exploited, and how to secure a web application against these attacks. Here, you will deal with vulnerabilities such as Cross-Site Scripting (XSS), Cross-Site Request Forgery (CSRF), Server Side Request Forgery (SSRF), and many more.

### SQL Injection

SQL Injection is one of the most common and dangerous web vulnerabilities. In this section, you will understand how to exploit SQL Injection vulnerabilities to gain unauthorized access to data. Additionally, you will also learn about various techniques to prevent SQL Injection attacks.

Remember, the knowledge you gain here is to defend systems and applications, not to exploit them maliciously. Always have explicit, legal consent before testing any system or application for vulnerabilities.

_Happy learning and happy hacking (ethically, of course)!_
