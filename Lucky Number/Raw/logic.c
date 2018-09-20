int min_index=0;
for(int i=0;i<5;i++)
{
    for(int j=1;j<5;j++)
    {
        if(ab[min_index]>ab[j])
        min_index=j;
        else if(ab[min_index]==ab[j])
        {
            if(casecmp(ab[min_index,ab[j])>0)
            min_index=j;
        }
    }
}
