# Where should we write the GIF?
Output ./vhs.gif

# Set up a screen
Set FontSize 48
Set FontFamily "Comic Mono"
Set Width 1920
Set Height 1080
Set TypingSpeed 300ms
Set Theme "Dracula+"
Set Framerate 60
Set Padding 20
Set Margin 15
Set MarginFill "#104972"
Set WindowBar Colorful
Set WindowBarSize 40

# source the .bashrc file
Hide
Type "source ~/.bashrc"
Enter
Type "cd Python"
Enter
Type "clear"
Enter

Show
Sleep 2s

Type "python ./main.py"
Sleep 2s
Enter
Sleep 1s

# Admire the output for a bit.
Sleep 4s