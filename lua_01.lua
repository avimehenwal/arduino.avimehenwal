-- sample comment

print("hello world")

name = "avi"
surname = 'mehenwal'

io.write("Size of string ", #name, type(name), '\n')
-- \b \t \\ \" \'

-- reassign variables
name = 4
io.write("New value assigned to name ", name, type(name),'\n')

-- floating point are precise upto 13 digits
floatprecision = 1.999999999999 + 0.00000000000055
io.write(floatprecision)

longstring = [[
    This is a
    longgg
    long
    string
]]
io.write(longstring, type(longstring))

--[[
    string operations
    mathematical operations
    num = num + 1 NO num += 1
    ~= not equalto

    terniary operator
    canVote = age > 18 and true or false
    -- canVote = age > 18 ? true : false
--]]

age = 13
if age < 16 then
    io.write("Goto school")
    local localvar = 10
elseif (age <= 16) and (age < 18) then
    io.write("you can drive")
else
    io.write("else")
    end
