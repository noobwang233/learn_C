    char *s;
    s = (char *)malloc(sizeof(char) * 32);
    s = fgets(s, 32, fp);
    printf("s = %s\n", s);
    s = fgets(s, 32, fp);
    printf("s = %s", s);