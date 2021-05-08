int viralAdvertising(int n)
{
    int cumulative = 0;
    int shared = 5;
    
    for (int i = 0; i < n; ++i)
    {
        shared = (int)floor(shared/2);
        cumulative += shared;
        shared *= 3;
    }

    return cumulative;
}
