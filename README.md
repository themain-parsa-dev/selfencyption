# selfencyption
I found a program and realized that its password is like this:  
+🚀re34tyy:/sssf🙂s@1212xUeer3rew3x&sadasd&sadasd#mainm🔥asdssdwxxxxasdT742222T742222Y.;ree3sad;72hfikkamvkmsmfkjW!dfffXsdf  
I had a strange feeling because I had never seen such a password during reverse engineering many programs. I thought to myself that this is not hashed, so it must have created a small encryption for itself. It wasn't difficult, I opened vscode, and since the program was a simple "crack me," the password was stored as text in a variable. But if you entered that password, it would fail. The password had to be sent as text and then converted into the encrypted version to be checked.  

I could have bypassed the login by modifying a few sections in IDA, but I had a feeling, like, what's the point? You need to find its password. So I needed to check some things. I realized that after the password is encrypted, it is stored in a variable. We could see its value in IDA. So what I did was take the 26 letters of the alphabet, along with spaces and some special character combinations. Using this method, I was able to figure out what each part of the string referred to.  

In short, I made a program:  
Encryption.c -> that was the same program. This program took text and encrypted it in the same format as the program.  
Well, I had to reverse it, so I made another program:  
Reversed.c -> that was the same program. This program took the encrypted text and gave the original text back.  

So, I figured out the program’s password: thefullpassword. And that's it. I got the original password of the program. I think if you're interested in reverse engineering, you can keep yourself entertained with simple exercises to avoid getting bored and to stay motivated.
