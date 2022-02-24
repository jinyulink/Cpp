//sort string in Alphabetical order
//https://www.youtube.com/watch?v=td46p9oSIYI
//11.23(TUE)
    string array[5];
    input 5 words into array;
    string temp;
    for(int i=0;i<array.length;i++)
    {
        for(int j=i+1;j<array.length;j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
//sort string in Alphabetical order